#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("Input Number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial: %d\n",fact);
return 0;
}
