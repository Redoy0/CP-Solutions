#include<stdio.h>
int main(){
int i,j,k=1,n=11,c=0;
char O;
double sum=0,m[12][12];
scanf("%c",&O);
for(i=0;i<12;++i){
    for(j=0;j<12;++j)
    {
        scanf("%lf",&m[i][j]);
    }
}
for(i=0;i<5;i++){
    for(j=k;j<n;++j){
        sum+=m[i][j];
        c++;
    }
    n--;
    k++;

}
if(O=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(O=='M'){

        printf("%.1lf\n",(sum/c));
    }

return 0;

}


