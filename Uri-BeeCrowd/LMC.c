#include<stdio.h>
int main()
{
    int n1,n2,i,lcm=1,max,temp;
    printf("Input number1: ");
    scanf("%d",&n1);
    printf("Input number1: ");
    scanf("%d",&n2);
    max=(n1>n2)?n1:n2;
    i=max;
     for(i=max;i>=max;i=i+max)
     {
          if(i%n1==0 && i%n2==0)
        {
            lcm=i;
            break;

        }

     }
     printf("LCM= %d\n",lcm);
 return 0;
}
