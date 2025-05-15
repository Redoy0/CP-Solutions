#include<stdio.h>
int main(){
    int i,t;
    while(scanf("%d",&t)!=0){
       if(t==0) break;
       char a[t];
       char b[]="NLSO";
       int c=1;

    scanf("%s",a);
    for(i=0;i<t;i++){
        if(a[i]=='D'){
            ++c;
            if(c>4)
                c=1;
        }
        else{
            --c;
            if(c==0)
                c=4;
        }
    }
    printf("%c\n",b[c-1]);
}


return 0;
}
