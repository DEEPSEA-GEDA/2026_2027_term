#include <iostream>

using namespace std;

int main()

{

	int num, guess;

	char ch;

	while (true)

	{

		cout << "1-100猜数字游戏\n输入0重新开始，输入101再次确认后退出\n";

		num = rand() % 100 + 1;

		while (true)

		{

			cout << "请输入:" << endl;

			cin >> guess;

			if (guess == 0)

			{

				cout << "已退出\n";

				return 0;

			}

			else if (guess == num)

			{

				cout << "猜中啦\n";

				break;

			}

			else if (guess < num)

			{

				cout << "小了\n";

				continue;

			}

			else if (guess > num && guess < 101)

			{

				cout << "大了\n";

				continue;

			}

			else

			{

				cout << "重新开始\n";

				break;

			}

		}

		cout << "重新开始(#)/退出(*)：\n";

		cin >> ch;



		if (ch == '#')

			continue;

		if (ch == '*')

			break;

	}

	return 0;

}

