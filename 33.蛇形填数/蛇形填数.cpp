/*
2018/3/12
题目33
蛇形填数
时间限制：3000 ms  |  内存限制：65535 KB
难度：3
描述
在n*n方陈里填入1,2,...,n*n,要求填成蛇形。例如n=4时方陈为：
10 11 12 1
9 16 13 2
8 15 14 3
7 6 5 4
输入
直接输入方陈的维数，即n的值。(n<=100)
输出
输出结果是蛇形方陈。
样例输入
3
样例输出
7 8 1
6 9 2
5 4 3
*/

#include<iostream>
using namespace std;
int main()
{
	int n, z, i,j, right, down, left, up;
	int a[100][100];
	cin >> n;
	int t = n / 2 + n % 2;//圈数，循环次数
	i = 0;
	z = 1;
	if (n == 1) cout << 1<<endl;
	else {
		while (t--)
		{
			for (right = i; right < n - i; right++) {
				a[right][n - i - 1] = z++;
			}
			for (down = n - i - 2; down >= i; down--) {
				a[n - i - 1][down] = z++;
			}
			for (left = n - i - 2; left >= i; left--) {
				a[left][i] = z++;
			}
			for (up = i + 1 ; up < n - i - 1 ; up++){
				a[i][up] = z++;
			}
			i++;
		}
	}
	for (i = 0; i < n; i++) 
	{
		for ( j = 0; j < n; j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	//return 0;
	system("pause");
}