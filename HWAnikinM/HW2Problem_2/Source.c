//���� x
//���� y
//���� z

//���� ��� ���������� �� ����� ����� ����� :
	//���� x ������� �� ��� ���������� :
		//��������� z �� x
	//����� ���� y ������� �� ��� ���������� :
		//��������� z �� y
	//����� :
		//z �������� � �������
	//���������� z
//����� :
	//���� ����� ��� :
		//�������� "��� ���������� �����"
	//����� :
		//������� ����� ���������� ����� ����� ����� "_ = _"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main() {

	int x, y, z;

	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	if (x != y && y != z && x != z) {
		if (x > y && x > z) {
			z += x;
		}
		else if (y > x && y > z) {
			z += y;
		}
		else {
			z *= z;
		}
		printf("%d", z);
	}
	else {
		if (x == y && y == z && x == z) {
			printf("All vars equal\n");
		}
		else {
			if (x == y) {
				printf("x = y\n");
			}
			if (y == z) {
				printf("y = z\n");
			}
			if (x == z) {
				printf("x = z\n");
			}
		}
	}
}