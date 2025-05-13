#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a,b,c,d;
    scanf("%c%c",&a,&b);
    getchar();
    scanf("%c%c",&c,&d);
    int f=b-a;
    int l=d-c;
    f=abs(f);
    l=abs(l);
    if(f==l||f+l==5)
        printf("Yes\n");
    else
        printf("No\n");



    return 0;
}
