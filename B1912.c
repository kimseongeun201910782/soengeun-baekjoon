//이줄 연속된 몇개의 수를 선택해서 구할 수 있는 합 중 가장 큰 합을 구하려고한다.
//단, 수는 한개이상

//입력: 첫째줄에 n(1<=n<=1000000) 둘째줄에 n개의 정수로 이루어진 수열
//수는 -1000보다 크거나 같고, 1000보다 작거나 같음
#include <stdio.h>
#include <stdlib.h>

int su[100002];

int main() {
	int n;
	long long MAX=-1000;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &su[i]);
		if (su[i-1] + su[i]>su[i])
			su[i] += su[i - 1];
		if (su[i] > MAX)
			MAX = su[i];
	}

	printf("%d \n", MAX);
	return 0;
}
