#include<stdio.h>
int  main(){
    int o,a,b,s,m;
    char ch;
    scanf("%d",&o);
    scanf("%d %c %d",&a,&ch,&b);

    if(ch=='*'){
        m=a*b;
        if(m>o){
            printf("OVERFLOW\n");
        }
        else{
            printf("OK\n");
        }
    }
    else if(ch=='+'){
        s=a+b;
        if(s>o){
            printf("OVERFLOW\n");
        }
        else{
            printf("OK\n");
        }
    }


return 0;
}
