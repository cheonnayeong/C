#include <stdio.h>

int main()
{
   int a;
   for(;;)
   {
    scanf("%d",&a);
    if(a==0)
        break;
    else
      printf("%d\n",a);

   }

   return 0;
}


