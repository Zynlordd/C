#include <stdio.h>
#include <math.h>

int main(void) {
	char bin[100] = {NULL};

	scanf("%s", bin);
	int l = 0; 
	while (bin[l]!=NULL) {
		l++;
	}
	int dec = 0;
	int sim = 0;
	for (int i = l-1, a =0; i >= 0; i--, a++) {
		dec += pow(2, a) * (bin[i] - '0');
	}
	printf("\n%d", dec);

}
