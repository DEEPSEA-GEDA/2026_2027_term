#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()

{

	int n = 0;

	int Y0 = 2000, L0 = 20000, O0 = 5000, L1 = 20000;

	double a;

	for (n; n <= 20; n++)

	{

		a = (double)O0 / (O0 + L0 + Y0);

		cout << "第" << setw(2) << n << "年末：" << setw(8) << Y0 << setw(8) << L0 << setw(8) << O0 << setw(8) <<

			fixed << setprecision(3) << a << endl;//预测，老龄化程度减轻

		O0 = 0.02 * L0 + 0.9 * (int)O0;

		L1 = (int)Y0 + 0.98 * (int)L1;

		Y0 = 0.05 * L0;

		L0 = L1;

	}

	return 0;

}