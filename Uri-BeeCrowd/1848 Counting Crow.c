#include<stdio.h>
#include<string.h>
int main()
{
    char blink[10];
    int i=0,sum=0;
    while(1){
        gets(blink);
        if(blink[0]=='c'){
            printf("%d\n",sum);
            sum=0;i++;
            if(i==3) break;
        }
        if(blink[0]=='*')
            sum+=4;

        if(blink[1]=='*')
            sum+=2;

        if(blink[2]=='*')
            sum+=1;

    }

    return 0;
}
