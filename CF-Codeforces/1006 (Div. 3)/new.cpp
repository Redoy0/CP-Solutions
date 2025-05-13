#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    long long u=0,d=0;
    for(char i:s)
    {
        if(i=='-')
        {
            u++;
        }
        else
        {
            d++;
        }
    }
    if(u<2 || d==0)
    {
        cout<<"0"<<endl;
        return;
    }
    long long temp=u/2,t2,ans;
    t2=u-temp;

    ans=(t2*temp)*d;
    cout<<ans<<endl;

}
int main()
{
    int t=1,tc=1;
    cin>>t;
    while(tc<=t)
    {
        //cout<<"Case "<<tc<<": ";
        solve();

        tc++;
    }

    return 0;
}


