#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,ascii;cin>>t;
	getchar();
	while(t--){

		char a[123];
		string s;
		int max=0;
		getline(cin,s);
		for(int i=97;i<123;i++){
            a[i]=0;
		}
		for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=32;
            if(s[i]>='a'&&s[i]<='z')
                {
                    ascii=(int) s[i];
                    a[ascii]++;
                    if(a[ascii]>max)
                        max=a[ascii];
                }

		}

		for(int i=97;i<123;i++){
            if(a[i]==max)
             printf("%c",i);
		}
		printf("\n");

	}
	return 0;
}
