#include <iostream>
#include <iomanip>

using namespace std;

//int main() {
//    double income;
//    cout << "请输入个人全年收入: ";
//    cin >> income;
//
//    
//    double tax = 0.0;
//
//    
//    if (income <= 36000) {
//        tax = income * 0.03;
//    }
//    else if (income <= 144000) {
//        tax = income * 0.10 - 2520;
//    }
//    else if (income <= 300000) {
//        tax = income * 0.20 - 16920;
//    }
//    else if (income <= 420000) {
//        tax = income * 0.25 - 31920;
//    }
//    else if (income <= 660000) {
//        tax = income * 0.30 - 52920;
//    }
//    else if (income <= 960000) {
//        tax = income * 0.35 - 85920;
//    }
//    else {
//        tax = income * 0.45 - 181920;
//    }
//
//    cout << fixed << setprecision(2);
//    cout << "应当年缴纳税款: " << tax << " 元" << endl;
//
//    return 0;
//}
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double income;
    cout << "请输入个人全年收入: ";
    cin >> income;

    double bounds[] = { 36000, 144000, 300000, 420000, 660000, 960000, 1e18 };
    double rates[] = { 0.03, 0.10, 0.20, 0.25, 0.30, 0.35, 0.45 };
    double deductions[] = { 0, 2520, 16920, 31920, 52920, 85920, 181920 };

    double tax = 0.0;
   for (int i = 0; i < 7; ++i) 
   {
         if (income <= bounds[i]) 
         {
                tax = income * rates[i] - deductions[i];
                break;
         }
   }
    
    cout << fixed << setprecision(2);
    cout << "应当年缴纳税款: " << tax << " 元" << endl;

    return 0;
}