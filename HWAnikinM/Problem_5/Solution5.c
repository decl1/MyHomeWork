#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>



int main() {
	setlocale(LC_ALL, "rus");

	int a, b;

	printf("Введите два положительных целых числа: ");
	scanf_s("%d %d", &a, &b);

	//if (a < 0 || b < 0) {
	//	system("cls");
	//	printf("\aПожалуйста, в следующий раз введите положительное целое число, вы сломали программу :(\n");
	//	return 0;
	//}

	printf("Результат:\n");

	printf("%d", a + b);
	printf(" %d", a - b);
	printf(" %d", a * b);
	printf(" %.2f", (float)a / b);
	printf(" %.2f", (a*a + b*b) * 0.5);
	printf(" %.2f\n", (abs(a) + abs(b)) * 0.5);
	
	system("pause");
	return 0;
}