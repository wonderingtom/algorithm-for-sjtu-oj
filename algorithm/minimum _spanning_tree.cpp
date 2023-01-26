//// algorithm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//#include <iostream>
//
//using namespace std;
//
//int graph[5001][5001] = { 0 };
//int main()
//{
//    int n, m;//n，m作为点集和边集
//    cin >> n >> m;
//    int copy = m;
//    int start, end, weight;
//    while (copy--)
//    {
//        cin >> start >> end >> weight;
//        if (start == end)continue;//jump self circle
//        if (graph[start][end] && graph[start][end] > weight)
//        {
//            graph[start][end] = weight;
//            graph[end][start] = weight;
//        }
//        else if(!graph[start][end])
//        {
//            graph[start][end] = weight;
//            graph[end][start] = weight;
//        }
//    }//initialize
//    int cost[5001] , visited[5001] = { 0 },counter=0,sum=0,current_point=1;
//    cost[1] = 0;
//    
//    for (int i = 2; i <= n; i++)cost[i] = 100000;
//    while (counter < n)
//    {
//        counter++;
//        visited[current_point]++;
//        for (int i = 1; i <= n; i++)
//            if (graph[current_point][i]&&!visited[i] && graph[current_point][i] < cost[i])cost[i] = graph[current_point][i];
//        //renew every cost of current_point's neighbor
//        int min = 100000;
//        for(int i=1;i<=n;i++)
//            if (!visited[i] && cost[i] < min)
//            {      
//                min = cost[i];
//                current_point = i;
//                            }
//    }
//    for (int i = 1; i <= n; i++)sum += cost[i];
//    cout << sum;
//    return 0;
//}
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门使用技巧: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
