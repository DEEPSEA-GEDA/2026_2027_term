#define CRU_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	char str1[50];
	int arrA[50] = { 0 };
	int j = 0;
	cin.getline(str1, sizeof(str1));
	for (int i = 0; i < 50; i++)
	{
		if (str1[i] >= '0' && str1[i] <= '9')
			j = j * 10 + str1[i]-'0';
		else continue;
	}
	cout << j;
	return 0;
}
