#include<bits/stdc++.h>
using namespace std;

int main()
{   int n,m,j,number;
    int a[4];
    while(cin>>n>>m)
    {
        int cnt=0;
        for(int i=n;i<=m;i++)
        {
            j=0;
            number=i;
            int flag=0;
            while(number!=0)
            {
                a[j]=number%10;
                number/=10;
                j++;
            }
            for(int k=0;k<j;k++)
            {
                for(int l=k+1;l<j;l++)
                {
                    if(a[k]==a[l])
                        flag=1;
                }
            }
            if(flag==0) cnt++;

        }
        cout<<cnt<<endl;
    }

    return 0;
}
