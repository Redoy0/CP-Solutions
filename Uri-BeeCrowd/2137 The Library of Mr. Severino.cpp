#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;

    while(cin>>t){
            string s[t];
        for(int i=0;i<t;i++){
            cin>>s[i];
        }
        for(int i=0;i<t;i++){
            for(int j=i+1;j<t;j++)
            {
                if(s[j]<s[i]){
                    string temp=s[j];
                    s[j]=s[i];
                    s[i]=temp;
                }
            }
        }
        for(int i=0;i<t;i++){
           cout<<s[i]<<endl;
        }
    }

    return 0;
}
