#include<bits/stdc++.h>
using namespace std;

int main()
{   int t,n;
    while(cin>>t>>n){
        if(t==0) break;
        string s;
        int x,sum=0;
        while(t--){
            cin>>s>>x;
            sum+=x;
        }
        cout<<(3*n)-sum<<endl;
    }

    return 0;
}
