#include<stdio.h>
int main()
{
    int n,per[5],imper[5],i,j,c1=0,c2=0;
    for(i=0;i<15;++i)
    {
        scanf("%d",&n);
        if(n%2==0){
            per[c1]=n;
            c1++;
            if(c1==5){
                for(j=0;j<5;++j){
                    printf("par[%d] = %d\n",j,per[j]);
                    per[j]=0;
                    c1=0;
                }

            }
        }
        else{
            imper[c2]=n;
            c2++;
            if(c2==5){
                for(j=0;j<5;++j){
                    printf("impar[%d] = %d\n",j,imper[j]);
                    imper[j]=0;
                    c2=0;
                }

            }
        }
    }
    for(i = 0;i<5;++i){
        if(imper[i]==0) break;
        printf("impar[%d] = %d\n",i,imper[i]);

    }
    for(i = 0;i<5;++i){
        if(per[i]==0) break;
        printf("par[%d] = %d\n",i,per[i]);

    }



return 0;
}
