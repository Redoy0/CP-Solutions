#include<bits/stdc++.h>
using namespace std;

int isLeap(char *year,int div);
int main()
{
    long long int y4,y100,y400,y15,y55;
    int flag=0;
    char year[3000];
    while(scanf("%s",year)!=EOF)
    {
        if(flag==1)
            cout<<endl;
        flag=1;
        int leap=0;
        y4=isLeap(year,4);
        y100=isLeap(year,100);
        y400=isLeap(year,400);
        y15=isLeap(year,15);
        y55=isLeap(year,55);
        if(y400==1||(y4==1&&y100!=1))
            cout<<"This is leap year.\n",leap=1;
        if(y15==1)
            cout<<"This is huluculu festival year.\n",leap=1;
        if((y400==1&&y55==1)||(y4==1&&y100!=1&&y55==1))
            cout<<"This is bulukulu festival year.\n",leap=1;
        if(leap==0)
            cout<<"This is an ordinary year.\n";

    }

}

int isLeap(char *year,int div)
{
    int j=0;
    for(int i=0;year[i]!=0;i++){
        j=((year[i]-'0')+j*10)% div;
    }
    if(j==0)
        return 1;
    else
        return 0;
}
