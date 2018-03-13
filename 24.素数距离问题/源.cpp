/*
2018/3/8
��Ŀ24
������������
ʱ�����ƣ�3000 ms | �ڴ����ƣ�65535 KB
�Ѷȣ�2
����
���ڸ�����һЩ����Ҫ����д��һ�����������Щ����������������������������೤�ȡ���������еȾ��볤�����������������ֵ����Ӧ���롣
�����������������������������������������������0
����
��һ�и���������������N(0<N <= 10000)
	��������N��ÿ����һ������M(0<M<1000000)��
	���
	ÿ������������� A B.
	����A��ʾ����Ӧ�������������������B��ʾ���ľ��롣
	��������
	3
	6
	8
	10
	�������
	5 1
	7 1
	11 1
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int isPrime(int a) {
	if (a == 1) return 0;
	for (int i = 2; i <= sqrt(a);i++) {
		if (a % i==0) return 0;
	}
	return 1;
}
int main() {
	int n,m,j,k,d = 0;
	cin >> n;
	while (n--)
	{
		cin >> m;
		if (m == 1) {
			cout << "2 1\n"; continue;}
		if (isPrime(m)) {
			cout << m << " 0" << endl; continue;}
		else {
			for (j = m - 1; j >= 2; j--) {
				if (isPrime(j)) break;
			}
			for (k = m + 1;; k++){
				if (isPrime(k)) break;
			}
			if (m - j <= k - m) { k = j; d = abs(k - m); }
			else { d = abs(k - m); }
		}
		cout << k << " " << d << endl;
	}
	system("pause");
}