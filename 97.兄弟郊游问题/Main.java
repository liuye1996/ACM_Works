/*
 * 2018/4/14
 * 题目97题目信息运行结果本题排行讨论区
兄弟郊游问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
兄弟俩骑车郊游，弟弟先出发，每分钟X米，M分钟后，哥哥带一条狗出发。以每分钟Y米的速度去追弟弟，而狗则以每分钟Z米的速度向弟弟跑去，追上弟弟后又立即返回，直到哥哥追上弟弟时，狗跑了多少米？
输入
第一行输入一个整数N，表示测试数据的组数(N<100)
每组测试数据占一行，是四个正整数，分别为M,X,Y,Z（数据保证X<Y<Z)
输出
输出狗跑的路径，结果保留小数点后两位。
样例输入
1
5 10 15 20
样例输出
200.00
 * */

import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-->0){
			double t1, t2, dog;
			int m = sc.nextInt();
			int x = sc.nextInt();
			int y = sc.nextInt();
			int z = sc.nextInt();
			t1 = m*x/(z-x);
			t2 = (t1*(x-y)+x*m)/(y-x);
			dog = (t1+t2)*z;
			System.out.printf("%.2f\n",dog);
		}
	}
}
