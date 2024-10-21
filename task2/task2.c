#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>
double f (double x);




	int main()
	{
		char c = 'да';
		while (c == 'да')
		{
			double x;
			setlocale(LC_ALL, "RUS");
			printf("¬ведите шаг табул€ции\n");
			double shag;
			scanf("%lf", &shag);

			printf("____________________\n");
			printf("|    x   |   f(x)   |\n");
			printf("|________|__________|\n");
			for (double x = 0.2; x <= 2.2; x += shag)
			{
				printf("|  %4.2lf  | %8.2lf |\n", x, f(x));
			}
			printf("|________|__________|\n");
			printf("ѕродолжить?");
			scanf("%c", &c);
		}
	}

double f (double x)
{
	double y;
	y = 1.8 * pow(x, 2) - sin(10 * x);
	return y;
}

	