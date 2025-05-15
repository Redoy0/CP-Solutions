#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    string s1,s2;
    while(cin>>s1>>s2){
        if(s1=="0" && s2=="0")
            break;
        int i=0;
        flag=0;
        while(s2[i]!='\0'){
            if(s1[0]!=s2[i]&&s2[i]!='0'){
                flag=1;
                cout<<s2[i];
            }
            i++;
        }

        if(flag==0){
            cout<<0;
        }
        cout<<endl;

    }


    return 0;
}
