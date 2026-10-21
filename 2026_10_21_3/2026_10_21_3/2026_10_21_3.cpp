#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	cin >> x;
	double EPS = 1E-6;
	double t = (x - 1) / x;
	double ln = t;
	double t0 = t;
	int n = 1;
	while (fabs(t0) > EPS)
	{
		t0 = t0 * t * n / (n + 1);
		ln += t0;
		n++;
	}
	cout << ln << endl;
	return 0;
}