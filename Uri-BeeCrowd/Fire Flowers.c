#include<stdio.h>
#include<math.h>
int main()
{
     int r1,x1,y1,r2,x2,y2;
     double d;
     while((scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2))!=EOF)
     {
         abs(x1);
         abs(y1);
         abs(x2);
         d=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
         if(r1>=d+r2)
         {
            printf("RICO\n");

         }
         else
        {
            printf("MORTO\n");
        }


     }
     return 0;
}

