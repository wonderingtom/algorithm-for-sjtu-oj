//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int len = 1e5 + 1;
//struct item
//{
//	int s;
//	int t;
//};
//
//
//item items[len];
//bool compare(item s1, item s2)
//{
//	return s1.t < s2.t;
//}
//int main()
//{
//	int n, m, x;
//	int  a;
//	
//	cin >> n >> m >> x;
//	int current_day = 0;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> items[i].s >> items[i].t >> a;
//	}
//	sort(items,items+m, compare);
//	int profit = 0;
//	for (int i = 0; i < m; i++)
//	{
//		if (current_day < items[i].s)
//		{
//			profit++;
//			current_day = items[i].t;
//		}
//		
//	}
//	cout << profit;
//	return 0;
//}