#include<stdio.h>
const int MAX= 1000001;
unsigned long long arr[1000001];
unsigned long long check[1000001];

int main(){
    unsigned long long n;
    scanf("%llu", &n);
    for(int i = 0; i < n; i++) check[i] = 0;
    for(int i = 0; i < n; i++) scanf("%llu", &arr[i]);
    unsigned long long sumT = 0, sumS = 0;
    unsigned long long i = 0;
    while(1){
        if(i < 0 || i > (n-1)){
            break;
        }
        else if(arr[i]==0){
            if(check[i]==0){
                check[i]==1;
               sumT++;
            }
            i--;
        }
        else if(arr[i]%2==0){
            if(check[i]==0){
                sumT++;
                check[i] = 1;
            }
            arr[i]--;
            i--;
        }
        else{
            if(check[i]==0){
                sumT++;
                check[i] = 1;
            }
            arr[i]--;
            i++;
        }
    }
    for(unsigned long long i = 0; i < n; i++){
        sumS+=arr[i];
    }
    printf("%llu %llu\n", sumT, sumS);
    return 0;
}
