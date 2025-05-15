#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    long long x;
    while(t--){
        int flag=1;
        cin>>x;
        if(x==0||x==1){
            cout<<"Not Prime\n";
            continue;
        }
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<"Prime"<<endl;
        else
            cout<<"Not Prime"<<endl;

    }

    return 0;
}
