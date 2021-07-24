import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		
		
		int[] arr=new int[9];
		int n,num=0;
		
		for(int i=0; i<9; i++) {
			arr[i]=sc.nextInt();
		}
		n=arr[0];
		for(int i=0; i<9; i++) {
			n=n<arr[i]?arr[i]:n;
		}
		for(int i=0; i<9; i++) {
			if(n==arr[i])
				num=i;
		}
		
		System.out.printf("%d \n%d", n, num+1);
		sc.close();
	}

}
