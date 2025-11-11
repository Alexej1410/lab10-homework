<h1>Домашняя работа к лабораторной №10</h1>
<h2>Выполнил: Кравченко А.С.</h2>

<h2>Условие задачи</h2>
Составьте программу, которая для заданной пользователем фигуры, например прямоугольника (треугольника или другой фигуры см. инидивидуальное задание работы 9) предлагает меню выбора одной из операций:<br>
1) рассчитать площадь;<br>
2) вывести определение фигуры;<br>
3) нарисовать фигуру.<br>

<h2>Алгоритм</h2>

```
1. Начало.
2. Создвем функцию вычисления площади треугольника:
      Инициалюзируем переменные a, b, c, p, S;
      p = (a+b+c) / 2;
      S = sqrt((p * (p - a) * (p - b) * (p - c)));
      Возвращаем S.
3. Инициализируем переменные a, b, c, op, sim.
4. Пока 1:
      Инициализируем переменную s;
      Если s = getchar()) == '0':  break;
      puts("список операций:");
      puts("рассчитать площадь треугольника - 1");
      puts("вывести определение фигуры - 2");
      puts("нарисовать треугольник - 3");
      switch (op):
        case 1: 
          printf("площадь треугольника равна %f", area(a, b, c));
          break;
        case 2:
          printf("Треугольник — это геометрическая фигура, образованная тремя отрезками, которые           соединяют три точки, не лежащие на одной прямой.\n");
          printf("Элементы: 3 вершины, 3 стороны, 3 угла\n");
          printf("виды:\n");
          printf("По углам: остроугольный, тупоугольный, прямоугольный\n");
          printf("По сторонам: разносторонний, равнобедренный, равносторонний\n");
          break;
        case 3:
          Если a<b+c && b<a+c && c<b+a:
            i = 0;
            Пока i <= c:
              i++;
              Если i < c:
                j = 0;
                Пока j < i*2 - 1:
                  j++;
                  printf("*");
              Иначе: 
                j = 0
                Пока j < i*2 - 2:
                  j++;
                  printf("%c", sim);
              Если i > 0:
                printf("%c", sim);
              printf("\n");
4. puts("");
   printf("продолжить? (да - 1, нет - 0)\n");
5. Конец.
 ```

<h2>Код программы</h2>

```
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
			printf("Треугольник — это геометрическая фигура, образованная тремя отрезками, которые соединяют три точки, не лежащие на одной прямой.\n");
			printf("Элементы: 3 вершины, 3 стороны, 3 угла\n");
			printf("виды:\n");
			printf("По углам: остроугольный, тупоугольный, прямоугольный\n");
			printf("По сторонам: разносторонний, равнобедренный, равносторонний\n");
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
					if (i > 0) {//вывод основания
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
```

<h2>Схема функции площади треугольника</h2>
<img width="247" height="428" alt="image" src="https://github.com/user-attachments/assets/f49c77cb-8241-4ec6-92e6-b7fab8e76ef8" />
       
<h2>Схема</h2>
<img width="821" height="667" alt="image" src="https://github.com/user-attachments/assets/f1bb3c91-8842-49ee-962c-f0618019ad3c" /><br>
<img width="823" height="569" alt="image" src="https://github.com/user-attachments/assets/dd490b09-5bb0-40e2-9dfc-ea62d4914e10" />

<h2>Консоль</h2>
<img width="633" height="472" alt="image" src="https://github.com/user-attachments/assets/a8835a80-816f-4c07-b0ca-28717df24d3f" /><br>
<img width="1449" height="694" alt="image" src="https://github.com/user-attachments/assets/8db8a6b8-feb3-4be9-ad1e-64302afe581b" />



