#include<stdio.h>
int main()
{
    char ch;
    int j,i;
    char arr[27];
    scanf("%c",&ch);
    for(i='A',j=1;i<='Z';i++,j++){
        arr[i]=j;
    }
    printf("%d\n",arr[ch]);
    return 0;
}
