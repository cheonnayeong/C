#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(;;)
    {
        a--;
        printf("%d\n",a);
        if(a==0) break;
    }

    return 0;
}
