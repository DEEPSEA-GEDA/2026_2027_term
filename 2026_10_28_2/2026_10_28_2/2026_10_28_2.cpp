#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()

{

double x = 1,x1=1,fx;

int count = 0;

do 

{

x = x1;

x1 = (x1 * x1 + 2 - exp(x)) / 3;

fx = x1 * x1 - 3 * x1 + 2 - exp(x);

count++;

} while (fabs(x1 - x) > 1e-8);

cout << "方程的根" << x1 << endl << "迭代次数" << count << endl << "f(x)=" << fx << endl;

return 0;

}