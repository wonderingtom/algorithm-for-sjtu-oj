//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//const int len = 1000001;
//int price[len];
//priority_queue<int, vector<int>, greater<int>>q;
//int main()
//{
//	
//	int n;
//	long long profit = 0;
//	cin >> n;
//	
//	for (int i = 0; i < n; i++)cin >> price[i];
//	for (int i = 0; i < n; i++)
//	{
//		q.push(price[i]);
//		if (q.top() < price[i])
//		{
//			profit += price[i] - q.top();
//			q.pop();
//			q.push(price[i]);
//			
//		}
//	}
//	cout << profit;
//	return 0;
//}