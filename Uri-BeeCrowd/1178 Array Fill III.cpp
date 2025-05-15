#include<bits/stdc++.h>
using namespace std;
void display(vector<double> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        printf("N[%d] = %.4lf\n",i,v[i]);

    }
    
    
}
int main(){
  vector<double> v(100);
  double num;
  cin>>num;
  v[0]=num;
  for (int i = 1; i < v.size(); i++)
  {
    num=num/2.0;
    v[i]=num;


  }
  display(v);

  

} 