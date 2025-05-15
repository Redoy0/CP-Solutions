#include <stdio.h>

int main()
{
    long num;
    int i,first,last;


    printf("Input number: ");
    scanf("%ld", &num);
    first=num;

    for(i=1;first>=10;i++){
            first /= 10;
    }
    last=num%10;
    printf("Sum of first and last digit: %d", (first+last));
    return 0;
}
