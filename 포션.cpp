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
	int choose = 0;
	int hp = 50;

	printf("사용 전 hp: %d\n", hp);

	printf("포션을 사용하겠습니까? 1) 예 2) 아니오");
	scanf("%d", &choose);

	if (choose == 1)
	{
		potion(&hp);
		printf("\n사용 후 hp: %d", hp);
	}
	else
	{
		printf("N/A");
	}
	return 0;
}