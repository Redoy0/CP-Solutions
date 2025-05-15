#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s.length()<6 || s.length()>32)
        {
            cout<<"Senha invalida.\n";
        }
        else
        {
            int i=0,charB=0,charS=0,num=0;
            int n=1;
            while(s[i]!='\0')
            {
                if(s[i]>='A'&&s[i]<='Z')
                    charB++;
                else if(s[i]>='a'&&s[i]<='z')
                    charS++;
                else if(s[i]>='0'&&s[i]<='9')
                    num++;
                else
                    n=0;

                i++;
            }

            if(n==1&&charB!=0&&charS!=0&&num!=0){
                cout<<"Senha valida.\n";
            }
            else{
                cout<<"Senha invalida.\n";
            }
        }
    }

    return 0;
}
