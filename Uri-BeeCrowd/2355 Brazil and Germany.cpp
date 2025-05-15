#include<bits/stdc++.h>
using namespace std;

int main()
{   long t;
    while(cin>>t){
        if(t==0) break;
        int bra,ger;
        double avg=t/90.0;
        bra=floor(avg*1);
        ger=ceil(avg*7);
        cout<<"Brasil "<<bra<<" x "<<"Alemanha "<<ger<<endl;
    }

    return 0;
}
