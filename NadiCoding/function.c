#include <stdio.h>

// 선언
void p(int num);

void function_without_return();

int main(void)
{
	/*// function
	// 계산기
	int num = 2;
	//printf("num 은 %d 입니다.\n", num); // 2
	p(num);

	//2 + 3 = ?
	num = num + 3; // num += 3
	//printf("num 은 %d 입니다.\n", num); //5
	p(num);

	// 5 - 1 = ?
	num -= 1; // num = num - 1;
	//printf("num 은 %d 입니다.\n", num); // 4
	p(num);

	// 4 x 3 = ?
	num *= 3;
	//printf("num 은 %d 입니다.\n", num); // 12
	p(num);

	// 12 / 6 = ?
	num /= 6;
	//printf("num 은 %d 입니다.\n", num); // 2
	p(num);*/



	// 함수 종류
	// 반환값이 없는 함수
	function_without_return();


	return 0;
}

// 정의
/*void p(int num)
{
	printf("num 은 %d 입니다.\n", num);
}*/

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

