#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int num = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (i % 2 == 0)
			{
				num=(7 * i) + j + 1;
				printf("%-3d", num);
			}
			else
			{
				num = (7 * i) + 7 - j;
				printf("%-3d", num);
			}
		}
		printf("\n");
	}
}


