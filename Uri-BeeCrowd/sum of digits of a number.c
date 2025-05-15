#include<stdio.h>
int main(){
int i,n,sum=0;
printf("Input any number: ");
scanf("%d",&n);
for(i=1;n!=0;i++){
    sum=sum+n%10;
    n=n/10;
}
printf("Sum of digits: %d\n",sum);
return 0;
}
