<h1>Домашнее задание по теме 10. Конструирование функций</>

<h2>Задача - Составьте программу, которая для заданной пользователем фигуры, например прямоугольника (треугольника или другой фигуры см. инидивидуальное задание работы 9) предлагает меню выбора одной из операций: рассчитать площадь, вывести определение фигуры, нарисовать фигуру.</h2>

<h2>Блок-схемы:</h2>
<h3>area_triangle(float a, float b)</h3>
<img width="896" height="1200" alt="image" src="https://github.com/user-attachments/assets/92257f54-6306-4a38-bca8-0d793d55d576" />
<h3>definition_triangle()</h3>
<img width="896" height="1200" alt="image" src="https://github.com/user-attachments/assets/141b047e-d034-43cc-91d8-7aba235004ba" />
<h3>draw_triangle(int a, char symbol)</h3>
<img width="896" height="1200" alt="image" src="https://github.com/user-attachments/assets/c2d37137-fcbc-48e1-8380-9ec5cb019eb0" />
<h3>compare_triangle(int a, int b, int a1, int b1)</h3>
<img width="896" height="1200" alt="image" src="https://github.com/user-attachments/assets/a08f55c7-3d7f-4558-93bf-aba277743445" />

<h2>Код:</h2>

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

float area_triangle(float a, float b) {
	float area = 0;

	area = a * b / 2;

	return area;
}

int definition_triangle() {
	printf("\nПрямоугольный треугольник — это треугольник, у которого один из углов является прямым, то есть равен 90°\n");

	return 0;
}

int draw_triangle(int a, char symbol) {
    for (int i = 1; i <= a; i++) {
        // внутренний цикл — столбцы
        for (int j = 1; j <= a; j++) {
            // 1 - гипотинуза (из равенства)
            // 2 - первый катет (по нижней части)
            // 3 - второй катет (правое ребро)
            if (j == a - i + 1 || i == a || j == a) {
                printf("%c", symbol);
            }
            else {
                printf(" "); // внутри пусто
            }
        }
        printf("\n"); // переход
    }

    return 0;
}

float compare_triangle(int a, int b, int a1, int b1) {
    float difference = 0;

    difference = area_triangle(a, b) - area_triangle(a1, b1);

    return difference;
}

int main() {
	setlocale(LC_CTYPE, "RUS");

    int a, b, a1, b1, option;
    char symbol;

    do {
        printf("\n1 - Рассчитать площадь\n");
        printf("2 - Определение фигуры\n");
        printf("3 - Нарисовать фигуру\n");
        printf("4 - Сравнить площади фигуру\n");
        printf("0 - Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nВведите размеры для первого катета -> ");
            scanf("%d", &a);
            printf("Введите размеры для второго катета -> ");
            scanf("%d", &b);
            printf("Площадь треугольника -> %f", area_triangle(a, b));
            break;
        case 2:
            definition_triangle();
            break;
        case 3:
            printf("\nВведите символ -> ");
            scanf(" %c", &symbol);
            printf("Введите размеры для первого катета -> ");
            scanf("%d", &a);

            draw_triangle(a, symbol);
            break;
        case 4:
            printf("\nВведите размеры для первого катета первого треугольника -> ");
            scanf("%d", &a);
            printf("Введите размеры для второго катета первого треугольника -> ");
            scanf("%d", &b);
            printf("Введите размеры для первого катета второго треугольника -> ");
            scanf("%d", &a1);
            printf("Введите размеры для второго катета второго треугольника -> ");
            scanf("%d", &b1);
            printf("Разница -> %f\n", compare_triangle(a, b, a1, b1));
            break;
        default:
            break;
        }
    } while (option != 0);

	return 0;
}
```
