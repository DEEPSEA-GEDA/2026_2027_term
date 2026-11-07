#include <iostream>
#define YEAR_START 2005
#define YEAR_END 2020
#define YEARS 16

using namespace std;

int main()
{
	//自 2005 年起全国人均可支配收入
	double avg[YEARS] = { 0,     0,     0,     0,     0,     0,     0,     0,     18311, 20167, 21966, 23821, 25974, 28228, 30733, 32189 };

	//自 2005 年起全国【城镇】人均可支配收入
	double cty[YEARS] = { 10493, 11759, 13786, 15781, 17175, 19109, 21810, 24565, 26955, 28844, 31195, 33616, 36396, 39251, 42359, 43834 };

	//自 2005 年起全国【农村】人均可支配收入
	double rrl[YEARS] = { 0,     0,     0,     0,     0,     0,     0,     0,     0,     10489, 11422, 12363, 13432, 14617, 16021, 17131 };

	//请统计：
	//	1. 请统计自2006年以来，城镇居民人均可支配收入增长率最高和最小的年份
	//     增长率 = （今年数据 – 去年数据） / 去年数据 × 100 % ）；

	double maxrate = -1, minrate = 999;
	int maxyear = 0, minyear = 0;

	for (int i = 1; i < YEARS; ++i) {
		if (cty[i - 1] != 0) {
			double rate = (cty[i] - cty[i - 1]) / cty[i - 1] * 100.0;
			if (rate > maxrate) { maxrate = rate; maxyear = YEAR_START + i; }
			if (rate < minrate) { minrate = rate; minyear = YEAR_START + i; }
		}
	}
	cout << "城镇增长率最高: " << maxyear << "年 (" << maxrate << "%)" << endl;
	cout << "城镇增长率最小: " << minyear << "年 (" << minrate << "%)" << endl << endl;
	

//	2. 请通过统计说明，表中近5年来，城镇居民人均可支配收入的平均增长率，
//     与农村居民人均可支配收入的平均增长率哪个更高？
	double ctysum = 0, rrlsum = 0;
	for (int i = 11; i < YEARS; ++i) {
		ctysum += (cty[i] - cty[i - 1]) / cty[i - 1] * 100.0;
		if (rrl[i - 1] != 0) rrlsum += (rrl[i] - rrl[i - 1]) / rrl[i - 1] * 100.0;
	}
	double cty_avg = ctysum / 5.0;
	double rrl_avg = rrlsum / 5.0; // 近5年农村均有数据

	cout << "近5年城镇平均增长率: " << cty_avg << "%" << endl;
	cout << "近5年农村平均增长率: " << rrl_avg << "%" << endl;
	cout << "结论: " << (rrl_avg > cty_avg ? "农村" : "城镇") << "平均增长率更高。" << endl << endl;





return 0;
}


//	3. 若需要你从数据中预测农村居民人均可支配收入有没有可能在未来赶上甚至
//     超过城镇居民人均可支配收入，你会通过什么样的方法来预测？请在 .c 或
//     .cpp 中描述算法设计的思路，也可以通过算法实现（附带说明注解）	
//1. 计算城乡收入比(城镇/农村)，观察其是否逐年下降
//2. 采用线性回归数学模型预测未来趋势，计算r，y^,x^,用合适的函数模拟。

