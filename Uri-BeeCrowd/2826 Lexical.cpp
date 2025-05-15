#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[51];
    char s2[51];
        cin>>s1>>s2;
        if(strcmp(s1,s2)>0)
            cout<<s2<<endl<<s1<<endl;
        else if(strcmp(s1,s2)<0)
            cout<<s1<<endl<<s2<<endl;


    return 0;
}

