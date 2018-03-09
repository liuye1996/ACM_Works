/*
2018/3/7
题目4
ASCII码排序
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
输入三个字符（可以重复）后，按各字符的ASCII码从小到大的顺序输出这三个字符。
输入
第一行输入一个数N,表示有N组测试数据。后面的N行输入多组数据，每组输入数据都是占一行，有三个字符组成，之间无空格。
输出
对于每组输入数据，输出一行，字符中间用一个空格分开。
样例输入
2
qwe
asd
样例输出
e q w
a d s
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	char a[4],str,min,max;
	cin >> n;
	while (n--)
	{
		int flag1 = 0,flag2 = 0;
		cin >> a;
		min = a[0];
		for (int i = 0; i < 3;i++) {
			if ( a[i] < min ) { min = a[i]; flag1 = i; }
		}
		max = a[0];
		for (int j = 0; j < 3; j++) {
			if ( a[j] > max ) { max = a[j]; flag2 = j; }
		}
		for (int k = 0; k < 3; k++) {
			if (k != flag1 && k != flag2 ) str = a[k];
		}
		cout << min << " " << str << " " << max << endl;
	}
	return 0;
	system("pause");
}
