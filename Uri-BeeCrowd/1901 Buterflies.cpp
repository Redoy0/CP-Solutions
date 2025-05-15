#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    int a[t][t];
    int v[2*t];
    int cnt=0;
    for(int i=0;i<t;i++)
        for(int j=0;j<t;j++)
            cin>>a[i][j];
    int x,y;
    for(int i=0;i<2*t-1;i++){
        cin>>x>>y;
        v[i]=a[x-1][y-1];
    }
    int temp;
    for(int i=0;i<2*i-1;i++){
        for(int j=i+1;j<2*t-1;j++)
        {
            if(v[i]>v[j])
                {
                    temp=v[i];
                    v[i]=v[j];
                    v[j]=temp;

                }
        }
    }
    for(int i=0;i<2*i-1;i++){
        for(int j=i+1;j<2*t-1;j++)
        {
            if(v[i]==v[j]&&v[i]!=-1)
                {
                    v[j]=-1;

                }
        }
    }
    for(int i=0;i<2*i-1;i++){
      if(v[i]!=-1)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
