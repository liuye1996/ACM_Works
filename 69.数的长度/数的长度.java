/*
 * 2018/4/14
 * 题目69题目信息运行结果本题排行讨论区
数的长度
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
    N！阶乘是一个非常大的数，大家都知道计算公式是N!=N*(N-1）······*2*1.现在你的任务是计算出N！的位数有多少（十进制）？

输入
首行输入n，表示有多少组测试数据(n<10)
随后n行每行输入一组测试数据 N( 0 < N < 1000000 )
输出
对于每个数N，输出N!的（十进制）位数。
样例输入
3
1
3
32000
样例输出
1
1
130271
 * */

import java.util.Scanner;

public class 数的长度{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = 0;
		while(n-->0){
			double s = 0;
			int k = sc.nextInt();
			for(int i = 1;i <= k ;i++){
				s += Math.log10(i);
				m = (int) (s + 1);
			}
			System.out.println(m);
		}
	}
}


//自己的做法太烂了  看了讨论区发现有一个公式
/*
import java.util.Scanner;

public class 数的长度 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while(n-->0){
			int a = sc.nextInt();
			int[] b = new int[1000000];
			b[0]=1;
			int count = 1;
			for(int i = 1;i<=a;i++){
				for(int k=0;k<count;k++){
					b[k] = b[k]*i;
					if(b[k]>10){
						if (b[count-1]>10){count++;}
						b[k+1] += b[k]-10;
						b[k]-=10;
					}
				}
			}
			System.out.println(count);
		}
	}
}
*/



