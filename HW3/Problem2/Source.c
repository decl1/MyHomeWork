#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "rus");

	int summ = 0;
	int innumb = -1;
	
	printf("Введите последовательность чисел: ");
	while (innumb != 0) {
		scanf_s("%d", &innumb);
		if (innumb > 0) {
			summ += innumb;
		}
	}
	printf("Сумма положительной последовательности равна: %d\n", summ);
	system("pause");
}