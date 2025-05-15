#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    while(cin>>t){
    int size[t],cnt=0;
    string foot[t];
    for(int i=0;i<t;i++){
        cin>>size[i];
        cin>>foot[i];
    }
    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++)
        {
            if(size[i]==size[j]){
                if((foot[i]=="D"&&foot[j]=="E")||(foot[i]=="E"&&foot[j]=="D"))
                    {
                    cnt++;
                    foot[i]="n";
                    foot[j]="f";
                    break;
                    }

            }
        }
    }
    cout<<cnt<<endl;
}
    return 0;
}
