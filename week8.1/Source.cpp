#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int* number, x;
	number = &x;
	char print[20] = {" Enter number "};
	printf("%s : ", print);
	scanf_s("%d", &x);

	float* num,* ans, y, z;
	num = &y;
	ans = &z;
	if (x == 2 || x == -2) {
		printf(" zero division error \n");
	}
	else {
		y = x * x - 4;
		z = 4 / y;
		if (z < 0) {
			printf(" Negative root \n");
		}
		else {
			printf(" Answer : %.2f \n", sqrt(z));
		}
	}
	return 0;
}
