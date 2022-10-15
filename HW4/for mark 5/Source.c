#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <locale.h>

void printmenu() {
	printf("�������� �������:\n");
	printf("1) ������ �����\n");
	printf("0) ����� �� ���������\n");
	printf("��� �����: ");
}

void randarray(int numberOfElements) {
	int* arr = (int*)malloc(sizeof(int) * numberOfElements);
	int mini = 100, maxi = -100;
	float srar = 0;
	printf("��� ������: ");
	for (int i = 0; i < numberOfElements; i++) {
		arr[i] = -100 + rand() % 200;
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

int main() {
	setlocale(LC_ALL, "rus");
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
		break;
	case 0:
		return 0;
	default:
		goto start;
	}
}

