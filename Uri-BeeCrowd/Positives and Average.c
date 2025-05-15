#include<stdio.h>
int main(){
    float a,b,c,d,e,f,sum=0,avg,count=0;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    if(a>0){
    sum+=a;
    count++;
    }
    if(b>0){
    sum+=b;
    count++;
    }
    if(c>0){
    sum+=c;
    count++;
    }
    if(d>0){
    sum+=d;
    count++;
    }
    if(e>0){
    sum+=e;
    count++;
    }
    if(f>0){
    sum+=f;
    count++;
    }
    avg=sum/count;
    printf("%.0f valores positivos\n",count);
    printf("%.1f\n",avg);

return 0;
}

