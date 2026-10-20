#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int Task2();

int main() {
	setlocale(LC_ALL, ".UTF-8");
	
	printf("===Задание 1.2===\n");

	char c;
	printf("Введите символ: ");
	scanf(" %c", &c);
	switch (c >= '0' && c <= '9')
	{
	case 1:
		printf("это цифра \n");
		break;
	case 0:
		printf("это буква \n");
		break;
	}
	Task2();

	return 0;
}
int Task2() {
	float x, y;
	char c;
	printf("Введите выражение:");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("=%f", x + y);
		break;
	case '-':
		printf("=%f", x - y);
		break;
	case '*':
		printf("=%f", x * y);
		break;
	case '/':
		printf("=%f", x / y);
		break;
	case '^':
		printf("=%f", pow(x, y));
		break;
	default:
		printf("Ошибка");
	}

	return 0;
}
