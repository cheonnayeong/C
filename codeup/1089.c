#include <stdio.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    
    for(int i=1; i<z; i++)
    {
        x +=y;
    }
    printf("%d",x);
    return 0;
}
