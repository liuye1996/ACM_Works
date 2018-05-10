import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		while(n-->0){
			int m = in.nextInt();
			String r = Integer.toBinaryString(m);
			int l = r.length();
			int count=0;
			for(int i=0;i<l;i++){
				if(r.charAt(i)=='1')count++;
			}
			System.out.println(count);
		}
	}
}
