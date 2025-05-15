#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    while(cin>>n){
            if(n==0)
                break;
                if(flag==1)
                    cout<<endl;
    string s[50];
    int l=0;
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        if(s[i].length()>l)
            l=s[i].length();
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=s[i].length();j<l;j++)
            cout<<" ";

        cout<<s[i]<<endl;
    }
    flag=1;

    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    while(cin>>n){
            if(n==0)
                break;
                if(flag==1)
                    cout<<endl;
    string s[50];
    int l=0;
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        if(s[i].length()>l)
            l=s[i].length();
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=s[i].length();j<l;j++)
            cout<<" ";

        cout<<s[i]<<endl;
    }
    flag=1;

    }
    return 0;

}
