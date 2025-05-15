#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,t;
    char str[101];
    cin>>t;
    while(t--){
            fflush(stdin);
        cin.getline(str,100);
        int l = strlen(str);
        for(i=l/2-1;i>=0;i--)
            printf("%c",str[i]);
        for(i=l-1;i>=l/2;i--)
            printf("%c",str[i]);
        printf("\n");

    }
return 0;
}
