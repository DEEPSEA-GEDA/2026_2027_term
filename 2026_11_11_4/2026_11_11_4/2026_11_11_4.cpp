#include <iostream>
using namespace std;
int main()
{

	char keyboard[] = "~1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char message[] = "O S, GOMR YPFSU/";
    int len = strlen(keyboard);

    for (int i = 0; message[i] != '\0'; i++) {
        char c = message[i];
        if (c == ' ') {
            cout << ' ';  
            continue;
        }
        
        bool found = false;
        for (int j = 0; j < len; j++) {
            if (keyboard[j] == c) {
                cout << keyboard[j - 1];  // 左移一位 = 还原
                found = true;
                break;
            }
        }
        if (!found) cout << c;  
    }
    cout << endl;
    return 0;
}

