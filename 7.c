#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "");
	int a, b;
	char z;
	double r;
	scanf("%d\n%c\n%d", &a, &z, &b);
	switch (z)
	{
	case'+':
		printf("%s%d", "=", a + b);
		break;
	case '-':
		printf("%s%d", "=", a - b);
		break;
	case'*':
		printf("%s%d", "=", a * b);
		break;
	case'/':
		r = (double)a / b;
		printf("%s%f", "=",r);
		break;
	case '^':
		for (int i = 0; i < b; i++) {
			a *= a;
		}
		break;
	default:
		break;
	}
}