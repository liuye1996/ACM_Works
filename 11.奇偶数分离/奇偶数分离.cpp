/*
2018/3/5
题目11
奇偶数分离
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
有一个整型偶数n(2<= n <=10000),你要做的是：先把1到n中的所有奇数从小到大输出，再把所有的偶数从小到大输出。
输入
第一行有一个整数i（2<=i<30)表示有 i 组测试数据；
每组有一个整型偶数n。
输出
第一行输出所有的奇数
第二行输出所有的偶数
样例输入
2
10
14
样例输出
1 3 5 7 9 
2 4 6 8 10 

1 3 5 7 9 11 13 
2 4 6 8 10 12 14 
*/

#include<iostream>
using namespace std;
int main() 
{
	int i;
	cin >> i;
	while (i-- > 0)
	{
		int n;
		cin >> n;
		for (int k = 0; k <= n - 1; k++)
		{
			if (k %2 != 0) cout << k << " ";
		}
		cout << "\n";
		for (int j = 1; j <= n; j++)
		{
			if(j %2 == 0) cout << j << " ";
		}
		cout << "\n";
	}
	system("pause");
}
