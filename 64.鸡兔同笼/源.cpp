/*
2018/3/6
��Ŀ64
����ͬ��
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
��֪�����õ�������Ϊn,������Ϊm������n��m,������������õ���Ŀ������޽⣬�������No answer��(��Ҫ����)��
����
��һ������һ������a,������������м������ݣ��ڽ�������(a<10)
a���ÿ�ж���һ��n��m.(0<m,n<100)
���
������õĸ���������No answer
��������
2
14 32
10 16
�������
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