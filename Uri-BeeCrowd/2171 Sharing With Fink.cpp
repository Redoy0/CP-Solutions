#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    while(cin>>t)
    {
        int sum=0;
        if(t==0){

            break;
        }

        for(int i=1;sum+i<=t;i++){
            sum+=i;

        }

        cout<<sum<<" "<<t-sum<<endl;
    }

    return 0;
}
