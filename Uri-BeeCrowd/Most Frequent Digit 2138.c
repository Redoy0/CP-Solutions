#include<stdio.h>
int main(){
    char s[1001];
    while(scanf("%s",s)!=EOF){
        int i,j,l;
        int d[10]={0,0,0,0,0,0,0,0,0};
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='0')
                d[0]++;
            else if(s[i]=='1')
                d[1]++;
            else if(s[i]=='2')
                d[2]++;
            else if(s[i]=='3')
                d[3]++;
            else if(s[i]=='4')
                d[4]++;
            else if(s[i]=='5')
                d[5]++;
            else if(s[i]=='6')
                d[6]++;
            else if(s[i]=='7')
                d[7]++;
            else if(s[i]=='8')
                d[8]++;
            else if(s[i]=='9')
                d[9]++;
        }
        int large=d[0],p=0;
        for(i=1;i<10;++i)
        {
            if(d[i]>=large)
            {
                large=d[i];
                p=i;
            }

        }

        printf("%d\n",p);
    }



return 0;
}
