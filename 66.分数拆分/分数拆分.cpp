/*
2018/4/13
题目66题目信息运行结果本题排行讨论区
分数拆分
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
现在输入一个正整数k,找到所有的正整数x>=y,使得1/k=1/x+1/y.

输入
第一行输入一个整数n,代表有n组测试数据。
接下来n行每行输入一个正整数k
输出
按顺序输出对应每行的k找到所有满足条件1/k=1/x+1/y的组合
样例输入
2
2
12
样例输出
1/2=1/6+1/3
1/2=1/4+1/4
1/12=1/156+1/13
1/12=1/84+1/14
1/12=1/60+1/15
1/12=1/48+1/16
1/12=1/36+1/18
1/12=1/30+1/20
1/12=1/28+1/21
1/12=1/24+1/24
*/

#include<iostream>
#include <stdio.h>
using namespace std;
int main() 
{
	int n;
	int k;
	cin >> n;
	while (n--)
	{
		cin >> k;
		for (int i = k + 1; i <= 2 * k; i++) {
			if ((k*i) % (i - k)) continue;
			printf("1/%d=1/%d+1/%d\n", k, k*i / (i - k), i);
		}
	}
	system("pause");
}