#include<stdio.h>
int main(){
    int t;

    while(scanf("%d",&t)&&t){
        int n;
        int sum=0;
        char str[20];
        while(t--)
        {
            scanf("%d ",&n);
            gets(str);
            if(str[0]=='s')
                sum+=(n*120);
           else if(str[0]=='m'&&str[1]=='o')
                sum+=(n*85);
            else if(str[0]=='m'&&str[1]=='a'&&str[2]=='m')
                sum+=(n*85);
            else if(str[0]=='g')
                sum+=(n*70);
           else if(str[0]=='m'&&str[1]=='a'&&str[2]=='n')
                sum+=(n*56);
            else if(str[0]=='l')
                sum+=(n*50);
            else if(str[0]=='b')
                sum+=(n*34);

        }
        if(sum<110)
            printf("Mais %d mg\n",110-sum);
        else if(sum>130)
           printf("Menos %d mg\n",sum-130);
        else
            printf("%d mg\n",sum);

    }


return 0;
}
