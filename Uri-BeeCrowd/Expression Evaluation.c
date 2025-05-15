 #include<stdio.h>
 int main(){
 int i=4, j=2, k=6, a=2,m=0;
 //k*= i+j;
// j= i/=k;

 i%=i/3;
 /*
 m= i+(j=2+k);
 a= i*(j/=k/2);
 */
 printf("%d %d %d %d %d",i,j,k,a,m);
return 0;
 }
