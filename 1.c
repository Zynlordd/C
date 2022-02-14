#include<stdio.h>  
int main(void){
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int s =0;
    for (int i =0; i<b; i++){
        s+=a;
    }
    printf("%d", s);
}