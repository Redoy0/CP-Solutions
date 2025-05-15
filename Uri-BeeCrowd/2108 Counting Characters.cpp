#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,m;
    while(getline(cin,s)){
        string temp;
        if(s=="0")
            {
                cout<<endl<<"The biggest word:"<<m<<endl;
                break;
            }
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{

                if(temp.length()>=m.length())
                    m=temp;

                cout<<temp.length()<<"-";
                temp.clear();
            }

        }
        if(!temp.empty()){
            cout<<temp.length()<<endl;
            if(temp.length()>=m.length())
                    m=temp;
        }
    }

    return 0;
}
