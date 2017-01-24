#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n,r,f=0,x,y,i;

    scanf("%d",&x);
    scanf("%d",&y);
    for(i=0;i<y;i++)
    {
        r=pow(x,i)+1;//as i is already incremented
        if(r==y)
        {
            printf("true");
            f=1;
            break;
        }
    }

   if(f==0)
   {
       printf("false");
   }
   


    return 0;
