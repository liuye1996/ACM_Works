/*
2018/3/6
题目64
鸡兔同笼
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
已知鸡和兔的总数量为n,总腿数为m。输入n和m,依次输出鸡和兔的数目，如果无解，则输出“No answer”(不要引号)。
输入
第一行输入一个数据a,代表接下来共有几组数据，在接下来的(a<10)
a行里，每行都有一个n和m.(0<m,n<100)
输出
输出鸡兔的个数，或者No answer
样例输入
2
14 32
10 16
样例输出
12 2
No answer
*/

#include<iostream>
using namespace std;
int main()
{
	int a,n,m,i;
	cin >> a;
	int flag = 0;
	while (a-->0)
	{
		cin >> n >> m;
		if (m % 2 == 0) 
		{
			for (i = 1; i < n; i++)
			{
				if (2 * i + 4 * (n - i) == m)
				{
					cout << i << " " << n - i << "\n";
					flag = 1;
					break;
				}
			}
			if (flag == 0) { cout << "No answer" << "\n"; }
		}
		else { cout << "No answer" << "\n"; }
	}
	system("pause");
}