/*
2018/3/7
��Ŀ4
ASCII������
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�2
����
���������ַ��������ظ����󣬰����ַ���ASCII���С�����˳������������ַ���
����
��һ������һ����N,��ʾ��N��������ݡ������N������������ݣ�ÿ���������ݶ���ռһ�У��������ַ���ɣ�֮���޿ո�
���
����ÿ���������ݣ����һ�У��ַ��м���һ���ո�ֿ���
��������
2
qwe
asd
�������
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
	system("pause");
}