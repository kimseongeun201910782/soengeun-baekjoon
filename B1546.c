#include <stdio.h>

const int MAX = 1001;

int main() {
  int n;
  double max;
  double sum = 0;
  double score[MAX];
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%lf", &score[i]);
  }
  max = score[0];
  for(int i = 0; i < n; i++) {
    if(max < score[i]) max = score[i];
  }
  for(int i = 0; i < n; i++) {
    sum += score[i]/max * 100;
  }
  printf("%.2lf\n", sum/n);
  return 0;
}
