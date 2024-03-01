#pragma warning(disable:4996)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//240301 3학년 1학기 알고리즘 실습용 코드

//Program Ver. 
static char* _VER = "1.0.0";

//SYS. Function
int menu(void);

//Sort Function Heat

int main(void) {

	time_t t = time(NULL);

	int _sel_num;

	//메뉴를 통해 각 정렬 알고리즘에 대해 결과값을 보여 주도록 한다.
	// 우선 n^2의 효율인 선택, 버블, 셸, 삽입 정렬
	// 입력 배열의 크기를 정하고 org과 sort 를 나누어서 따로 저장하게 함
	// 마지막은 모든 정렬 알고리즘을 한 번에 동작하도록 함
	// 실제 실행 시간, 비교 횟수를 출력 하도록 함 <------------------- 교환 횟수는 포함이 되었던가?


	//메뉴 위치
		//메뉴의 정렬 별로 글자 색상을 다르게 처리 하도록 한다?
	do {
		printf("SORT Algorithm Practice Program (Ver.: %s )\n",_VER);
		printf("===== Select SORT Algorithm =====\n");
		printf("1. Select SORT\n2. Bubble SORT\n3. Shell SORT\n4. Insert SORT\n99. All Processing\n0. EXIT PROGRAM\n");
	} while (_sel_num != 0);	//프로그램 종료되기 전까지 Loop를 돌리며 시작 한다.


	struct tm *tm1 = localtime(&t);

	printf("%ld %ld %ld %ld %ld %ld", 1900+tm1->tm_year,tm1->tm_mon,tm1->tm_mday,tm1->tm_hour,tm1->tm_min,tm1->tm_sec);

	return 0;
}

// Sort Function Codes

int menu(void) {

}

