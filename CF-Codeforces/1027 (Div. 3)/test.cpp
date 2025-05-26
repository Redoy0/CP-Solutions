#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    set<int> temp;
    for(int i:v)
        temp.insert(i);
    int ans=0,last_value=-1;
    for(int i:temp){
        if(i>last_value+1)
        {
            ans++;
            last_value=i;
        }
    }
    cout<<ans<<endl;

    }
    return 0;
}


