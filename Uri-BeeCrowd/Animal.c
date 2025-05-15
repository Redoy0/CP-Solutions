#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20],str3[20];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    fgets(str3,sizeof(str3),stdin);

    if(str1[0]=='v' && str2[0]=='a' && str3[0]=='c'){
        printf("aguia\n");
    }
    else if(str1[0]=='v' && str2[0]=='a' && str3[0]=='o'){
        printf("pomba\n");
    }
    else if(str1[0]=='v' && str2[0]=='m' && str3[0]=='o'){
        printf("homem\n");
    }
    else if(str1[0]=='v' && str2[0]=='m' && str3[0]=='h'){
        printf("vaca\n");
    }

    else if(str1[0]=='i' && str2[0]=='i' && str3[0]=='h' && str3[1]=='e' && str3[2]=='m'){
        printf("pulga\n");
    }
    else if(str1[0]=='i' && str2[0]=='i' && str3[0]=='h' && str3[1]=='e' && str3[2]=='r'){
        printf("lagarta\n");
    }
    else if(str1[0]=='i' && str2[0]=='a' && str3[0]=='h'){
        printf("sanguessuga\n");
    }
    else if(str1[0]=='i' && str2[0]=='a' && str3[0]=='o'){
        printf("minhoca\n");
    }


return 0;
}

