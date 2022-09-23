#include <stdio.h>
#include <locale.h>
#include <math.h>

//Напишите программу вывода на экран трёх последовательно идущих чисел в указанном
//формате(номер числа в последовательности, двоеточие, пробел, число).
//Первое число вводит пользователь(scanf()), остальные числа вычисляются в программе.


int main() {
	setlocale(LC_ALL, "rus");

	int number;

	printf("Введите число: ");
	scanf_s("%d", &number);

	printf("1: %d\n", number);
	printf("2: %d\n", number+1);
	printf("3: %d\n", number+2);

	system("pause");
	return 0;
}