#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	char polex[8] = "abcdrfgh";;
	char x1s, x2s;
	int x1 = 0, x2 = 0, y1, y2, ans = 0, figure = 0;

	while (figure < 1 || figure > 5) { 
		system("cls");
		printf("Выберете фигуру (1 - король, 2 - ферзь, 3 - ладья, 4 - слон, 5 - конь): ");
		scanf_s("%d", &figure);
	}

	printf("Введите позиции фигуры:\n\t - Старт: ");
	scanf_s(" %c", &x1s);
	scanf_s("%d", &y1);
	printf("\t - Финиш: ");
	scanf_s(" %c", &x2s);
	scanf_s("%d", &y2);

	for (int i = 0;i < 8; i++) {
		if (x1s == polex[i])
			x1 = i + 1;
		if (x2s == polex[i])
			x2 = i + 1;
	}
	if (x1 == 0 || x2 == 0 || y1 < 1 || y2 < 1 || y1 > 8 || y2 >8) {
		printf("Введены неверные координаты!\n");
		return 0;
	}

	if (abs(x2 - x1) < 2 && abs(y2 - y1) < 2)
		ans += 1;
	if ((x1 == x2 || y1 == y2) || abs(x2 - x1) == abs(y2 - y1))
		ans += 10;
	if (x1 == x2 || y1 == y2)
		ans += 100;
	if (abs(x2 - x1) == abs(y2 - y1))
		ans += 1000;
	if (abs(x2 - x1) == 2 && abs(y2 - y1) == 1 || abs(x2 - x1) == 1 && abs(y2 - y1) == 2)
		ans += 10000;

	printf("Результат: ");

	if ((ans / (int)pow(10, figure - 1) % 10) == 1) {
		printf("корректный ход\n");
	}
	else {
		printf("неверный ход\n");
		if ((ans / 1 % 10) == 1)
			printf("так может ходить король\n");
		if ((ans / 10 % 10) == 1)
			printf("так может ходить ферзь\n");
		if ((ans / 100 % 10) == 1)
			printf("так может ходить ладья\n");
		if ((ans / 1000 % 10) == 1)
			printf("так может ходить слон\n");
		if ((ans / 10000 % 10) == 1)
			printf("так может ходить конь\n");
	}
	return 0;
}


