/*
2018/3/27
题目23
取石子（一）
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
一天，TT在寝室闲着无聊，和同寝的人玩起了取石子游戏，而由于条件有限，他/她们是用旺仔小馒头当作石子。游戏的规则是这样的。设有一堆石子，数量为N（1<=N<=1000000），两个人轮番取出其中的若干个，每次最多取M个（1<=M<=1000000），最先把石子取完者胜利。我们知道，TT和他/她的室友都十分的聪明，那么如果是TT先取，他/她会取得游戏的胜利么？
输入
第一行是一个正整数n表示有n组测试数据
输入有不到1000组数据，每组数据一行，有两个数N和M,之间用空格分隔。
输出
对于每组数据，输出一行。如果先取的TT可以赢得游戏，则输出“Win”，否则输出“Lose”（引号不用输出）
样例输入
2
1000 1
1 100
样例输出
Lose
Win
*/


#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m ,i;//n个石头  每次最多m个
		cin >> n >> m;
		if (n % (m+1) != 0) cout << "Win" << endl;//要保持给对手留下（b+1）的倍数，就能最后获胜。
		else cout << "Lose" << endl;
	}
	system("pause");
}
//AC

/*
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, i;//n个石头  每次最多m个
		cin >> n >> m;
		for (i = 1;; i++)
		{
			n -= m;
			if (n <= 0) break;
		}

		if (n % 2 != 0) cout << "Win" << endl;
		else cout << "Lose" << endl;
	}
	system("pause");
}
//unAC
*/