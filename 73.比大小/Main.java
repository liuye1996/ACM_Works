/*
 * 2018/4/14
  题目73
比大小
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
给你两个很大的数，你能不能判断出他们两个数的大小呢？

比如123456789123456789要大于-123456

输入
每组测试数据占一行，输入两个不超过1000位的10进制整数a,b
数据保证输入的a,b没有前缀的0。
如果输入0 0表示输入结束。测试数据组数不超过100组
输出
如果a>b则输出“a>b”，如果a<b则输出“a<b”,如果相等则输出“a==b”。
样例输入
111111111111111111111111111 88888888888888888888
-1111111111111111111111111  22222222
0 0
样例输出
a>b
a<b
  
 */

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while(true){
			char a;
			char b;
			String aa = in.nextLine();
			String bb = in.nextLine();
			int la = aa.length();
			int lb = bb.length();
			a = aa.charAt(0);
			b = bb.charAt(0);
			if(a =='0'&& b=='0' )break;
			if(a =='-'&&b!='-') {System.out.println("a<b");continue;}
			if(b =='-'&&a!='-') {System.out.println("a>b");continue;}
			if(a !='-'&&b!='-'){
				if(la>lb) {System.out.println("a>b");continue;}
			}
			else{
				if(la>lb) {System.out.println("a<b");}
			}
		}
	}
}
