/*
2018/3/30
题目40
公约数和公倍数
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
小明被一个问题给难住了，现在需要你帮帮忙。问题是：给出两个正整数，求出它们的最大公约数和最小公倍数。
输入
第一行输入一个整数n（0<n<=10000)，表示有n组测试数据;
随后的n行输入两个整数i,j（0<i,j<=32767)。
输出
输出每组测试数据的最大公约数和最小公倍数
样例输入
3
6 6
12 11
33 22
样例输出
6 6
1 132
11 66
*/

#include<iostream>
using namespace std;
int main()
{
	int n;//n组数据,i控制循环
	int c;
	cin >> n;
	while (n--)
	{
		int a, b,j,k;//两个整数
		cin >> a >> b;
		j = a, k = b;
		if (a > b)//取a为小的那个数 
		{
			c = a;
			a = b;
			b = c;
		}
		c = a % b;
		while (c!=0)
		{
			a = b;
			b = c;
			c = a % b;
		}
		cout << b << " " << j*k / b << endl;
	}
	system("pause");
}