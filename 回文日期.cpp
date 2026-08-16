//#include <iostream>
//
//using namespace std;
//
//int x, y;
//int day[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//
//int main()
//{
//	cin >> x >> y;
//
//	int ret = 0;
//
//	for (int i = 1; i <= 12; i++)
//	{
//		for (int j = 1; j <= day[i]; j++)
//		{
//			int k = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10;
//			int num = k * 10000 + i * 100 + j;
//			if (num >= x && num <= y)
//				ret++;
//		}
//	}
//	cout << ret;
//	return 0;
//}
//枚举月日就和年份无关了不用判断是不是闰年，把“验证”换成“构造”不枚举 8 位数再判断回文，而是枚举月日直接拼出回文，“判断”这步就没了。