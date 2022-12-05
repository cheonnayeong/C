//서로 다른 n개 중에서 r개 순서없이 고르기
#include <stdio.h>

int n,r;

{
    if (r == 1) return n;
    else if(n == r) return 1;
    else if(n < r) return 0;
    else if(r == 0) return 1;
    return f(n-1,r-1) + f(n-1,r);

}

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    printf("%d\n",f(n,r));
    return 0;
}
