/*
2018/3/8
题目29
求转置矩阵问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
求一个三行三列的转置矩阵。
输入
第一行一个整数n<20，表示有n组测试数据，下面是n组数据;
每组测试数据是九个整型数（每个数都不大于10000），分别为矩阵的的每项；
输出
每组测试数据的转置矩阵；
请在每组输出之后加一个换行
样例输入
2
1  2  3  4  5  6  7  8  9
2  3  4  5  6  7  8  9  1
样例输出
1 4 7
2 5 8
3 6 9

2 5 8
3 6 9
4 7 1
*/

#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int a[100];
	while (n--)
	{
		for (int i = 0; i < 9; i++)
		{
			cin >> a[i];
		}
		cout << a[0] << " " << a[3] << " " << a[6] << endl;
		cout << a[1] << " " << a[4] << " " << a[7] << endl;
		cout << a[2] << " " << a[5] << " " << a[8] << endl;
	}
	system("pause");
}