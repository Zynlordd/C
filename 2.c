#include <stdio.h>
#include<locale.h>
int main (void){
    setlocale(LC_ALL, " ");
    int a[10];
    int b =0; 
    for (int i =0; i < 10; i++){
        scanf("%d", &a[i]);
        if (a[i]%2==0)b++;
    }
    printf("Четных \t%d\t нечётных\t%d\n",b,10-b);
}