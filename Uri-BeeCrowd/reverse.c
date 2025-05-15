#include<stdio.h>
int main(){
int i,n1,n,rev=0;
printf("Input number: ");
scanf("%d",&n);
n1=n;
for(i=1;n!=0;i++){
    rev=(rev*10)+(n%10);
    n/=10;
}
if(rev==n1){
    printf("%d is Palindrome.",n1);
}
else{
    printf("%d is not Palindrome.",n1);
}

return 0;
}

