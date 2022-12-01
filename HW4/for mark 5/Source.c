#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <locale.h>

void printmenu() {
	printf("Выберите функцию:\n");
	printf("1) Массив чисел\n");
	printf("2) Соеденение строк\n");
	printf("3) Сортировка четных элементов массива\n");
	printf("4) Нарисовать таблицу\n");
	printf("0) Выйти из программы\n");
	printf("Ваш выбор: ");
}

void randarray(int numberOfElements) {
	int* arr = (int*)malloc(sizeof(int) * numberOfElements);
	int mini = 100, maxi = -100;
	float srar = 0;
	printf("Ваш массив: ");
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
	printf("\n- Среднее арифметическое элементов: %.2f\n", srar);
	free(arr);
}

void strmerge() {
	char* str = (char*)malloc(sizeof(char) * 1000);
	int s = 0;
	char c;
	getchar();
	printf("Введите текст 1: ");
	while ((c = getchar()) != '\n') {
		str[s] = c;
		s++;
	}
	if (str[s - 1] != ' ') {
		str[s] = ' ';
		s++;
	}
	printf("Введите текст 2: ");
	while ((c = getchar()) != '\n') {
		str[s] = c;
		s++;
	}
	printf("Результат: ");
	for (int i = 0; i < s; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
	free(str);
}

void sortevenelmas(int numberOfElements) {
	int* arr = (int*)malloc(sizeof(int) * numberOfElements);

	int temp, kolvo = 0;

	printf("Введите элементы массива: ");

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

	printf("Результат:\n");
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

int strlen(char* str) {
	int size = 0;
	int i = 0;
	while (str[i] != '\0') {
		size++;
		i++;
	}
	return size;
}

int intlen(int number) {
	int kolvo = 1;
	while (number >= 10) {
		kolvo++;
		number /= 10;
	}
	return kolvo;
}

void draw_table() {
	int I = 0, J = 0, maxlen;
	char c;
	printf("Введите число столбцов таблицы: ");
	scanf_s("%d", &I);
	char** title = (char**)malloc(I * sizeof(char*));
	for (int i = 0; i < I; i++) {
			title[i] = (char*)malloc(100 * sizeof(char));
	}
	for (int i = 0; i < I; i++) {
		for (int j = 0; j < 100; j++) {
			title[i][j] = '\0';
		}
	}
	printf("Введите заголовки таблицы:\n");
	getchar();
	for (int i = 0; i < I; i++) {
		int j = 0;
		while ((c = getchar()) != '\n' && j < 100) {
			title[i][j] = c;
			j++;
		}
	}
	printf("\n");
	printf("Введите количество строк таблицы: ");
	scanf_s("%d", &J);
	int** line = (int**)malloc(I * sizeof(int*));
	for (int i = 0; i < I; i++) {
		line[i] = (int*)malloc(J * sizeof(int));
	}
	for (int i = 0; i < I; i++) {
		printf("Введите данные для заполнения столбца %s: ", title[i]);
		for (int j = 0; j < J; j++) {
			scanf_s(" %d", &line[i][j]);
		}
	}
	printf("\n");
	int* columnlen = (int*)malloc(I * sizeof(int));
	for (int i = 0; i < I; i++) {
		maxlen = 0;
		if (maxlen < strlen(title[i])) {
			maxlen = strlen(title[i]);
		}
		for (int k = 0; k < I; k++) {
			if (maxlen < intlen(line[i][k])) {
				maxlen = intlen(line[i][k]);
			}
		}
		columnlen[i] = maxlen;
	}
	printf("Ваша таблица:\n");
	for (int i = 0; i < I; i++) {
		printf("|");
		printf("%s", title[i]);
		for (int k = 0; k < (columnlen[i] - strlen(title[i])); k++) {
			printf(" ");
		}
	}
	printf("|");
	for (int j = 0; j < J; j++) {
		printf("\n");
		printf("|");
		for (int i = 0; i < I; i++) {
			printf("%d", line[i][j]);
			for (int k = 0; k < (columnlen[i] - intlen(line[i][j])); k++) {
				printf(" ");
			}
			printf("|");
		}
	}
	printf("\n");
	// ачищееение
	for (int i = 0; i < I; i++) {
		free(title[i]);
	}
	free(title);
	for (int i = 0; i < I; i++) {
		free(line[i]);
	}
	free(line);
	free(columnlen);
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
		printf("Введите кол-во элементов: ");
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
		printf("Введите кол-во элементов: ");
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

