/*
2018/3/12
��Ŀ41
��������С��������
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�0
����
����Ҫдһ������ʵ�ָ�����������Ĺ���

����
��������������
���
���������������������
��������
20 7 33
�������
7 20 33
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b, c, t;
	cin >> a >> b >> c;
	if (a > b) { t = a; a = b; b = t; }
	if (b > c) { t = b; b = c; c = t; }
	if (a > c) { t = a; a = c; c = t; }
	if (a > b) { t = a; a = b; b = t; }
	cout << a << " " << b << " " << c << endl;
	//return 0;
	system("pause");
}