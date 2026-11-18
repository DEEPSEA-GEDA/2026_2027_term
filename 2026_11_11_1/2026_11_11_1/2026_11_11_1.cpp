#define _CRT_SECURE_NO_WARNINGS 0
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
	int j = 0;
	int FIRST = rand() % 50 + 1;
	int arrA[10] = {FIRST};
	do
	{
	int A = rand() % 50 + 1;
	
	int change = 0;
	for (int i = 0; i <= j; i++)
	{
		if (A != arrA[i])
			continue;
		else
		{
			change = 1;
			break;
		}
	}
	if (change == 0)
	{
		arrA[j++] = A;
		
	}
	else continue;
	} while (j < 10);
	for (int i = 0; i < 10; i++)
		cout << arrA[i] << " ";
	return 0;
}
//让新生成的数分别与数组中已有的数比较