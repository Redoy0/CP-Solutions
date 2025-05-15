#include<stdio.h>
int   main(){
int i,j,l;
char ch;
float sum=0,avg=0,m[12][12];
scanf("%d %c",&l,&ch);
for(i=0;i<12;++i){
    for(j=0;j<12;++j)
    {
        scanf("%f",&m[i][j]);
    }
}
for(i=0;i<12;++i)
{
    sum+=m[l][i];
}
if(ch=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(ch=='M'){
        avg=sum/12.0;
        printf("%.1f\n",(sum/12.0));
    }

return 0;

}


