#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "");
	int ip;
	char bin_temp[100];
	printf("Введите ip:");
	scanf("%d", &ip);
	int	i =0;
	while (ip) {
		
		bin_temp[i] =(char)(ip % 2);
		ip /= 2;
		i++;
	}
	int l = 0;
	while (bin_temp[l] !=-52){
		l++;
	}
	char bin[100];

	for (int i = l - 1, a = 0; i >= 0; i--, a++) {
		bin[a] = bin_temp[i];
	}

	if ((bin[0] == 0&& bin[1] == 1)|| (bin[0]==1&&bin[1]==-52)) {
		printf("ваш ip класса a");
	}
	else if (bin[0] == 1 && bin [1] == 0) {
		printf("класс ip B");
	}
	else if (bin[1] == 1 && bin[2] == 0) {
		printf("класс ip C");
	}
	else if (bin[2] == 1 && bin[3] == 0) {
		printf("класс ip D");
	}
	else if (bin[3] == 1 && bin[4] == 0) {
		printf("класс ip E");
	}
	else { printf("нет такого ip"); }

}