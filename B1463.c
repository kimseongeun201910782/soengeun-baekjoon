#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, i, temp;
	int* dp;

	scanf("%d", &N);

	dp = (int*)malloc(sizeof(int)*(N + 1));

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (i = 4; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;

		if (i % 2 == 0) {
			temp = dp[i / 2] + 1;
			if (temp < dp[i]) {
				dp[i] = temp;
			}
		}
		if (i % 3 == 0) {
			temp = dp[i / 3] + 1;
			if (temp < dp[i]) {
				dp[i] = temp;
			}
		}
	}
	printf("%d\n", dp[N]);
}
