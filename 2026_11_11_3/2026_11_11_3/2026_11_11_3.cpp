#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[10];
	int change = 0;
	cin.getline(str1, sizeof(str1));
	for (int i = 0; i < 5; i++)
	{
	if (str1[i] > '9' || str1[i] < '0')
			change = 1;
	}
	if (str1[0] == '0'||strlen(str1)!=5)
		change = 1;
	if (change == 1)
		cout << "非法" << endl;
	else
	{
		if (str1[0] == str1[4] && str1[1] == str1[3])
			cout << "是" << endl;
		else
			cout << "否";

	}
	return 0;
}

