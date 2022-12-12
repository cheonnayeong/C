//재귀로 *n개 한 줄로 출력하기
#include <stdio.h>

int n;

void f(int k)
{
  if(k == 0) return;
  f(k-1);
  printf("*");
}

int main()
{
  scanf("%d", &n);
  f(n);
  printf("\n");
}

