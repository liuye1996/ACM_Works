/*
2018/3/15
��Ŀ98
�ɼ�ת��
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
����һ���ٷ��Ƶĳɼ�M������ת���ɶ�Ӧ�ĵȼ�������ת���������£�
90~100ΪA;
80~89ΪB;
70~79ΪC;
60~69ΪD;
0~59ΪE;
����
��һ����һ������N����ʾ�������ݵ�����(N<10)
ÿ���������ռһ�У���һ������M���(0<=M<=100)��
���
����ÿ���������ݣ����һ�С�
��������
2
97
80
�������
A
B
*/

#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n;
	while (n--)
	{
		cin >> m;
		if (m >= 90 && m <= 100) cout << "A" << endl;
		else if (m >= 80 && m <= 89) cout << "B" << endl;
		else if (m >= 70 && m <= 79) cout << "C" << endl;
		else if (m >= 60 && m <= 69) cout << "D" << endl;
		else if (m >= 0 && m <= 59) cout << "E" << endl;
	}
	//return 0;
	system("pause");
}