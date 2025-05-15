#include<stdio.h>
int   main(){
int i,j;
char ch;
float sum=0,m[12][12],c=0;
scanf("%c",&ch);
for(i=0;i<12;++i){
    for(j=0;j<12;++j)
    {
        scanf("%f",&m[i][j]);
    }
}
for(i=0;i<12;++i)
{
     for(j=i+1;j<12;j++)
    {
         sum+=m[i][j];
         c++;
    }

}
printf("%d\n",c);
if(ch=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(ch=='M'){

        printf("%.1f\n",(sum/c));
    }

return 0;

}


