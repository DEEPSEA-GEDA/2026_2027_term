
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char arr1[1000];
	int A;
	do 
	{
		A = 0;
		cout << "请输入一个大于零的整数：\n";
		cin.getline(arr1, sizeof(arr1));
		for (int i = 0; arr1[i]!='\0'; i++)
		{
			if (arr1[i] < '0' || arr1[i]>'9')
			{
				A = 1;
			}
			if (arr1[0] == 0)
				A = 1;
			if (A == 1)
				cout << "请输入正数，而非0或负数\n";

		}

	} while (A != 0);
	int arr2[10] = {0};
	for (int i = 0; arr1[i] != '\0'; i++)
	{
		arr2[arr1[i] - '0']++;
	}
	cout << "频度统计结果：\n";
	for (int i = 0; i < 10; i++)
	{
		if (arr2[i] > 0)
		{
			cout << i << "    " << arr2[i]<<"\n";
		}
	}
	cout << "组合后的最大数为：";
	for (int i = 9; i >=0; i--)
	{
		if (arr2[i] >0)
		{
			cout << i ;
		}
	}

	return 0;
}
