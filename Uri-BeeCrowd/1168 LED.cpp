#include<bits/stdc++.h>
using namespace std;

int main()
{   int t,i=0;
    cin>>t;
    long long int led;
    string s;
    while(t--){
        led=0,i=0;
        cin>>s;
        while(true){
            if(s[i]=='\0') break;
            if(s[i]=='1') led+=2;
            if(s[i]=='2'||s[i]=='3'||s[i]=='5') led+=5;
            if(s[i]=='4') led+=4;
            if(s[i]=='6'||s[i]=='9'||s[i]=='0') led+=6;
            if(s[i]=='7') led+=3;
            if(s[i]=='8') led+=7;

            i++;
        }
        cout<<led<<" leds\n";

    }

    return 0;
}
