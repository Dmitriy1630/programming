#include "stdafx.h"
#include <stdio.h>
#include <cstdlib>
#include <clocale>
int main()
{
	float a, b, rez, otvet;
	char oper; 
	setlocale(LC_ALL, "");
	do
	{
		printf("Введите выражение: ");
		scanf("%f%c%f", &a, &oper, &b);
		switch (oper)
		{
			case	'+': rez = a + b;	break;
			case	'-': rez = a - b;	break;
			case	'*': rez = a*b;	break;
			case	'/': rez = a / b;	break;
			default: printf("Ошибка!\n"); 
		}
		if (oper=='+' || oper == '-' || oper == '*' || oper == '/')
			printf("Результат: %f\n", rez);
		printf("Продолжать? (1-да, 0- нет): ");
		scanf("%d", &otvet);
	} while (otvet != 0);
	return 0;
}