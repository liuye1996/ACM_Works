/*
 * 2018/4/14
  ��Ŀ73
�ȴ�С
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
�Ѷȣ�2
����
���������ܴ���������ܲ����жϳ������������Ĵ�С�أ�

����123456789123456789Ҫ����-123456

����
ÿ���������ռһ�У���������������1000λ��10��������a,b
���ݱ�֤�����a,bû��ǰ׺��0��
�������0 0��ʾ���������������������������100��
���
���a>b�������a>b�������a<b�������a<b��,�������������a==b����
��������
111111111111111111111111111 88888888888888888888
-1111111111111111111111111  22222222
0 0
�������
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
