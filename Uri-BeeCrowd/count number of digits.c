#include <stdio.h>

int main()
{
    long num;
    int i;


    printf("Enter any number: ");
    scanf("%ld", &num);
    for(i=0;num!=0;i++){
            num /= 10;
    }


    printf("Total digits: %d", i);

    return 0;
}
