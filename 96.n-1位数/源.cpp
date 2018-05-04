/*
2018/3/7
题目96
n-1位数
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
已知w是一个大于10但不大于1000000的无符号整数，若w是n(n≥2)位的整数，则求出w的后n-1位的数。

输入
第一行为M，表示测试数据组数。
接下来M行，每行包含一个测试数据。

输出
输出M行，每行为对应行的n-1位数（忽略前缀0）。如果除了最高位外，其余位都为0，则输出0。

样例输入
4
1023
5923
923
1000

样例输出
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