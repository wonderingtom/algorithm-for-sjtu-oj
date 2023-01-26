#include<iostream>
#include<queue>
using namespace std;
const int M = 10007;
const int N = 307;
int net;
int pre[N] = { 0 };
int matrix[101][101];

struct edge {
    int next, to, flow;
};
edge e[M * 2]; // back edges
int edge_cnt = 2; // to make reverse(e[x]) = e[x ^ 1], and avoid use number 0
int list_head[N] = { 0 }; // init as 0
void add_edge(int u, int v, int flow) {

    e[edge_cnt] = { list_head[u], v, flow };
    list_head[u] = edge_cnt++;
    e[edge_cnt] = { list_head[v], u, 0 };
    list_head[v] = edge_cnt++;
}
void traverse(int u, int v, int c) {
    for (int cur = list_head[u]; cur != 0; cur = e[cur].next) {
        // do something with e[cur]
        if (e[cur].to == v)
        {
            e[cur].flow -= c;
            e[cur ^ 1].flow += c;
            if (e[cur].to >= 2 + net && e[cur].to <= 2 * net + 1)matrix[u-1][v-net-1] = 0;
        }
    }
}
int minimum;
int flag;
void bfs(int n)
{
    int visited[N] = { 0 };
    flag = 0;
    minimum = N;
    queue<int>counter;
    counter.push(1);

    visited[1] = 1;
    while (!counter.empty())
    {
        int c = counter.front();
        counter.pop();
        if (c == n)break;
        for (int i = list_head[c]; i != 0; i = e[i].next)
        {

            if (!visited[e[i].to] && e[i].flow)
            {
                if (e[i].to == n)flag = 1;
                visited[e[i].to] = 1;
                pre[e[i].to] = c;
                counter.push(e[i].to);
                if (e[i].flow < minimum)minimum = e[i].flow;
            }
        }


    }
}
int Edmonds_Karp(int n)
{
    int flow = 0;
    while (true)
    {
        bfs(n);
        if (flag)
        {
            int u = pre[n], v = n;
            while (u != 0)
            {
                traverse(u, v, minimum);
                v = u;
                u = pre[u];
            }
            flow += minimum;
        }
        else break;
    }
    return flow;
}
int matrix1[107][107];
int main()
{
    int n;
    cin >> n;
    net = n;
    int f;
    for (int i = 2; i <= n + 1; i++)
        add_edge(1, i, 1);
    for (int i = n + 2; i <= 2 * n + 1; i++)
        add_edge(i, 2 * n + 2, 1);
    for (int i = 2; i <= n + 1; i++)
    {
        for (int j = 2 + n; j <= 2 * n + 1; j++)
        {
            f = 0;
            cin >> f;
            matrix[i - 1][j - n - 1]=matrix1[i-1][j-n-1] = f;
            if (f)add_edge(i, j, 1);
        }
    }
    if (Edmonds_Karp(2 * n + 2) != n)
    {
        cout << "No";
        return 0;
    }
    else
    { 
        cout << "Yes" << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)

            {
                if ((!matrix[i][j]&&matrix1[i][j])||(matrix[i][j]&&!matrix1[i][j]))
                    cout << 1 << " ";
                else cout << 0 << " ";
            }
            cout << endl;
        }
    }
       
    return 0;
}