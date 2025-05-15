#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int *ptr,i,j;
    ptr=(int*)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;

    for(i=0;i<5;i++){
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    ptr=realloc(ptr,6);

    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;

    for(i=0;i<6;i++){
        printf("%d\t",ptr[i]);
    }
    /*
    //free(ptr);
    ptr=(int*)calloc(2,sizeof(int));

    for(i=0;i<2;i++){
        printf("%d\t",ptr[i]);
    }
    */
return 0;
}
