/*
2018/3/18
��Ŀ103
A+B Problem II
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�3
����
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.

A,B must be positive.

����
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
���
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation.
��������
2
1 2
112233445566778899 998877665544332211
�������
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
	int t, i, j, k; //t������
	cin >> t;
	for (k = 1; k <= t; k++)
	{
		char num1[1000], num2[1000]; 
		int sum[1000] = {0}, n2[1000] = { 0 };
		cin >> num1 >> num2;
		int len1 = strlen(num1);//��ȡ����
		int len2 = strlen(num2);
		int len = len1 > len2 ? len1 : len2;//��ȡ��󳤶�

		for (i = len1 - 1, j = 0; i >= 0; i--, j++) //����һ�����ֵ���
			sum[j] = num1[i] - '0';//ת����int��
		for (i = len2 - 1, j = 0; i >= 0; i--, j++)//�ڶ���
		{
			n2[j] = num2[i] - '0';
		}
		for (j = 0; j < len; j++) //�ӷ�
		{
			sum[j] += n2[j];
			if (sum[j] > 9) //�ж����޽�λ
			{
				sum[j] -= 10;
				sum[j + 1]++;
			}
		}
		if (sum[len] != 0) len++; //�ж����λ�費��Ҫ��λ

		cout << "Case " << k << ":"<< endl;
		cout << num1 << " + " << num2 << " = ";
		for (j = len - 1; j >= 0; j--)//������
		{
			cout << sum[j];
		}
		cout << endl;
	}
	system("pause");
}