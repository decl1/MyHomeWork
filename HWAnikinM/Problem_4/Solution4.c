#include <stdio.h>
#include <locale.h>
#include <math.h>



int main() {
	setlocale(LC_ALL, "rus");

	int side, volume, Spov, Sbok;

	printf("Ввод: ");
	scanf_s("%d", &side);

	volume = pow(side, 3);
	Spov = 6 * side * side;
	Sbok = 4 * side * side;
	printf("Результат:\n");
	printf("Объем = %d\n", volume);
	printf("Площадь полной поверхности = %d\n", Spov);
	printf("Площадь боковой поверхности = %d\n", Sbok);

	system("pause");
	return 0;
}