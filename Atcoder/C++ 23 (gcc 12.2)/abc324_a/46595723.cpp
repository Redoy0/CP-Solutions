#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        if(a!=x)
        {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}
int main()
{

    int t=1,tc=1;
    //cin>>t;
    while(tc<=t)
    {
        //cout<<"Case "<<tc<<": ";
        solve();

        tc++;
    }

    return 0;
}

