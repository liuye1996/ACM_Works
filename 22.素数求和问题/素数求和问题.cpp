/*
2018/3/7
题目22题目信息运行结果本题排行讨论区
素数求和问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
现在给你N个数（0<N<1000），现在要求你写出一个程序，找出这N个数中的所有素数，并求和。
输入
第一行给出整数M(0<M<10)代表多少组测试数据
每组测试数据第一行给你N，代表该组测试数据的数量。
接下来的N个数为要测试的数据，每个数小于1000
输出
每组测试数据结果占一行，输出给出的测试数据的所有素数和
样例输入
3
5
1 2 3 4 5
8
11 12 13 14 15 16 17 18
10
21 22 23 24 25 26 27 28 29 30
样例输出
10
41
52
*/

#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int a) {
	if (a == 1) return 0;
	for (int j = 2; j <= sqrt(a); j++) {
		if (a % j == 0) return 0;
	}
	return a;
}

int main() {
	int n, m;
	cin >> n;
	int num[1000];
	while (n--)
	{
		cin >> m;
		int sum = 0;
		for (int i = 0; i < m;i++) {
			cin >> num[i];
			sum = sum + isPrime(num[i]);
		}	
		cout << sum << endl;
	}
	system("pause");
}
