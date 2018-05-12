/*
2018/3/18
题目103
A+B Problem II
时间限制：3000 ms  |  内存限制：65535 KB
难度：3
描述
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.

A,B must be positive.

输入
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
输出
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation.
样例输入
2
1 2
112233445566778899 998877665544332211
样例输出
Case 1:
1 + 2 = 3
Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t, i, j, k; //t组数据
	cin >> t;
	for (k = 1; k <= t; k++)
	{
		char num1[1000], num2[1000]; 
		int sum[1000] = {0}, n2[1000] = { 0 };
		cin >> num1 >> num2;
		int len1 = strlen(num1);//获取长度
		int len2 = strlen(num2);
		int len = len1 > len2 ? len1 : len2;//获取最大长度

		for (i = len1 - 1, j = 0; i >= 0; i--, j++) //讲第一个数字倒置
			sum[j] = num1[i] - '0';//转换成int型
		for (i = len2 - 1, j = 0; i >= 0; i--, j++)//第二个
		{
			n2[j] = num2[i] - '0';
		}
		for (j = 0; j < len; j++) //加法
		{
			sum[j] += n2[j];
			if (sum[j] > 9) //判断有无进位
			{
				sum[j] -= 10;
				sum[j + 1]++;
			}
		}
		if (sum[len] != 0) len++; //判断最高位需不需要进位

		cout << "Case " << k << ":"<< endl;
		cout << num1 << " + " << num2 << " = ";
		for (j = len - 1; j >= 0; j--)//输出结果
		{
			cout << sum[j];
		}
		cout << endl;
	}
	system("pause");
}