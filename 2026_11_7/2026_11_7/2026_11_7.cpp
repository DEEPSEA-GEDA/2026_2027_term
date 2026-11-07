#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()

{



	double high = 1.0;

	double sum0, sum = 0;

	do {

		int x = 0;

		int n = 1 / high;

		sum0 = sum;

		sum = 0;

		double a = 0, fa, fh;

		fh = exp(high);

		for (x; x < n; x++)

		{

			fa = exp(a);

			sum = sum + (fa + fa * fh) / 2.0;

			a = a + high;

		}

		sum *= high;

		high = high / 2.0;

	} while (fabs(sum0 - sum) >= 1e-6);

	cout << fixed << setprecision(6) << sum << endl;

	return 0;

}