#include<stdio.h>
void main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("Lowercase string: %s",str);
}