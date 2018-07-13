/*题目56
阶乘因式分解（一）
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
给定两个数m,n,其中m是一个素数。

将n（0<=n<=10000）的阶乘分解质因数，求其中有多少个m。

输入
第一行是一个整数s（0<s<=100)，表示测试数据的组数
随后的s行, 每行有两个整数n，m。
输出
输出m的个数。
样例输入
2
100 5
16 2
样例输出
24
15
 * 
 * */

package 阶乘因式分解一;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int s = sc.nextInt();
		while(s-->0){
			int n = sc.nextInt();
			int m = sc.nextInt();
			int sum = 0;
			for(int i = 2;i<=n;i++){
				int num = i;
				for(int j = 2;j<=i;j++){
					if(num%j==0){
						if(j==m) sum++;
//						System.out.println(j);
						num = num/j;
						j--;
					}
				}
			}
			System.out.println(sum);
		}
	}
}
