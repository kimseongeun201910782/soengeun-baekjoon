import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		
		int fix=sc.nextInt();
		int var=sc.nextInt();
		int BREAKEVENPOINT=sc.nextInt();
		int result=0;
		
		if(var>=BREAKEVENPOINT) {
			System.out.println(-1);}
		else {
			result=(fix/(BREAKEVENPOINT-var))+1;
			System.out.println(result);
		}
		sc.close();
		return;
	}
}
