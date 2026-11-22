#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

float area_triangle(float a, float b) {
	float area = 0;

	area = a * b / 2;

	return area;
}

int main() {
	setlocale(LC_CTYPE, "RUS");

	return 0;
}