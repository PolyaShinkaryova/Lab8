#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, s = 1;
	scanf("%d", &n);
	for (int start = 0; start <= n; start++) 
	{
		printf("2^%d = %d\n", start, s);
		s *= 2;
	}
	printf("Результат: %.2fK", s / 1024.);
}