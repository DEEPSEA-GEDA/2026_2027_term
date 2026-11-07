#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n = 0;
	double h = 1;
	double fa = 0,fa1=0;
	double fb = 0,fb1=0;
	cout << setw(4) << "iter" << setw(10) << "h" << setw(10) << "f(x-h)" << setw(10) << "f(x+h)\n";
	for (n; n < 100; n++)
	{
		fa1 = fa;
		fb1 = fb;
		fa = sin(h) / h;
		fb = sin(-h) /(- h);
		if ((fabs(fa - fa1) < 1e-6) && (fabs(fb - fb1) < 1e-6))
			break;
		cout <<fixed<<setprecision(6)<< setw(4) << n+1 << setw(10) << h<< setw(10) << fa << setw(10) << fb<<endl;
		h = h / 2;
	}
	cout << "Limit as x->0 of sin(x)/x is " << fa << endl;
	return 0;
}

