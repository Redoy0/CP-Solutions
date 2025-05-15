#include<bits/stdc++.h>
using namespace std;

int main()
{   int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        int min=(a<b)?a:b;
        cout<<(min*3)-(a+b)<<endl;
    }

    return 0;
}
