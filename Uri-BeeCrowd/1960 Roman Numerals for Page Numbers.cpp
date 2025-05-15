#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t!=0&&t<1000){
        if(t>=500)
        {
            if(t>=900&& t<1000)
            {
                cout<<"CM";
                t-=900;
            }
            else{
            cout<<"D";
            t-=500;

            }
        }
       else if(t>=100&&t<500){
            if(t>=400&&t<500)
            {
                cout<<"CD";
                t-=400;
            }
            else{
            cout<<"C";
            t-=100;
            }

        }
       else if(t>=50&&t<100){
            if(t>=90&&t<100)
            {
                cout<<"XC";
                t-=90;
            }
            else{
                cout<<"L";
                t-=50;
            }
        }
      else if(t>=10&&t<50){
            if(t>=40)
            {
                cout<<"XL";
                t-=40;
            }
            else{

            cout<<"X";
            t-=10;
            }
        }
       else if(t>=5&&t<10){
            if(t==9)
            {
                cout<<"IX";
                t-=9;
            }
            else{
                cout<<"V";
                t-=5;
            }
        }
        else{
            if(t>=4&&t<5)
            {
                cout<<"IV";
                t-=4;
            }
         else{
            cout<<"I";
            t-=1;
        }
        }

    }
    cout<<endl;

    return 0;
}
