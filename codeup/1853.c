//재귀로 1부터 n까지 합 리턴하기
#include <stdio.h>
#include <stdlib.h>

int n;
int f(int k)
{
    if(k <= 1) return 1;
    return f(k-1)+k;
}
int main()
{
    scanf("%d",&n);
    printf("%d\n",f(n));
}

