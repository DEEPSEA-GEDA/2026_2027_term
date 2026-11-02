#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()

{

	double a = 0.00001, b = 2;

	int count = 0;

	double fa, fb, fmid, mid;

	fa = atan(a) + log(a);

	fb = atan(b) + log(b);

	do

	{


		mid = (a + b) / 2;

		fmid = atan(mid) + log(mid);

		if ((fa * fmid) > 0)

		{
			a = mid;

			fa = fmid;
		}

		else

		{
			b = mid;

			fb = fmid;
		}

		count++;

	} while (fabs(b - a) >= 1e-12);

	cout << mid << endl << count << endl;

	return 0;

}