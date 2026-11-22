#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

float area_triangle(float a, float b) {
	float area = 0;

	area = a * b / 2;

	return area;
}

int definition_triangle() {
	printf("ѕр€моугольный треугольник Ч это треугольник, у которого один из углов €вл€етс€ пр€мым, то есть равен 90∞");

	return 0;
}

int draw_triangle(int a, char symbol) {
    for (int i = 1; i <= a; i++) {
        // внутренний цикл Ч столбцы
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

int main() {
	setlocale(LC_CTYPE, "RUS");

	return 0;
}