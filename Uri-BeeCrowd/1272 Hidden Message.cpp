#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    getchar();
    string s;
    while(t--)
    {
        getline(cin,s);
        int i=0;
        while(s[i]!='\0')
        {
            if(i==0&&s[i]>='a'&&s[i]<='z'){
                cout<<s[i];
            }
            else{
                if(s[i-1]==' '&&s[i]>='a'&&s[i]<='z')
                    cout<<s[i];
            }


            i++;
        }
        cout<<endl;
    }

    return 0;
}
