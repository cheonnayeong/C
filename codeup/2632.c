//계단 오르기1
#include <stdio.h>

int n;
int mamo[100] = {1,2,3};

int f(int k){
    if(k==0) return 1;
    if(k<0) return 0;
    return f(k-1) + f(k-2);
}

int main(){
    scanf("%d",&n);
    printf("%d\n", f(n));
    return 0;
}