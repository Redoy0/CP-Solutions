#include<stdio.h>
int main(){
        int num1,num2;
        printf("Input first number: ");
        scanf("%d",&num1);
        printf("Input second number: ");
        scanf("%d",&num2);
        switch(num1>num2){
        case 0:
            printf("Maximum: %d",num2);
            break;

        case 1:
            printf("Maximum: %d",num1);
        break;

        default:
            printf("Wrong Input");
        }
return 0;
}
