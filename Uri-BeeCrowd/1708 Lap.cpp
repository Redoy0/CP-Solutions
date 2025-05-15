#include<bits/stdc++.h>
using namespace std;

int main()
{   int a,b,cnt=0;
    cin>>a>>b;
    int d=b-a;
    for(int i=1;i<=b;i+=d)
    {
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
