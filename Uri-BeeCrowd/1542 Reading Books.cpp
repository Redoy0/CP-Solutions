#include<bits/stdc++.h>
using namespace std;

int main()
{   int q,d,p;
    while(cin>>q&&q){
        cin>>d>>p;
        int page=(q*p*d)/(p-q);
        if(page>1)
            cout<<page<<" paginas"<<endl;
        else
            cout<<page<<" pagina"<<endl;

    }

    return 0;
}
