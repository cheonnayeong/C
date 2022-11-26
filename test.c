#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        dt = (dt+i)%137;
    }
    printf("%d",dt);
    
    return 0;
}