#include <bits/stdc++.h>
using namespace std;

int main()
{	
	int n,t;
	cin>>t;
	while(t--)
	{
		int f1,f2,c;
		cin>>f1>>f2;
		if(f1>f2)
		{
			int temp=f1;
			f1=f2;
			f2=temp;
				
		}
		while(f2%f1!=0){
			c=f2%f1;
			f2=f1;
			f1=c;
		}
		cout<<f1<<'\n';
			
	}
	return 0;
		
		
}