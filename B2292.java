import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		int sol=0;
		int sum;
		
		 while(num>0)  // num이 양수이면 아래 과정을 반복합니다
		  {
		    sol++;  // 이동 횟수를 1 증가시킵니다
		    sum=1;  // 계산값을 1로 초기화합니다

		    for(int i=0; i<sol; i++)
		      if(i>0)
		        sum= 6*i;   // 설명 생략(★풀이 요령 참고)

		    num -= sum;  // 계산된 값으로 입력 값을 빼줍니다
		  }
		  System.out.println(sol);  // 결과 값을 출력합니다
		  return;  
		}
	}
