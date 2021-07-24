/**
 * 2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
 * 아래 그림은 2×5 크기의 직사각형을 채운 한 가지 방법의 예이다.
 */

import java.io.*;
public class B11726{
    static int[] dp;
    static int tiling(int n) {
        if(n==1)
            return 1;
        else if(n==2)
            return 2;
        else if (dp[n] != 0) {
            return dp[n];
        }
        return dp[n] = (tiling(n - 1) + tiling(n - 2)) % 10007;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader sc=new BufferedReader(new InputStreamReader(System.in));
        //BufferedWriter sw=new BufferedWriter(new OutputStreamWriter(System.out));
        int n=Integer.parseInt(sc.readLine());
        int num=0;
        dp = new int[n + 1];
        num=tiling(n);
        System.out.println(tiling(n));
    }
}
