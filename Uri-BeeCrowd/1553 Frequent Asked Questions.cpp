#include<bits/stdc++.h>
using namespace std;

int main()
{   int n,k,j;
    while(cin>>n>>k && n!=0 && k!=0)
    {
        int a[n],cnt=0;
        int b[1000]={0};
        for(int i=0;i<n;i++)
        {
            cin>>j;
            b[j-1]++;

        }

        for(int i=0;i<n;i++)
        {
            if(b[i]>=k)
                cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
