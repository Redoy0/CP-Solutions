#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    getchar();
    string s1,s2;
    while(t--){
        cin>>s1>>s2;
        int i=0,l1,l2,j=0,k=0,flag=0;
        l1=s1.length();
        l2=s2.length();
        if(l1>l2)
            i=l1-l2,j=l1;
        else
            i=l2-l1,j=l2;
        while(i<j){
            if(s1[i]!=s2[k]){
                flag=1;
                break;
            }
            i++;
            k++;
        }
        if(flag==0){
            cout<<"encaixa\n";
        }
        else
            cout<<"nao encaixa\n";

    }

    return 0;
}
