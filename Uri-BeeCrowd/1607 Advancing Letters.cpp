#include<bits/stdc++.h>
using namespace std;

int main()
{   int t,x;
    cin>>t;
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        if(s1==s2){
            cout<<"0\n";
         continue;
        }
        int sum=0;
        for(int i=0;i<s1.length();i++){
        x=(s2[i]-97)-(s1[i]-97);
        if(x<0)
            sum+=x+26;
        else
            sum+=x;
        }
        cout<<sum<<endl;

    }
    return 0;
}
