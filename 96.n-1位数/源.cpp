/*
2018/3/7
��Ŀ96
n-1λ��
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
��֪w��һ������10��������1000000���޷�����������w��n(n��2)λ�������������w�ĺ�n-1λ������

����
��һ��ΪM����ʾ��������������
������M�У�ÿ�а���һ���������ݡ�

���
���M�У�ÿ��Ϊ��Ӧ�е�n-1λ��������ǰ׺0��������������λ�⣬����λ��Ϊ0�������0��

��������
4
1023
5923
923
1000

�������
23
923
23
0
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int m,flag,flag1,i;
	cin >> m;
	char a[7];
	while (m--){
		flag = flag1 = 0;
		cin >> a;
		int len = strlen(a);
		if (len == 1) { cout << a << endl; continue; }
		for(i = 1; i < len;i++){
			if (a[i] == '0'&& flag1 == 0)continue;
			else{
				cout << a[i];
				flag = 1;
				flag1 = 1;
			}
		}
		if (flag == 0) cout << "0" << endl;
		if (i == len) cout << "\n";
	}
	
	system("pause");
}