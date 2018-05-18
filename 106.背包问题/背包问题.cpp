/*
2018/3/26
题目106
背包问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：3
描述
现在有很多物品（它们是可以分割的），我们知道它们每个物品的单位重量的价值v和重量w（1<=v,w<=10）；如果给你一个背包它能容纳的重量为m（10<=m<=20）,你所要做的就是把物品装到背包里，使背包里的物品的价值总和最大。
输入
第一行输入一个正整数n（1<=n<=5）,表示有n组测试数据；
随后有n测试数据，每组测试数据的第一行有两个正整数s，m（1<=s<=10）;s表示有s个物品。接下来的s行每行有两个正整数v，w。
输出
输出每组测试数据中背包内的物品的价值和，每次输出占一行。
样例输入
1
3 15
5 10
2 8
3 9
样例输出
65
*/

#include<iostream>
#include<algorithm>
using namespace std;
class items
{
public:int v; int w;//v为单位重量的价值，w为重量
};
bool cmp(items a,items b)//降序排列cmp
{
	return a.v > b.v;
}

int main()
{
	int n, s, m;//n组数据，s个物品，m包的容量
	items item[11];
	int i, sum, w_sum, v_sum;//i控制循环,sun总量
	cin >> n;
	while (n--) 
	{
		sum = w_sum = v_sum = 0;
		cin >> s >> m;
		for (i = 0; i < s; i++)
		{
			cin >> item[i].v >> item[i].w;
			w_sum += item[i].w;
			v_sum += item[i].w * item[i].v;
		}
		if (w_sum < m) { cout << v_sum << endl; continue; }//判断是否容量可以完全放下所有物品
		sort(item, item + s, cmp);//将item降序排列
		for (i = 0; i < s; i++) 
		{
			if (m > item[i].w) //装的下
			{
				sum += item[i].w * item[i].v;
				m -= item[i].w;
				continue;
			}
			if (m < item[i].w)//只能装下部分
			{
				sum += item[i].v * m;
				break;
			}
		}
		cout << sum << endl;
	}
	system("pause");
}