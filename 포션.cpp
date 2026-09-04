#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#pragma warning (disable:4996)

void potion(int* plus)
{
	*plus += 50;
}

int main()
{
	int hp = 100;
	int choose = 0;

	printf("현재 HP : %d\n", hp);
	printf("포션을 사용하시겠습니까? 1)예 2)아니오 \n");
	scanf("%d", &choose);

	if (choose == 1)
	{
		potion(&hp);
		printf("%d", hp);
	}
	else
	{
		printf("포션을 사용하지 않았습니다.");
	}
}