#include <stdio.h>
#include <locale.h>
int main(void){
    char str[100]={0};
    scanf("%s", str);
    int length = 0;
    while(str[length]!=0){
        length++;
    }
    printf("\nДлинна строки: %d", length);
    for (int i = length-1, a = length; i >= 0; i--, a++){
        str[a]=str[i];
    }
    for(int i = length, a = 0; i<2*length; i++,a++){
        str[a]=str[i];
    }
    for (int i = length; i<2*length; i++){
        str[i]=0;
    }
    printf("\nВаша строка наоборот: %s", str);
}