#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    double d=3,x;
    x=1/6;
    if(t==0)
        printf("%.10lf\n",d);
    else if(t==1){
        d=d+x;
         printf("%.10lf\n",d);
        d=3;
    }
    else{
    for(int i=1;i<=t;i++)
    {
        x=1/(6+x);
    }
    d=d+x;
    printf("%.10lf\n",d);
    }

    return 0;
}
