/*
2018/3/12
题目41
三个数从小到大排序
时间限制：3000 ms  |  内存限制：65535 KB
难度：0
描述
现在要写一个程序，实现给三个数排序的功能

输入
输入三个正整数
输出
给输入的三个正整数排序
样例输入
20 7 33
样例输出
7 20 33
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b, c, t;
	cin >> a >> b >> c;
	if (a > b) { t = a; a = b; b = t; }
	if (b > c) { t = b; b = c; c = t; }
	if (a > c) { t = a; a = c; c = t; }
	if (a > b) { t = a; a = b; b = t; }
	cout << a << " " << b << " " << c << endl;
	//return 0;
	system("pause");
}