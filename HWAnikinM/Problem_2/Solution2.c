#include <stdio.h>
#include <locale.h>
#include <math.h>

//�������� ��������� ������ �� ����� ��� ��������������� ������ ����� � ���������
//�������(����� ����� � ������������������, ���������, ������, �����).
//������ ����� ������ ������������(scanf()), ��������� ����� ����������� � ���������.


int main() {
	setlocale(LC_ALL, "rus");

	int number;

	printf("������� �����: ");
	scanf_s("%d", &number);

	printf("1: %d\n", number);
	printf("2: %d\n", number+1);
	printf("3: %d\n", number+2);

	system("pause");
	return 0;
}