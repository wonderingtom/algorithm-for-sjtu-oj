//#include<iostream>
//#include<queue>
//using namespace std;
//const int M = 301;
//const int N = 301;
//int pre[N] = { 0 };
//int is_edge[M][M] = { 0 };
//struct edge {
//    int next, to, flow;
//};
//edge e[M * 2]; // back edges
//int edge_cnt = 2; // to make reverse(e[x]) = e[x ^ 1], and avoid use number 0
//int list_head[N] = { 0 }; // init as 0
//int maximum = 202;
//void add_edge(int u, int v, int flow) {
//    
//    if (is_edge[u][v])
//    {
//        e[is_edge[u][v]].flow += flow;
//        return;
//    }
//    if (is_edge[v][u])
//    {
//        add_edge(u, maximum, flow);
//        add_edge(maximum, v, flow);
//        maximum++;
//        return;
//    }
//    e[edge_cnt] = { list_head[u], v, flow };
//    is_edge[u][v] = edge_cnt;
//    list_head[u] = edge_cnt++;
//    e[edge_cnt] = { list_head[v], u, 0 };
//    list_head[v] = edge_cnt++;
//}
//void traverse(int u,int v,int c) {
//    for (int cur = list_head[u]; cur != 0; cur = e[cur].next) {
//        // do something with e[cur]
//        if (e[cur].to == v)
//        {
//            e[cur].flow -= c;
//            e[cur ^ 1].flow += c;
//        }
//    }
//}
//int minimum;
//int flag;
//void bfs(int n)
//{
//    int visited[N] = { 0 };
//    flag = 0;
//    minimum = N;
//        queue<int>counter;
//        counter.push(1);
//        
//        visited[1] = 1;
//        while (!counter.empty())
//        {
//            int c = counter.front();
//            counter.pop();
//            if (c == n)break;
//            for (int i = list_head[c]; i != 0; i = e[i].next)
//            {
//                
//                if (!visited[e[i].to]&&e[i].flow)
//                {
//                    if (e[i].to == n)flag = 1;
//                    visited[e[i].to] = 1;
//                    pre[e[i].to] = c;
//                    counter.push(e[i].to);
//                    if (e[i].flow < minimum)minimum = e[i].flow;
//                }
//            }
//        
//           
//        }
//}
//int Edmonds_Karp(int n)
//{
//    int flow=0;
//    while (true)
//    {
//        bfs(n);
//        if (flag)
//        {
//            int u = pre[n], v = n;
//            while (u != 0)
//            {
//                traverse(u, v, minimum);
//                v = u;
//                u = pre[u];
//            }
//            flow += minimum;
//        }
//        else break;
//    }
//    return flow;
//}
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    int u, v,f;
//    while (m--)
//    {
//        cin >> u >> v >> f;
//        if (u == v)continue;
//        add_edge(u, v, f);
//    }
//    cout << Edmonds_Karp(n);
//	return 0;
//}