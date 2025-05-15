#include<bits/stdc++.h>
using namespace std;

int main()
{   int a,t;
    cin>>a>>t;
    string s;
    while(t--)
    {
        cin>>s;
        if(s=="fechou")
            a++;
        else
            a--;
    }
    cout<<a<<endl;

    return 0;
}
