#include <stdio.h>
#include <locale.h>
#include <math.h>

//Даны координаты трех вершин треугольника(x1, y1), (x2, y2), (x3, y3).Найти его периметр и площадь.


int main() {
	setlocale(LC_ALL, "rus");

	float x1, y1, x2, y2, x3, y3, sideA, sideB, sideC, perimeter, halfperimeter, square;

	printf("Введите координаты первой вершины(x1 y1): ");
	scanf_s("%f %f",&x1,&y1);
	printf("Введите координаты второй вершины(x2 y2): ");
	scanf_s("%f %f", &x2, &y2);
	printf("Введите координаты третьей вершины(x3 y3): ");
	scanf_s("%f %f", &x3, &y3);

	sideA = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	sideB = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	sideC = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));

	perimeter = sideA + sideB + sideC;
	halfperimeter = perimeter * 0.5;

	square = sqrt(halfperimeter * (halfperimeter - sideA) * (halfperimeter - sideB) * (halfperimeter - sideC));

	printf("Периметр и площадь треугольника со сторонами %.1f, %.1f, %.1f: P = %.1f, S = %.1f\a\n",sideA, sideB, sideC, perimeter, square);
	

	system("pause");
	return 0;
}