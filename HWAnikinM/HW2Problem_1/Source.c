#include <stdio.h>

#include <locale.h> // �� ���������� ���������� locale

int main() {
	setlocale(LC_ALL, "rus"); //

	int age;
	scanf_s("%d", &age); // safe, &
	if (age <= 13)
		printf("%d - �������", age); // ;
	else if (14 <= age && age < 25) // &&
		printf("%d - ���������", age); // �������� ��� ������
	else if (25 <= age && age < 60) // ;
		printf("%d - ��������", age); // \t, �������� ��� ������
	else
		printf("%d - ��������", age);
	return 0;
}
