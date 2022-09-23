#include <stdio.h>

#include <locale.h> // не подключена библиотека locale

int main() {
	setlocale(LC_ALL, "rus"); //

	int age;
	scanf_s("%d", &age); // safe, &
	if (age <= 13)
		printf("%d - детство", age); // ;
	else if (14 <= age && age < 25) // &&
		printf("%d - молодость", age); // неверный тип данных
	else if (25 <= age && age < 60) // ;
		printf("%d - зрелость", age); // \t, неверный тип данных
	else
		printf("%d - старость", age);
	return 0;
}
