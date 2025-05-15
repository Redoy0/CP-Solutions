#include<bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    string str[t];
    double s_total=0,s1_total=0,b_total=0,b1_total=0,a_total=0,a1_total=0;
    for(int i=0;i<t;i++)
    {
        int s,b,a,s1,b1,a1;
        cin>>str[i];
        cin>>s>>b>>a>>s1>>b1>>a1;

        s_total+=s;s1_total+=s1;b_total+=b;b1_total+=b1;a_total+=a;a1_total+=a1;
    }
        double s_per= (double)s1_total/s_total*100;
        double b_per= (double)b1_total/b_total*100;
        double a_per= (double)a1_total/a_total*100;

        cout<<fixed<<setprecision(2);
        cout<<"Pontos de Saque: "<<s_per<<" %."<<endl;
        cout<<"Pontos de Bloqueio: "<<b_per<<" %."<<endl;
        cout<<"Pontos de Ataque: "<<a_per<<" %."<<endl;

    return 0;
}
