#include<bits/stdc++.h>
using namespace std;

int dev(int t)
{
    int sum=0;
    for(int i=1;i<t;i++)
    {
        if(t%i==0)
        {
            sum+=i;
        }

    }
    return sum;

}
int main()
{   int t,n;
    cin>>n;
    while(n--){
            cin>>t;
    if(t==dev(t))
        cout<<t<<" eh perfeito\n";
    else
        cout<<t<<" nao eh perfeito\n";

    }
    return 0;
}
