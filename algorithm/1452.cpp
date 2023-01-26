//#include<iostream>
//#include<stack>
//using namespace std;
//const int len = 1e5 + 1;
//const int m = 1e9 + 1;
//struct vertex
//{
//    int data;
//    vertex* next = nullptr;
//    vertex(int a=0, vertex* n=nullptr)
//    {
//        data = a;
//        next = n;
//    }
//    void insert(int v)
//    {
//        this->next = new vertex(v,this->next);
//    }
//};
//vertex vertices[len];
//int visited[len] = { 0 }, self_circle[len] = { 0 },flag=0;
//stack<int>vi, counter;
//
//void function(int s,int x,int t,int time)
//{
//    int i = counter.top()+1;
//     if(!vi.empty())
//    {
//        vertex* p = vertices[s].next;
//        while (p)
//        {
//            if (p->data == t)
//            {
//                int l = counter.top() + 1;
//                int record;
//                if (l < time && (time - l) % 2 == 0)
//                {
//                    flag = 1;
//                    while (vi.top() != x)
//                    {
//                        record = vi.top();
//                        vi.pop();
//                        counter.pop();
//                        visited[record] = 0;
//                   }
//                }
//               
//                while (!vi.empty())
//                {                   
//                    record = vi.top();
//                    vi.pop();
//                    counter.pop();
//                    if (vi.empty())
//                    {
//                        vi.push(x);
//                        counter.push(0);
//                        break;
//                    }
//                    visited[record] = 0;
//                    if (self_circle[record])
//                    {
//                        flag = 1;
//                       
//                    }
//                }
//                if (l > time)
//                {
//                    flag = 0;
//                }
//            }
//            else if(!visited[p->data])
//            {
//                vi.push(p->data);
//                visited[p->data] = 1;
//                counter.push(i);
//                function(p->data,x, t,time);
//            }
//            p = p->next;
//        }
//        
//
//    }
//}
//int main()
//{
//	int n, m, s, t, k;
//	cin >> n >> m >> s >> t >> k;
//    int u, v;
//	while (m--)
//	{
//        
//        cin >> u >> v;
//        if (u != v)
//        {
//            vertices[v].insert(u);
//            vertices[u].insert(v);
//        }
//        else self_circle[u] = 1;
//	}
//    vi.push(s);
//    counter.push(0);
//    visited[s] = 1;
//    function(s, s, t,k);
//    if (flag)cout << "Yes";
//    else cout << "No";
//	return 0;
//}