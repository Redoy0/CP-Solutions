#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Fast ios_base :: sync_with_stdio(0);cin.tie(0);
#define setp setprecision
#define forn(i,j,n) for(int i=(j);i<n;i++)
#define in(v) forn(i,0,v.size()) cin>>v[i]
#define out(v) forn(i,0,v.size()) cout<<v[i]<<" "

#define mod         1000000007
#define pi          acos(-1.0)
#define eps         1e-9

#define fs          first
#define sc          second
#define all(x)      x.begin(),x.end()
#define pb(a)       push_back(a)
#define min_e(v)    *min_element(v.begin(), v.end())
#define max_e(v)    *max_element(v.begin(), v.end());
#define mp(a,b)     make_pair(a,b)
#define sp          cout<<" "
#define nl          cout<<"\n"

#define set0(a)     memset(a,0,sizeof(a))
#define setneg(a)   memset(a,-1,sizeof(a))
#define toLower(s)  transform(s.begin(),s.end(),s.begin(),::tolower)
#define toUpper(s)  transform(s.begin(),s.end(),s.begin(),::toupper)

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
{
    int n;
    cin>>n;
    vi v(n);
    in(v);
    sort(all(v));
    if((v[0]+v[n-1])%2==0){
        cout<<0<<endl;
        return;
    }
    int case1=n;
    int case2=n;
    for(int i=0;i<n;i++){
        if(v[0]%2!=v[i]%2){
            case1=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[n-1]%2!=v[i]%2){
            case2=n-i-1;
            break;
        }
    }
    cout<<min(case1,case2)<<endl;

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


