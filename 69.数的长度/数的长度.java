/*
 * 2018/4/14
 * ��Ŀ69��Ŀ��Ϣ���н����������������
���ĳ���
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�1
����
    N���׳���һ���ǳ����������Ҷ�֪�����㹫ʽ��N!=N*(N-1��������������*2*1.������������Ǽ����N����λ���ж��٣�ʮ���ƣ���

����
��������n����ʾ�ж������������(n<10)
���n��ÿ������һ��������� N( 0 < N < 1000000 )
���
����ÿ����N�����N!�ģ�ʮ���ƣ�λ����
��������
3
1
3
32000
�������
1
1
130271
 * */

import java.util.Scanner;

public class ���ĳ���{
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


//�Լ�������̫����  ����������������һ����ʽ
/*
import java.util.Scanner;

public class ���ĳ��� {

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



