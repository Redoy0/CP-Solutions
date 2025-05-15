#include<stdio.h>
int main()
{
    int i,n1,n2,hcf,min,max;
    printf("Input first number: ");
    scanf("%d",&n1);
    printf("Input second number: ");
    scanf("%d",&n2);
    min= (n1<n2)? n1 : n2;

    for(i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    printf("HCF of %d and %d: %d",n1,n2,hcf);
return 0;
}
