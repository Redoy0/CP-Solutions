#include<stdio.h>
int   main(){
int i,j,c;
char ch;
float sum=0,avg=0,m[12][12];
scanf("%d %c",&c,&ch);
for(i=0;i<12;++i){
    for(j=0;j<12;++j)
    {
        scanf("%f",&m[i][j]);
    }
}
for(i=0;i<12;++i)
{
    sum+=m[i][c];
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
