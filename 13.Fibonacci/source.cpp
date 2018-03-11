/*
2018/3/5
题目13
Fibonacci数
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
无穷数列1，1，2，3，5，8，13，21，34，55...称为Fibonacci数列，它可以递归地定义为
F(n)=1 ...........(n=1或n=2)
F(n)=F(n-1)+F(n-2).....(n>2)
现要你来求第n个斐波那契数。（第1个、第二个都为1)
输入
第一行是一个整数m(m<5)表示共有m组测试数据
每次测试数据只有一行，且只有一个整形数n(n<20)
输出
对每组输入n，输出第n个Fibonacci数
样例输入
3
1
3
5
样例输出
1
2
5
*/

#include<iostream>
using namespace std;
int main() 
{
	int m,n,a[20];
	a[0] = 1;
	a[1] = 1;
	cin >> m;
	while (m-->0) 
	{
		cin >> n;
		if (n <= 2) cout << 1 <<"\n";
		else
		{
			for (int i = 2; i <= n; i++)
			{
				a[i] = a[i-1] + a[i-2];
			};
			cout << a[n-1] <<"\n";
		}
		
	}
	system("pause");
}