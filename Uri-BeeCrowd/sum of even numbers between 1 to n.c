#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Input upper limit of even number: ");
    scanf("%d", &n);

        for(i=1; i<=n; i++){

            if(i%2==0){
            sum += i;
            }

        }

    printf("Sum of even numbers between 1 to %d: %d ", n, sum);

    return 0;
}

