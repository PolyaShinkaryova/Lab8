#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int x;
	scanf("%d", &x);
	putchar('+');
	for (int start = 1; start <= x / 2; start++) {
		putchar('*');
		putchar('!');
	}
	putchar('\n');
	for (int start = 1; start <= x / 2; start++) {
		putchar('#');
		putchar('!');
	}
	putchar('+');
}