#include <bits/stdc++.h>
using namespace std;

int length(string s)
{
	char sm=s[0];
	char lrg=s[1];
	if(sm>lrg)
		swap(sm,lrg);

	if(sm+1==lrg)
		return 1;
	if(sm+2==lrg)
		return 2;
	if(sm+3==lrg)
		return (5-3);
	if(sm+4==lrg)
		return (5-4);
}
int main(int argc, char const *argv[])
{
	string s,t;
	cin>>s>>t;
	int length_Of_S =length(s);
	int length_Of_T =length(t);

	(length_Of_S==length_Of_T)?cout<<"Yes\n":cout<<"No\n";
	return 0;
}
