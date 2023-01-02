#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%s",a/3==1 ? "spring":a/3==2 ? "summer":a/3==3 ? "fall" : "winter");
    return 0;

}

