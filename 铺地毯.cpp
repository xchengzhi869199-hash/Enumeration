//#include <iostream>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int n;
//int chess[N][N],a[N],b[N],g[N],k[N];
//int x, y;
//
//
//int find()
//{
//	for (int i = n; i > 0; i--)
//	{
//		if (a[i] <= x && b[i] <= y && a[i] + g[i] >= x && b[i] + k[i] >= y)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		cin >> a[i] >> b[i] >> g[i] >> k[i];
//	cin >> x >> y;
//
//	cout << find() << endl;
//
//	return 0;
//}

//学会从后往前找，逆序枚举