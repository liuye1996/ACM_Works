/*
 * 2018/4/14
 * ��Ŀ97��Ŀ��Ϣ���н����������������
�ֵܽ�������
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�2
����
�ֵ����ﳵ���Σ��ܵ��ȳ�����ÿ����X�ף�M���Ӻ󣬸���һ������������ÿ����Y�׵��ٶ�ȥ׷�ܵܣ���������ÿ����Z�׵��ٶ���ܵ���ȥ��׷�ϵܵܺ����������أ�ֱ�����׷�ϵܵ�ʱ�������˶����ף�
����
��һ������һ������N����ʾ�������ݵ�����(N<100)
ÿ���������ռһ�У����ĸ����������ֱ�ΪM,X,Y,Z�����ݱ�֤X<Y<Z)
���
������ܵ�·�����������С�������λ��
��������
1
5 10 15 20
�������
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
