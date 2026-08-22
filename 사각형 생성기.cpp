#include <stdio.h>
#pragma warning (disable:4996)
int main() {


	int down = 0;
	int up = 0;

	printf("생성하고 싶은 사각형의 가로 길이를 자연수로 입력하세요: ");
	scanf("%d", &down);

	printf("생성하고 싶은 사각형의 세로 길이를 자연수로 입력하세요: ");
	scanf("%d", &up);

	for (int i = 0; i < (up); i++)
	{
		for (int j = 0; j < (down + 1); j++)
		{
			if (j >= down)
			{
				putchar('\n');

			}
			else
			{
				printf("*");
			}

		}
	}

}



