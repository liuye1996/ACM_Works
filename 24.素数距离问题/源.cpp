/*
2018/3/8
题目24
素数距离问题
时间限制：3000 ms | 内存限制：65535 KB
难度：2
描述
现在给出你一些数，要求你写出一个程序，输出这些整数相邻最近的素数，并输出其相距长度。如果左右有等距离长度素数，则输出左侧的值及相应距离。
如果输入的整数本身就是素数，则输出该素数本身，距离输出0
输入
第一行给出测试数据组数N(0<N <= 10000)
	接下来的N行每行有一个整数M(0<M<1000000)，
	输出
	每行输出两个整数 A B.
	其中A表示离相应测试数据最近的素数，B表示其间的距离。
	样例输入
	3
	6
	8
	10
	样例输出
	5 1
	7 1
	11 1
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int isPrime(int a) {
	if (a == 1) return 0;
	for (int i = 2; i <= sqrt(a);i++) {
		if (a % i==0) return 0;
	}
	return 1;
}
int main() {
	int n,m,j,k,d = 0;
	cin >> n;
	while (n--)
	{
		cin >> m;
		if (m == 1) {
			cout << "2 1\n"; continue;}
		if (isPrime(m)) {
			cout << m << " 0" << endl; continue;}
		else {
			for (j = m - 1; j >= 2; j--) {
				if (isPrime(j)) break;
			}
			for (k = m + 1;; k++){
				if (isPrime(k)) break;
			}
			if (m - j <= k - m) { k = j; d = abs(k - m); }
			else { d = abs(k - m); }
		}
		cout << k << " " << d << endl;
	}
	system("pause");
}