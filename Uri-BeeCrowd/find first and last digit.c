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
    printf("First digit: %d\n", first);
    last=num%10;
    printf("Last digit: %d\n",last);
    return 0;
}

