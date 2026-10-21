#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int p, q, r, s;
	int count = 0;
	for (p = 2; p <= 4; p++)
	{
		int qmax = (3 * p + p - 2) / (p - 1);
		for (q = p; q <= qmax; q++)
		{
			if ((p * q - p - q) <= 0)//防止除零
				continue;
			int rmax = (2 * p * q + (p * q - p - q) - 1) / (p * q - p - q);
			for (r = q; r <= rmax; r++)
			{
				if ((p * q * r - p * q - p * r - r * q) <= 0)//防止除零
					continue;
				s = (p * q * r) / (p * q * r - p * q - p * r - r * q);
				if (s * (p * q * r - p * q - p * r - r * q) == (p * q * r))//检验
				{
					count++;
					cout << "solution:(" << p << "," << q << "," << r << "," << s << ")\n";
					
				}
			}
		}

	}
	cout << "个数:" << count;
	return 0;
}