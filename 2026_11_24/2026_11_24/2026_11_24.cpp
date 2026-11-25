#include <iostream>
using namespace std;

int main() {
    const int money = 1000;      // 兑换总金额
    int a, b, c;                              // 1元、5元、10元的数量
    int loop_count = 0;               // 循环次数统计
    int i = 0;                                 // 统计方案总数
    bool has_solution = false;     // 是否有解标记

    //  补充代码，找出所有满足条件的兑换方案并输出，统计方案总数和总循环次数
    for (c=50;c<=70; c++)
    {
        for (b = 50; b <= 90; b++)
        {
            a = 1000 - 10 * c - 5 * b;
            if (a < 50)
                continue;
            loop_count++;
            cout << "第" << loop_count << "种方案为：1元" << a << "张，5元" << b << "张，10元" << c << "张\n";
            has_solution = true;
        }
    }




    if (!has_solution) {
        cout << "此问题无解" << endl;
    }
    else {
        cout << "总循环次数：" << loop_count << endl;
    }

    return 0;
}

/*回答问题：在注解中详细说明你采用的方法为什么可以减少循环次数？
* 答：
*
*
*
*
*/