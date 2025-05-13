#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Fast ios_base :: sync_with_stdio(0);cin.tie(0);
#define setp setprecision
#define forn(i,j,n) for(int i=(j);i<n;i++)

#define mod         1000000007
#define pi          acos(-1.0)
#define eps         1e-9

#define fs          first
#define sc          second
#define all(x)      x.begin(),x.end()
#define pb(a)       push_back(a)
#define mp(a,b)     make_pair(a,b)
#define sp          cout<<" "
#define nl          cout<<"\n"

#define set0(a)     memset(a,0,sizeof(a))
#define setneg(a)   memset(a,-1,sizeof(a))


#define tc1(x)      cout<<"Case "<<x<<": ";
#define tc2(x)      cout<<"Case #"<<x<<": ";
#define tc3(x)      cout<<"Case "<<x<<":\n";
#define tc4(x)      cout<<"Case #"<<x<<":\n";

#define pr1(x)      cout<<x<<"\n"
#define pr2(x,y)    cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)  cout<<x<<" "<<y<<" "<<z<<"\n"

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int>pii;
typedef pair<ll, ll>pll;
typedef pair<double, double>pdd;
typedef vector<int>vi;
typedef vector<ll>vll;
typedef vector<double>vd;

void solve()
{   int n,m,f=0;
    cin>>n>>m;
    int a[n],b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>b;

    if(n==0)
        printf("YES\n");
    else{
        int previous=min(a[0],b-a[0]);
        for(int i=1;i<n;i++){
            int op1=a[i];
            int op2=b-a[i];
            vector<int>v;
            if(op1>=previous){
                v.push_back(op1);
            }
            if(op2>=previous)
            {
                v.push_back(op2);
            }
            if(v.size()==0){

                f=1;
                break;
            }

            previous=*min_element(v.begin(), v.end());
        }
        if(f==1)printf("NO\n");
        else printf("YES\n");

    }


}
int main()
{   Fast;
    int t=1,tc=1;
    cin>>t;
    while(tc<=t){
        //cout<<"Case "<<tc<<": ";
        solve();

    tc++;
    }

    return 0;
}

