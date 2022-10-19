#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <locale.h>

void printmenu() {
	printf("�������� �������:\n");
	printf("1) ������ �����\n");
	printf("2) ���������� �����\n");
	printf("3) ���������� ������ ��������� �������\n");
	printf("4) ���������� �������\n");
	printf("0) ����� �� ���������\n");
	printf("��� �����: ");
}

void randarray(int numberOfElements) {
	int* arr = (int*)malloc(sizeof(int) * numberOfElements);
	int mini = 100, maxi = -100;
	float srar = 0;
	printf("��� ������: ");
	for (int i = 0; i < numberOfElements; i++) {
		arr[i] = -1000 + rand() % 2001;
		printf("%d ", arr[i]);
		if (mini > arr[i]) 
			mini = arr[i];
		if (maxi < arr[i]) 
			maxi = arr[i];
		srar += arr[i];
	}
	srar /= numberOfElements;
	printf("\n- Min: %d", mini);
	printf("\n- Max: %d", maxi);
	printf("\n- ������� �������������� ���������: %.2f\n", srar);

	free(arr);
}

void strmerge() {
	char* str = (char*)malloc(sizeof(char) * 1000);
	int s = 0;
	char c;

	getchar();
	
	printf("������� ����� 1: ");

	while ((c = getchar()) != '\n') {
		str[s] = c;
		s++;
	}

	if (str[s - 1] != ' ') {
		str[s] = ' ';
		s++;
	}

	printf("������� ����� 2: ");

	while ((c = getchar()) != '\n') {
		str[s] = c;
		s++;
	}

	printf("���������: ");

	for (int i = 0; i < s; i++) {
		printf("%c", str[i]);
	}

	printf("\n");

	free(str);
}

void sortevenelmas(int numberOfElements) {
	int* arr = (int*)malloc(sizeof(int) * numberOfElements);

	int temp, kolvo = 0;

	printf("������� �������� �������: ");

	for (int i = 0; i < numberOfElements; i++) {
		scanf_s(" %d", &arr[i]);
	}

	for (int i = 0; i < numberOfElements; i++) {
		for (int j = i; j < numberOfElements; j++) {
			if (((arr[i] % 2 == 0) && (arr[j] % 2 == 0)) && arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("���������:\n");
	for (int i = 0; i < numberOfElements; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < numberOfElements; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
		else {
			temp = arr[i];
			kolvo = 1;
			while (temp >= 10) {
				kolvo++;
				temp /= 10;
			}
			for (int i = 0; i < kolvo; i++) {
				printf(" ");
			}
			printf(" ");
		}
	}
	printf("\n");

	free(arr);
}

void draw_table() {
	int I = 0, J= 0;
	char c;
	
	printf("������� ����� �������� �������: ");
	scanf_s("%d", &I);
	char** table = (char**)malloc(I * sizeof(char*));
	for (int i = 0; i < I; i++) {
			table[i] = (char*)malloc(100 * sizeof(char));
	}

	for (int i = 0; i < I; i++) {
		for (int j = 0; j < 100; j++) {
			table[i][j] = '\0';
		}
	}

	printf("������� ��������� �������:\n");

	getchar();

	for (int i = 0; i < I; i++) {
		int j = 0;
		while ((c = getchar()) != '\n' && j < 100) {
			table[i][j] = c;
			j++;
		}
	}

	for (int i = 0; i < I; i++) {
		printf("\n");
		for (int j = 0; j <10; j++) {
			printf("%c", table[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < I; i++) {
		free(table[i]);
	}
	free(table);
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	int menu = -1;
	int n;
start:
	system("cls");
	printmenu();
	scanf_s("%d", &menu);
	switch (menu){
	case 1:
		system("cls");
		printf("������� ���-�� ���������: ");
		scanf_s("%d", &n);
		randarray(n);
		system("pause");
		goto start;
	case 2:
		system("cls");
		strmerge();
		system("pause");
		goto start;
	case 3:
		system("cls");
		printf("������� ���-�� ���������: ");
		scanf_s("%d", &n);
		sortevenelmas(n);
		system("pause");
		goto start;
	case 4:
		system("cls");
		draw_table();
		system("pause");
		goto start;
	case 0:
		return 0;
	default:
		goto start;
	}
}

