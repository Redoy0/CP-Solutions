#include<stdio.h>
#include<math.h>
int main()
{
    int i, lst, sum=0, arm, n,temp;
    printf("Input number: ");
    scanf("%d",&n);
    temp=n;
    for (i=1;n!=0;i++)
    {
        lst=n%10;
        arm=pow(lst,3);
        sum+=arm;
        n=n/10;

    }
    if(sum==temp)
    {
        printf("%d is armstrong number",temp);
    }
    else
        printf("%d is not armstrong number",temp);


return 0;
}
