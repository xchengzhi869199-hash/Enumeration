#include <iostream>

using namespace std;

const int N = 1e4 + 10;

int a[N], b[N];
int n;


bool check(int first)
{
	a[1] = first;
	for (int i = 2; i <= n + 1; i++)
	{
		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
		if (a[i] < 0 || a[i]>1)
			return false;
	}
	if (a[n + 1] == 0) return true;
	else
		return false;
}


int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> b[i];
	int ret = 0;

	ret = check(1) + check(0);

	cout << ret << endl;

	return 0;
}