#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_random(void)
{
	//srand(time(NULL)); // ���� �ʱ�ȭ
	//int num = rand() % 3; // ��ǻ�ʹ� 0���� ���� �� / 0 ~ 3

	printf("���� �ʱ�ȭ ����...\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 10);

	srand(time(NULL)); // ���� �ʱ�ȭ
	printf("\n\n���� �ʱ�ȭ ����...\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 10);


	
	return 0;
}
