/*
2018/3/6
题目31
5个数求最值
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
设计一个从5个整数中取最小数和最大数的程序
输入
输入只有一组测试数据，为五个不大于1万的正整数
输出
输出两个数，第一个为这五个数中的最小值，第二个为这五个数中的最大值，两个数字以空格格开。
样例输入
1 2 3 4 5
样例输出
1 5
*/

#include<iostream>
using namespace std;
int main() 
{
	int a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	int max = a[0], min = a[0];
	for (int i = 1; i < 5; i++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	cout << min << " " << max;
	system("pause");
}