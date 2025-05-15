#include<stdio.h>
#include<math.h>
int main()
{
    int l,c,r1,r2,L,large,x;
    while(scanf("%d %d %d %d",&l,&c,&r1,&r2)>0){
            if(l==0&&c==0&&r1==0&&r2==0){
                break;
            }
    L=(r1+r2);
    large=(r1>r2)?r1:r2;
    x=(pow((l-L),2)+pow((c-L),2));
    if(c<l){
        if(x>=pow(L,2) && c>=large*2){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
    else if(l<c){
        if(x>=pow(L,2) && l>=large*2){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
    else if(l==c){
        if(x>=pow(L,2) && c>=large*2){
            printf("S\n");
        }
         else if(x>=pow(L,2) && l>=large*2){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }

    }

    return 0;
}
