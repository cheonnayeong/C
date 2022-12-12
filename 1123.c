#include <stdio.h>

int main()
{
    int C;
    float F;

    scanf("%d",&C);
    
    F = 9.0/5.0 * (float)C + 32;
    printf("%.3f", F);
    return 0;
}