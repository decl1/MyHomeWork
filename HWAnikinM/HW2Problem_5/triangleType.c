#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL, "rus");
;
	int side1, side2, side3, mside,minside,middleside;

	printf("Введите три стороны: ");
	scanf_s("%d %d %d", &side1, &side2, &side3);
	mside = max(side1, max(side2, side3));
	minside = min(side1, min(side2, side3));
	middleside = side1 + side2 + side3 - mside - minside;
	if (mside < minside + middleside) {
		if (mside == minside)
			printf("Треугольник равносторонний\n");
		if (mside == middleside || middleside == minside)
			printf("Треугольник равнобедренный\n");
		if (mside*mside == minside*minside + middleside*middleside )
			printf("Треугольник прямоугольный\n");
		else printf("Треугольник произвольный\n");
	}
	else {
		printf("Не является треугольником\n");
	}

	system("pause");
}