/*
2018/4/17
题目95
众数问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：3
描述
所谓众数，就是对于给定的含有N个元素的多重集合，每个元素在S中出现次数最多的成为该元素的重数，

多重集合S重的重数最大的元素成为众数。例如：S={1,2,2,2,3,5}，则多重集S的众数是2，其重数为3。

现在你的任务是：对于给定的由m个自然数组成的多重集S，计算出S的众数及其重数。

输入
第一行为n，表示测试数据组数。(n<30)
每组测试的第一行是一个整数m，表示多重集S中元素的个数为m
接下来的一行中给出m(m<100)个不大于10万的自然数
（不会出现不同元素出现的次数相同的情况，如：S={11,11,22,22,33,33}）。
输出
每组测试数据输出一行，包含两个数，第一个是众数，第二个是其重数，中间以空格隔开。
样例输入
1
6
1 2 2 2 3 5
样例输出
2 3
*/
import java.util.Scanner;
class 众数问题
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-->0)
		{
			int m = sc.nextInt();
			int [] a = new int[100];
			for(int i =0;i<m;i++)
			{
				a[i] = sc.nextInt();
			}
			int max = 0,maxnum = 0;
			for(int i=0;i<m;i++)
			{
				int count = 0;
				for(int j=0;j<m;j++)
				{
					if(a[i]==a[j]) count++;
				}
				if (count>max) 
				{
					max = count;
					maxnum = a[i];
				}
			}
			System.out.println(maxnum+" "+max);
		}
	}
}
