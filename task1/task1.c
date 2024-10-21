#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, m, s, k;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = m; i >= n; i--) 
	{
		s += i;
		printf("выполнено %d раз", k++);
		printf("результат %d", s);
	}
}
