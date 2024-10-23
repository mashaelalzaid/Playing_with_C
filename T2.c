#include <stdio.h>
int main() {
	float intNum, intDenom;
	printf("Enter the numerator number: ");
	scanf("%f", &intNum);
	printf("Enter the denominator number: ");
	scanf("%f", &intDenom);
	printf("%f\n", intNum/intDenom);

	return 0;
}
