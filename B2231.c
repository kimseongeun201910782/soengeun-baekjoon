#include <stdio.h>
#include <math.h>

int main() {
	int num,result=0;
	int sum = 0;
	scanf("%d", &num);
	for(int i=1; i<num; i++)
	{
		sum = 0; 
		for (int j = 7; j >= 0; j--) {
			sum += (i / (int)pow(10, j) % 10);
		}
		sum += i;
		if (sum == num) {
			result = i;
			break;
		}
	}
	printf("%d\n", result);
	return 0;
}
