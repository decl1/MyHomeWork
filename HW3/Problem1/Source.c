#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <locale.h>
#define PI 3.14159265359


void main() {
	setlocale(LC_ALL, "rus");

	printf("����� ����������!");
	Sleep(500);
	system("cls");
	
	int prog = 0, temp = 0, incase = 0;
	float a,b;
	while (prog < 2) {
		printf("��������.");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
		system("cls");
		prog++;
	}
	prog = 1;
	while (prog == 1) {
		system("cls");
		a = b = 0.f;
		printf("����� ������:\n1. �������������\n2. �����������\n3. ����\n0. �����\n����: ");
		scanf_s("%d",&temp); 
		system("cls");
		switch (temp) {
		case 1:
			printf("������� ��� ������� ��������������: ");
			scanf_s(" %f %f", &a, &b);
			incase = 1;
			while (incase == 1) {
				system("cls");
				printf("����:\n1. ����� ������� ������\n2. ����� �������� ������\n3. ����� ���������\n4. ��������� � ������ ������\n0. ����� �� ���������\n����: ");
				scanf_s(" %d", &temp);
				switch (temp) {
				case 1:
					printf("������� ��������������: %.2f\n", a*b);
					system("pause");
					break;
				case 2:
					printf("�������� ��������������: %.2f\n", a + b + a + b);
					system("pause");
					break;
				case 3:
					printf("��������� ��������������: %.2f\n", sqrt(a*a+b*b));
					system("pause");
					break;
				case 4:
					incase = 0;
					break;
				case 0:
					incase = 0;
					prog = 0;
					break;
				default:
					break;
				}
			}
			break;
		case 2:
			printf("������� ��� ������ �������������� ������������: ");
			scanf_s(" %f %f", &a, &b);
			incase = 1;
			while (incase == 1) {
				system("cls");
				printf("����:\n1. ����� ������� ������\n2. ����� �������� ������\n3. ����� ���������\n4. ��������� � ������ ������\n0. ����� �� ���������\n����: ");
				scanf_s(" %d", &temp);
				switch (temp) {
				case 1:
					printf("������� �������������: %.2f\n", a * b * 0.5);
					system("pause");
					break;
				case 2:
					printf("�������� �������������: %.2f\n", a+b+sqrt(a * a + b * b));
					system("pause");
					break;
				case 3:
					printf("���������� �������������: %.2f\n", sqrt(a * a + b * b));
					system("pause");
					break;
				case 4:
					incase = 0;
					break;
				case 0:
					incase = 0;
					prog = 0;
					break;
				default:
					break;
				}
			}
			break;
		case 3:
			printf("������� ������ �����: ");
			scanf_s(" %f", &a);
			incase = 1;
			while (incase == 1) {
				system("cls");
				printf("����:\n1. ����� ������� ������\n2. ����� �������� ������\n3. ����� ���������\n4. ��������� � ������ ������\n0. ����� �� ���������\n����: ");
				scanf_s(" %d", &temp);
				switch (temp) {
				case 1:
					printf("������� �����: %.2f\n", PI * a*a);
					system("pause");
					break;
				case 2:
					printf("����� ����������: %.2f\n", 2*PI*a);
					system("pause");
					break;
				case 3:
					printf("��������� ����� %.2f\n", 2*a);
					system("pause");
					break;
				case 4:
					incase = 0;
					break;
				case 0:
					incase = 0;
					prog = 0;
					break;
				default:
					break;
				}
			}
			break;
		case 0:
			prog = 0;
			break;
		default:
			;
		}
	}
	system("cls");
	system("pause");
}