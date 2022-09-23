#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL, "rus");

	int fs, ss, ts;

	printf("Введите ваши оценки: ");
	scanf_s("%d %d %d", &fs, &ss, &ts);
	printf("Результат: ");
	if (fs + ss + ts == 15)
		printf("Вы отличник!");
	else if (min(fs, min(ss, ts)) == 4)
		printf("Вы хорошист");
	else if (min(fs, min(ss, ts)) == 3)
		printf("Вы троечник");
	else if (min(fs, min(ss, ts)) == 2 || min(fs, min(ss, ts)) == -1)
		printf("Вы не сдали");
	else 
		printf("Вы ввели неправильные данные");
}