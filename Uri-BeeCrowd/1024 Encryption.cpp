#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        int i=0;
        while(s[i]!='\0')
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                s[i]+=3;
            }
            i++;
        }
        reverse(s.begin(),s.end());
        int l=s.length();
        for(int j=l/2;j<=l;j++)
        {
            s[j]--;
        }
        cout<<s<<endl;


    }
    return 0;
}
