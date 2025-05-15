#include<stdio.h>
int main(){
    int n,reverse=0,i;
    printf("Input number : ");
    scanf("%d",&n);
    for(i=1;n!=0;i++){
        reverse=(reverse*10)+(n%10);
        n/=10;
    }
    for(i=1;reverse!=0;i++){
        switch(reverse%10){
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
         reverse/=10;

    }

return 0;
}
