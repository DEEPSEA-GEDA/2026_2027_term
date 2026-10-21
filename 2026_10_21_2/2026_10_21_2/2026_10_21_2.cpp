#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, n;
	cout << "数字和项数：" << endl;
	cin >> a >> n;
	int sum = a, s = 1;
	int r = a;
	for (s; s < n; s++)
	{
		r = 10 * r + a;
		sum += r;
	}
	cout << sum;
	return 0;
}