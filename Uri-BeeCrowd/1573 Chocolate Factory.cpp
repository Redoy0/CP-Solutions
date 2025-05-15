#include<bits/stdc++.h>
using namespace std;

int main()
{   int a,b,c;
    while(cin>>a>>b>>c){
        if(a==0&&b==0&&c==0) break;
    long long res=a*b*c;
    int r=(int)cbrt(res);
    cout<<r<<endl;

    }
    return 0;
}
