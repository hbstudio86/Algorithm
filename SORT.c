#pragma warning(disable:4996)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//240301 3�г� 1�б� �˰��� �ǽ��� �ڵ�

//Program Ver. 
static char* _VER = "1.0.0";

//SYS. Function
int menu(void);

//Sort Function Heat

int main(void) {

	time_t t = time(NULL);

	int _sel_num;

	//�޴��� ���� �� ���� �˰��� ���� ������� ���� �ֵ��� �Ѵ�.
	// �켱 n^2�� ȿ���� ����, ����, ��, ���� ����
	// �Է� �迭�� ũ�⸦ ���ϰ� org�� sort �� ����� ���� �����ϰ� ��
	// �������� ��� ���� �˰����� �� ���� �����ϵ��� ��
	// ���� ���� �ð�, �� Ƚ���� ��� �ϵ��� �� <------------------- ��ȯ Ƚ���� ������ �Ǿ�����?


	//�޴� ��ġ
		//�޴��� ���� ���� ���� ������ �ٸ��� ó�� �ϵ��� �Ѵ�?
	do {
		printf("SORT Algorithm Practice Program (Ver.: %s )\n",_VER);
		printf("===== Select SORT Algorithm =====\n");
		printf("1. Select SORT\n2. Bubble SORT\n3. Shell SORT\n4. Insert SORT\n99. All Processing\n0. EXIT PROGRAM\n");
	} while (_sel_num != 0);	//���α׷� ����Ǳ� ������ Loop�� ������ ���� �Ѵ�.


	struct tm *tm1 = localtime(&t);

	printf("%ld %ld %ld %ld %ld %ld", 1900+tm1->tm_year,tm1->tm_mon,tm1->tm_mday,tm1->tm_hour,tm1->tm_min,tm1->tm_sec);

	return 0;
}

// Sort Function Codes

int menu(void) {

}

