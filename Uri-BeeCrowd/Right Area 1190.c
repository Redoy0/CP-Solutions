#include<stdio.h>
int main(){
int i,j,k=1,n=11,c=0;
char O;
float sum=0.0,m[12][12];
scanf("%c",&O);
for(i=0;i<12;++i){
    for(j=0;j<12;++j)
    {
        scanf("%f",&m[i][j]);
    }
}
for(j=0;j<5;j++){
    for(i=k;i<n;++i){
        sum+=m[i][j];
        c++;
    }
    n--;
    k++;

}
if(O=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(O=='M'){

        printf("%.1f\n",(sum/c));
    }

return 0;

}



