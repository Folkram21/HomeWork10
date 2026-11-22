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