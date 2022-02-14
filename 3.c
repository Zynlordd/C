#include <stdio.h> 
#include <locale.h>
int main(void){
    char str[80];
    setlocale(LC_ALL, ""); 
    scanf("%s", str); 
    int i = 0; 
    while (str[i] != NULL)
    {
        if (str[i] == '?') {
            str[i] = '!';
        }
        i++;
    }
    printf("%s", str);

}