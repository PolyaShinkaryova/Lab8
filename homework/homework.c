#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int procent, sum;
	int mouths, mouth;

	puts("������� ���������� �������");
	scanf("%d", &mouths);
	puts("������� �����");
	scanf("%d", &sum);
	puts("������� ����� �������� ������");
	scanf("%d", &mouth);
    int s = 0;

	int k = mouths - mouths;
	int platezh = sum / mouths;

	for (int i = 0; i <= k; i++)
	{
		s += platezh;
	}
	printf("��� ������� - %d", s);
}