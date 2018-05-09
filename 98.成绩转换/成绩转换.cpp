/*
2018/3/15
题目98
成绩转换
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
输入一个百分制的成绩M，将其转换成对应的等级，具体转换规则如下：
90~100为A;
80~89为B;
70~79为C;
60~69为D;
0~59为E;
输入
第一行是一个整数N，表示测试数据的组数(N<10)
每组测试数据占一行，由一个整数M组成(0<=M<=100)。
输出
对于每组输入数据，输出一行。
样例输入
2
97
80
样例输出
A
B
*/

#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n;
	while (n--)
	{
		cin >> m;
		if (m >= 90 && m <= 100) cout << "A" << endl;
		else if (m >= 80 && m <= 89) cout << "B" << endl;
		else if (m >= 70 && m <= 79) cout << "C" << endl;
		else if (m >= 60 && m <= 69) cout << "D" << endl;
		else if (m >= 0 && m <= 59) cout << "E" << endl;
	}
	//return 0;
	system("pause");
}