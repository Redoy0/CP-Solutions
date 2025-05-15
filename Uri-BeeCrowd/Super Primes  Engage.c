#include<stdio.h>
#include<math.h>
int prime(int n);

int main(){
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int c=1,l;
        int temp=n;
        while(temp!=0){
            l=temp%10;
            if(!prime(l)){
                c=0;
            }
            temp/=10;
        }

        if(prime(n)&& c!=1){
            printf("Primo\n");
        }
        else if(prime(n)&& c==1){
            printf("Super\n");
        }
        else printf("Nada\n");
    }
    return 0;
}
int prime(int n){
    int i;

    if (n % 2 == 0 && n != 2 || n == 1){
		return 0;
    }
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;
        }
    }


    return 1;

}

