/*
2018/3/19
题目86
找球号(一）
时间限制：3000 ms  |  内存限制：65535 KB
难度：3
描述
在某一国度里流行着一种游戏。游戏规则为：在一堆球中，每个球上都有一个整数编号i(0<=i<=100000000),编号可重复，现在说一个随机整数k(0<=k<=100000100)，判断编号为k的球是否在这堆球中（存在为"YES",否则为"NO"），先答出者为胜。现在有一个人想玩玩这个游戏，但他又很懒。他希望你能帮助他取得胜利。
输入
第一行有两个整数m，n(0<=n<=100000，0<=m<=1000000)；m表示这堆球里有m个球，n表示这个游戏进行n次。
接下来输入m+n个整数，前m个分别表示这m个球的编号i，后n个分别表示每次游戏中的随机整数k
输出
输出"YES"或"NO"
样例输入
6 4
23 34 46 768 343 343
2 4 23 343
样例输出
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