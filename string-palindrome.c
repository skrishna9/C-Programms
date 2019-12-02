#include<stdio.h>
#include<string.h>
main(){
    char s[100],f[100];
    puts("eneter the string:");
    gets(s);
    puts("enter the string:");
    gets(f);
    if(strcmp(s,f)==0){
        printf("string is pailingdrome");
    }
    else{
        printf("string isnot pailingdrom");
    }
}
