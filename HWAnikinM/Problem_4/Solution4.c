#include <stdio.h>
#include <locale.h>
#include <math.h>



int main() {
	setlocale(LC_ALL, "rus");

	int side, volume, Spov, Sbok;

	printf("����: ");
	scanf_s("%d", &side);

	volume = pow(side, 3);
	Spov = 6 * side * side;
	Sbok = 4 * side * side;
	printf("���������:\n");
	printf("����� = %d\n", volume);
	printf("������� ������ ����������� = %d\n", Spov);
	printf("������� ������� ����������� = %d\n", Sbok);

	system("pause");
	return 0;
}