#define _CRT_SECURE_NO_DEPRECATE 
#include <locale.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float area(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	float S = sqrt((p * (p - a) * (p - b) * (p - c)));
	return S;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("введите символ и длины сторон треугольника");
	float a, b, c;
	int op;
	char sim;
	puts("введите символ:");
	scanf("%c", &sim);
	puts("введите а:");
	scanf("%f", &a);
	puts("введите b:");
	scanf("%f", &b);
	puts("введите с:");
	scanf("%f", &c);
	puts("начать выполнение программы (да - 1, нет - 0)");
	while (1) {
		char s;
		scanf("%c", &s);
		if ((s = getchar()) == '0') break;
		puts("список операций:");
		puts("рассчитать площадь треугольника - 1");
		puts("вывести определение фигуры - 2");
		puts("нарисовать треугольник - 3");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			printf("площадь треугольника равна %f", area(a, b, c));
			break;
		case 2:
			printf("“реугольник Ч это геометрическа€ фигура, образованна€ трем€ отрезками, которые соедин€ют три точки, не лежащие на одной пр€мой.\n");
			printf("Ёлементы: 3 вершины, 3 стороны, 3 угла\n");
			printf("виды:\n");
			printf("ѕо углам: остроугольный, тупоугольный, пр€моугольный\n");
			printf("ѕо сторонам: разносторонний, равнобедренный, равносторонний\n");
			break;
		case 3:
			if (a < b + c && b < c + a && c < a + b) {
				for (int i = 0; i <= c; i++) { //вывод правой стороны
					printf("%c", sim);
					if (i < c) {//вывод левой стороны
						for (int j = 0; j < i * 2 - 1; j++) {
							printf("*");
						}
					}
					else {
						for (int j = 0; j < a - 2; j++) {
							printf("%c", sim);
						}
					}
					if (i > 0) {//вывод основани€
						printf("%c", sim);
					}
					printf("\n");
				}
			}
		}
		puts("");
		printf("продолжить? (да - 1, нет - 0)\n");
	}
}