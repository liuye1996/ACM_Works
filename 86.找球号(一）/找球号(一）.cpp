/*
2018/3/19
��Ŀ86
�����(һ��
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�3
����
��ĳһ������������һ����Ϸ����Ϸ����Ϊ����һ�����У�ÿ�����϶���һ���������i(0<=i<=100000000),��ſ��ظ�������˵һ���������k(0<=k<=100000100)���жϱ��Ϊk�����Ƿ���������У�����Ϊ"YES",����Ϊ"NO"�����ȴ����Ϊʤ��������һ���������������Ϸ�������ֺ�������ϣ�����ܰ�����ȡ��ʤ����
����
��һ������������m��n(0<=n<=100000��0<=m<=1000000)��m��ʾ���������m����n��ʾ�����Ϸ����n�Ρ�
����������m+n��������ǰm���ֱ��ʾ��m����ı��i����n���ֱ��ʾÿ����Ϸ�е��������k
���
���"YES"��"NO"
��������
6 4
23 34 46 768 343 343
2 4 23 343
�������
NO
NO
YES
YES
*/

/*
#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
	int m, n, i, j, a[100001], b;
	cin >> m >> n;
	for (i = 0;i<m;i++)
	{
		cin >> a[i];
	}
	for (i = 0;i<n;i++)
	{
		int flag = 0;
		cin >> b;
		for ( j = 0; j < m; j++)
		{
			if (b == a[j])
			{
				cout << "YES"<< endl;
				flag = 1;
				break;
			}
		}
		if (flag == 0) cout <<"NO"<<endl;
	}
	system("pause");
}
ERROR TimeLimitExceeded
*/

#include<iostream>
#include<set>
#include<cstdio>
using namespace std;
int main()
{
	int m, i, n, k, isk;
	set<int> s;
	scanf("%d %d",&m,&n);
	while (m--)
	{
		scanf("%i", &i);
		s.insert(i);
	}
	while (n--)
	{
		isk = 0;
		scanf("%d", &k);
		isk = s.count(k);
		if (isk == 1)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
	//return 0;
	system("pause");
}