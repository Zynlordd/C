#include <stdio.h>
#include <locale.h>

	int main(void)
	{
		int a = 0;
		int b = 0;
		int c =0 ;

		setlocale(LC_ALL, "");
		
		scanf("%d\n%d\n%d",  &a,  &b,  &c);

		if (!(((a + b) > c) || ((a + c) > b) || ((c + b) > a))) {
			printf("Такого теругольника не существует");
		}
		else{
			if (a > c && a > b) {
				if ((a * a) == (b * b + c * c)) {
					printf("Прямоугольный трегольник");
                    
				}
			}
			else if (b > a && b > c) {
				if ((b*b) == (a*a + c * c)) {
					printf("Прямоугольный трегольник");
				}
			}
			else if (c > a && c>b) {
				if ((c * c) == (b * b + a * a)) {
					printf("Прямоугольный трегольник");
				}
			}
			else if ((a == b) || (a == c) || (b == c)) {
				printf("Равнобедренный треугольник");
			}
			else {
				printf("Обычный треугольник");
			}
		}
	
		return 0;
	}
	