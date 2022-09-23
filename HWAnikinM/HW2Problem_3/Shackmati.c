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
		printf("�������� ������ (1 - ������, 2 - �����, 3 - �����, 4 - ����, 5 - ����): ");
		scanf_s("%d", &figure);
	}

	printf("������� ������� ������:\n\t - �����: ");
	scanf_s(" %c", &x1s);
	scanf_s("%d", &y1);
	printf("\t - �����: ");
	scanf_s(" %c", &x2s);
	scanf_s("%d", &y2);

	for (int i = 0;i < 8; i++) {
		if (x1s == polex[i])
			x1 = i + 1;
		if (x2s == polex[i])
			x2 = i + 1;
	}
	if (x1 == 0 || x2 == 0 || y1 < 1 || y2 < 1 || y1 > 8 || y2 >8) {
		printf("������� �������� ����������!\n");
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

	printf("���������: ");

	if ((ans / (int)pow(10, figure - 1) % 10) == 1) {
		printf("���������� ���\n");
	}
	else {
		printf("�������� ���\n");
		if ((ans / 1 % 10) == 1)
			printf("��� ����� ������ ������\n");
		if ((ans / 10 % 10) == 1)
			printf("��� ����� ������ �����\n");
		if ((ans / 100 % 10) == 1)
			printf("��� ����� ������ �����\n");
		if ((ans / 1000 % 10) == 1)
			printf("��� ����� ������ ����\n");
		if ((ans / 10000 % 10) == 1)
			printf("��� ����� ������ ����\n");
	}
	return 0;
}


