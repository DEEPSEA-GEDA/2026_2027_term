#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int main()

{

	int a = 0, b = 1, b1, a1, c, n = 3, x;

	cin >> x;

	if (x >= 3) {
		for (n; n <= x; n++)

		{

			a = a * n * (n - 1) * (n - 2) + b;

			b = n * (n - 1) * (n - 2) * b;

			a1 = a;

			b1 = b;

			while (true)

			{

				if (a1 % b1 != 0)

				{

					c = a1 % b1;

					a1 = b1;

					b1 = c;

				}

				else

				{

					c = b1;

					break;

				}

			}

			a = a / c;

			b = b / c;

		}

		a = a + 2 * b;

		cout << a << "/" << b << endl;
	}
	else if (x == 1)
		cout << "1";
	else if (x == 2)
		cout << "2";

	return 0;

}