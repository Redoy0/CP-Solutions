#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    char ch;
    int i=0;
    while(cin.getline(str,100)!='\0'){
        int flag=0;
        for(i=0;i<strlen(str);i++){
            if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
            if(flag==0){
                ch=toupper(str[i]);
                cout<<ch;
                flag=1;
                continue;
            }
            else{

                ch=tolower(str[i]);
                cout<<ch;
                flag=0;
                continue;
            }
        }else{
            ch=str[i];
            cout<<ch;
        }

    }
        printf("\n");

    }


return 0;
}
