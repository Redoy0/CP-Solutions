#include<stdio.h>
int main(){
    int i,num,sum=0,pro=1;

    printf("Enter any integer number: ");
    scanf("%d",&num);
    if (num%2==0){
        for (i=1;num!=0;i++){
            sum=sum+(num%10);
            num=num/10;

        }
        printf("Sum of digits of number= %d\n",sum);
    }
   else
        {
        for (i=1;num!=0;i++){
            pro=pro*(num%10);
            num=num/10;
    }
    printf("Product of digits of number= %d\n",pro);
        }
return 0;
}
