/*
2018/3/8
题目6
喷水装置（一）
时间限制：3000 ms | 内存限制：65535 KB
难度：3
描述
现有一块草坪，长为20米，宽为2米，要在横中心线上放置半径为Ri的喷水装置，每个喷水装置的效果都会让以它为中心的半径为实数Ri(0<Ri<15)的圆被湿润，这有充足的喷水装置i（1<i<600)个，并且一定能把草坪全部湿润，你要做的是：选择尽量少的喷水装置，把整个草坪的全部湿润。
	输入
	第一行m表示有m组测试数据
	每一组测试数据的第一行有一个整数数n，n表示共有n个喷水装置，随后的一行，有n个实数ri，ri表示该喷水装置能覆盖的圆的半径。
	输出
	输出所用装置的个数
	样例输入
	2
	5
	2 3.2 4 4.5 6
	10
	1 2 3 1 2 1.2 3 1.1 1 2
	样例输出
	2
	5
*/

#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int m,i,j;
	cin >> m;
	while (m--) 
	{
		int n;
		cin >> n;
		float ri[601],t;
		float max = ri[0] = 0;
		for ( i = 0; i < n;i++) 
		{
			cin >> ri[i];
		}
		for ( i = 0; i < n; i++)
		{
			for ( j = i + 1; j < n; j++)
			{
				if (ri[i] < ri[j]) {
					t = ri[i];
					ri[i] = ri[j];
					ri[j] = t;
				}
			}
		}
		//for (i = 0; i < n; i++) { cout << ri[i]; }
		float d = 20;
		for (i = 0; d>0; i++)
		{
			d = d - sqrt( ri[i] * ri[i] - 1.0) * 2;
		}
		cout << i << endl;
	}
	return 0;
}