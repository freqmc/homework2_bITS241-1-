#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int hw2_lab02() {
	float a, b;
	setlocale(LC_ALL, "RUS");
	printf("Введите два числа\n");
	scanf("%g %g", &a, &b);
	printf("___________________\n");
	printf("| a*b | a+b | a-b |\n");
	printf("-------------------\n");
	printf("|%2g*%2g|%2g+%2g|%2g-%2g|\n", a, b, a, b, a, b);
	printf("-------------------\n");
	printf("| %3g | %3g | %3g |\n", a * b, a + b, a - b);
	printf("-------------------\n");
	system("pause");
}
int hw2_lab03() {
	float n, L;
	n = 3;
	L = 313;
	setlocale(LC_ALL, "RUS");
	printf("Дано:\n\t  %1.0f\n\t%1.0f\n\t______________\nОтвет:\n\t%0+9.2f", n, L, n/L);
}
int main() {
	hw2_lab02();
	hw2_lab03();
}