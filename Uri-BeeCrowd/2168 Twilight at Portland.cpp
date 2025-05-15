#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    t++;
    int a[t][t];
    for(int i=0;i<t;i++)
        for(int j=0;j<t;j++)
            cin>>a[i][j];

    for(int i=0;i<t-1;i++)
    {
        for(int j=0;j<t-1;j++)
        {
            int sum=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
            if(sum>=2)
                cout<<"S";
            else
                cout<<"U";
        }
        cout<<endl;
    }
    return 0;
}
