#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s1,s2;

    while(cin>>t && t!=0)
    {
        int year=2114;
        int a,b;
        while(t--){
            cin>>s1>>a>>b;
            if((a-b)<year)
            {
                year=a-b;
                s2=s1;
            }
        }
        cout<<s2<<endl;
    }
}
