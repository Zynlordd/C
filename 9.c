#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "");
	char mask[32]={0};
	int cidr = 0; 
	printf("введите маску в формате CIDR:");
	scanf("%d", &cidr);
	printf("\n");
	for (int i = 0; i <= 31; i++) {
		if (cidr > 0) {
			mask[i] = 1;
		}
		cidr--;
		
	}
	printf("ваша маска подсети: ");
	for (int i = 0; i < 32; i++) {
		if (i % 8 == 0 && i !=0) {
			printf(".");
		}
		printf("%d", mask[i]);
	}
	
}