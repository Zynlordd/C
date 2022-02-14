#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    double a = 0, b = 0, res;
    setlocale(LC_ALL, "");
    printf("Введите число и его степень: ");
    scanf("%lf\n%lf", &a, &b);
    res = pow(a, b);
    printf("%.2f в степени %.2f равно : %.2f\n",a, b, res);

    return 0;
}