/*
 * 2018/4/14
 * 题目94题目信息运行结果本题排行讨论区
cigarettes
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
Tom has many cigarettes. We hypothesized that he has n cigarettes and smokes them

one by one keeping all the butts. Out of k > 1 butts he can roll a new cigarette. 
Now，do you know how many cigarettes can Tom has?

输入
First input is a single line,it's n and stands for there are n testdata.then there are n lines ,each line contains two integer numbers giving the values of n and k.
输出
For each line of input, output one integer number on a separate line giving the maximum number of cigarettes that Peter can have.
样例输入
3
4 3
10 3
100 5
样例输出
5
14
124
 * */

import java.util.Scanner;

public class cigarettes {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-->0){
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = a / b;
			a += c;
			for(int i=0;c >= b ;i++){
			    c = c/b;
				a+=c;
			}
			System.out.println(a);
		}
		
	}
}
