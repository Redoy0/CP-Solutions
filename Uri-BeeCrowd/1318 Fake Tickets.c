#include<stdio.h>

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)!=0){

    if(n==0&&m==0) break;

    int arr[m];
    int i,j,temp;
    for(i=0;i<m;++i){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m-1;++i){
       for(j=0;j<m-1;++j){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
       }
    }
    int count=0;
    for(i=0;i<m;++i){

            if(arr[i]==arr[i+1]){
            count++;
            }
            if(arr[i]==arr[i+2]){
            count--;
            }
    }
    printf("%d\n",count);

}
return 0;
}
