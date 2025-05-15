#include <bits/stdc++.h>
using namespace std;
int pol(int x,int i){
	if(x==i)
		return 0;

		double res;
        res=pow(x,i);
        if(x==i+1){
            cout<<res<<"\n";
        }else
            cout<<res<<" + ";
        pol(x,i+1);
}
int main()
{
	int n;
	cin>>n;
	pol(n,0);
	return 0;
}
