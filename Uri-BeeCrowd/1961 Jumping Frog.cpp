#include<bits/stdc++.h>
using namespace std;

int main()
{   int p,n,def;
    while(cin>>p>>n)
    {
        int a[n];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            def=abs(a[i+1]-a[i]);
            if(def>p){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"GAME OVER\n";
        else
            cout<<"YOU WIN\n";

    }



    return 0;
}
