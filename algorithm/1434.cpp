//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int len = 1e5 + 5;
//int people[len] = { 0 };
//priority_queue<double, vector<double>, greater<double>>q;
//int main()
//{
//	int n, w,real_cost;
//	double cost=0, p;
//	cin >> n >> w >> p;
//	double v;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v;
//		q.push(v);
//	}
//	double pointer1, pointer2;
//	while (!q.empty())
//	{
//		pointer1 = q.top();
//		q.pop();
//		if (!q.empty()) 
//		{
//			pointer2 = q.top();
//			q.pop();
//		}
//		else break;
//		cost += (pointer1 + pointer2) * p / 100;
//		q.push(pointer1 + pointer2);
//	}
//	real_cost = cost;
//	if (cost - (double)real_cost > 0)real_cost++;
//	cout << real_cost;
//	return 0;
//	 }