#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    while(cin>>t&& t!=0){
            int sum=0;
    while(t--){

        int a,b;
        cin>>a>>b;
        if(b%2==0) sum+=b;
        else sum+=b-1;
    }
    cout<<(sum/4)<<endl;
    }
    return 0;
}
