/*
2018/3/12
��Ŀ33
��������
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�3
����
��n*n����������1,2,...,n*n,Ҫ��������Ρ�����n=4ʱ����Ϊ��
10 11 12 1
9 16 13 2
8 15 14 3
7 6 5 4
����
ֱ�����뷽�µ�ά������n��ֵ��(n<=100)
���
�����������η��¡�
��������
3
�������
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
	int t = n / 2 + n % 2;//Ȧ����ѭ������
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