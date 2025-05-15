#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;

    while(cin>>s1){
    int n;
    cin>>n;
    cout<<"$";
    int i,l;
    l=s1.length();
    i=l-1;
    for(int j=0;j<l;j++){
        if(i%3==0&&i!=0)
            cout<<s1[j]<<",";

        else
            cout<<s1[j];
        i--;

    }
    printf(".%02d\n",n);
    }

    return 0;
}
