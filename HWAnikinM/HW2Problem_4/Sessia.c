#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL, "rus");

	int fs, ss, ts;

	printf("������� ���� ������: ");
	scanf_s("%d %d %d", &fs, &ss, &ts);
	printf("���������: ");
	if (fs + ss + ts == 15)
		printf("�� ��������!");
	else if (min(fs, min(ss, ts)) == 4)
		printf("�� ��������");
	else if (min(fs, min(ss, ts)) == 3)
		printf("�� ��������");
	else if (min(fs, min(ss, ts)) == 2 || min(fs, min(ss, ts)) == -1)
		printf("�� �� �����");
	else 
		printf("�� ����� ������������ ������");
}