#include <stdio.h>

int main()
{
   int a,b;
   scanf("%d",&a);
   for(;;)
   {
     if(a!=0)
     {
         scanf("%d",&b);
         printf("%d\n",b);
         a--;
     }
     else break;
   }
    return 0;
}

