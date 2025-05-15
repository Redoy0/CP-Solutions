#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    int i,c,n,j;
    scanf("%d",&c);
    for(i=0;i<c;++i){
        fflush(stdin);
        scanf("%s %d",str,&n);
        j=strcmp(str,"Thor");
        if(j==0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }

return 0;}
