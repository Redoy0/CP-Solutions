#include<stdio.h>
int main()
{int i,num;
printf("Input number: ");
scanf("%d",num);
for(i=1;i<=num;i++){
    if(i%num==0){
        printf("Factors of %d: %d,");
    }
}

return 0;
}
