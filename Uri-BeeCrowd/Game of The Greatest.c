#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)&& n!=0){
        int p1=0,p2=0,a,b;
        while(n--){
            scanf("%d %d",&a,&b);
            if(a>b){
                p1++;
            }
            else if(b>a){
                p2++;
            }
        }
        printf("%d %d\n",p1,p2);
    }

return 0;
}
