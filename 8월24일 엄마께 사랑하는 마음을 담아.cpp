#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#pragma warning (disable:4996)

int main()
{
	char name[11];
	char job[11];
	char mon[11];
	char song1[101];
	char song2[101];
	char song3[101];
	char song4[101];
	const char* m1 = "1) 안마 해드리기";
	const char* m2 = "2) 선물 사드리기";
	const char* m3 = "3) 노래 불러드리기";
	const char* m4 = "4) 내방 정리하기";
	const char* m5 = "5) 종료";
	int help = 0;
	int choose = 0;
	int money = 0;
	int ex = 0;
	int gift = 0;
	int gender = 0;
	int clean1 = 0;
	int clean2 = 0;
	int clean3 = 0;
	int clean4 = 0;
	int clean5 = 0;
	bool m1done = false;
	bool m2done = false;
	bool m3done = false;
	bool m4done = false;

	for (int i = 0; i < 1; i++)
	{
		printf("안녕하세요, 엄마. \n");

		while (getchar() != '\n');

		printf("오늘 일은 죄송해요.\n");

		while (getchar() != '\n');

		printf("물건을 때려서 엄마께서 걱정하셔서 약국 출근을 늦추신 것부터,\n");

		while (getchar() != '\n');

		printf("화장실에서 샤워기를 틀어놓고 장시간 나오지 않아 걱정드린 것까지요.\n");

		while (getchar() != '\n');

		printf("앞으로 저를 위해 너무 애 쓰시지 않으셔도 돼요.\n");

		while (getchar() != '\n');

		printf("엄마께서 제 엄마이신 게 저에겐 너무 큰 축복이고, 정말 곁에 있기만 하셔도 모든 걸 다 가진 기분이에요.\n");

		while (getchar() != '\n');

		printf("사랑하는 엄마께 드릴 저만의 게임을 만들어 봤어요.\n");

		while (getchar() != '\n');

		printf("그럼 재밌게 즐기세요!");

		while (getchar() != '\n');
	}

	printf("---------------------------------------------------------------------------------------------------------------------------------------");

	printf("이름을 입력해주세요: ");
	scanf("%s", name);

	printf("직업을 입력해주세요: ");
	scanf("%s", job);

	printf("성별을 입력해주세요 (남 1, 여 2): ");
	scanf("%d", &gender);

	printf("내 이름은 %s. %s이다. 오늘, 부모님은 효도하지 못하면 죽는다.", name, job);
	while (getchar() != '\n');

	while (ex < 20)
	{
		printf("-------------------------------------------------\n");
		printf("내 용돈: %d원, 경험치: %d------------------------\n", money, ex);
		printf("-------------------------------------------------\n");
		printf("-------------------------------------------------\n\n");
		printf("효도 목록\n");
		printf("%s\n", m1);
		printf("%s\n", m2);
		printf("%s\n", m3);
		printf("%s\n", m4);
		printf("%s\n", m5);

		if (m1done == true)
		{
			m1 = "1) 안마 해드리기 (완료)";
		}

		if (m2done == true)
		{
			m2 = "2) 선물 사드리기 (완료)";
		}

		if (m3done == true)
		{
			m3 = "3) 노래 불러드리기 (완료)";
		}

		if (m4done == true)
		{
			m4 = "4) 내방 정리하기 (완료)";
		}

		while (getchar() != '\n');

		printf("어느 효도를 할지 골라주세요(번호 입력): ");
		scanf("%d", &help);

		switch (help)
		{

		case 1:
		{
			while (1)
			{
				printf("좌우를 각각 3번씩 입력하세요.( 한 번에 좌우): ");
				scanf("%s", mon);

				if (strcmp(mon, "좌우") == 0)
				{

					printf("좌우를 각각 2번씩 입력하세요.( 한 번에 좌우): ");
					scanf("%s", mon);

					if (strcmp(mon, "좌우") == 0)
					{
						printf("좌우를 각각 1번씩 입력하세요.( 한 번에 좌우): ");
						scanf("%s", mon);

						if (strcmp(mon, "좌우") == 0)
						{
							if (gender == 1)
							{
								printf("아~ 시원해 우리아들 짱!");
							}
							else if (gender == 2)
							{
								printf("아~ 시원해 우리 딸 짱!");
							}
							else
							{
								printf("아~ 시원해 우리자식 짱!");
							}

							printf("안마하기 미션 완료! 용돈 + 3, 경험치 + 5\n");
							money += 3, ex += 5;
							m1done = true;
							break;
						}
						else
						{
							printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
							scanf("%d", &choose);

							if (choose == 1)
							{
								continue;
							}
							else if (choose == 2)
							{
								printf("게임을 종료합니다.");
								break;
							}
							else
							{
								printf("N/A");
								break;
							}
						}
					}
					else
					{
						printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
						scanf("%d", &choose);

						if (choose == 1)
						{
							continue;
						}
						else if (choose == 2)
						{
							printf("게임을 종료합니다.");
							break;
						}
						else
						{
							printf("N/A");
							break;
						}
					}
				}
				else
				{
					printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
					scanf("%d", &choose);

					if (choose == 1)
					{
						continue;
					}
					else if (choose == 2)
					{
						printf("게임을 종료합니다.");
						break;
					}
					else
					{
						printf("N/A");
						break;
					}
				}

			}
			break;
		}
		case 2:
		{
			while (1)
			{
				printf("어떤 선물을 구매하시겠습니까?\n");
				printf("사탕 가격: 1 (1 입력)\n");
				printf("고기 가격: 5 (2 입력)\n");
				printf("홍삼 가격: 8 (3 입력)\n");
				scanf("%d", &gift);

				switch (gift)
				{
				case 1:
					if (money >= 1)
					{
						printf("사탕을 선물하였다!\n");

						while (getchar() != '\n');

						if (gender == 1)
						{
							printf("우리아들 고마워 잘 먹을게!\n");
						}
						else if (gender == 2)
						{
							printf("우리딸 고마워 잘 먹을게!\n");
						}
						else
						{
							printf("우리자식 고마워 잘 먹을게!\n");
						}
						printf("선물드리기 미션 완료!  경험치 + 5\n");
						ex += 5;
						m2done = true;
						break;
					}
					else
					{
						printf("돈이 없다!\n");

						while (getchar() != '\n');

						printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
						scanf("%d", &choose);

						if (choose == 1)
						{
							continue;
						}
						else if (choose == 2)
						{
							printf("게임을 종료합니다.");
							break;
						}
						else
						{
							printf("N/A");
							break;
						}
					}

				case 2:
					if (money >= 5)
					{
						printf("고기를 선물하였다!\n");

						while (getchar() != '\n');

						if (gender == 1)
						{
							printf("우와~! 우리아들 이거 뭐야? 고기야? 너무너무 고마워!\n");
						}
						else if (gender == 2)
						{
							printf("우와~! 우리딸 이거 뭐야? 고기야? 너무너무 고마워!\n");
						}
						else
						{
							printf("우와~! 우리자식 이거 뭐야? 고기야? 너무너무 고마워!\n");
						}
						printf("선물드리기 미션 완료!  경험치 + 5\n");
						ex += 5;
						m2done = true;
						break;
					}
					else
					{
						printf("돈이 없다!\n");

						while (getchar() != '\n');

						printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
						scanf("%d", &choose);

						if (choose == 1)
						{
							continue;
						}
						else if (choose == 2)
						{
							printf("게임을 종료합니다.");
							break;
						}
						else
						{
							printf("N/A");
							break;
						}
					}

				case 3:
					if (money >= 8)
					{
						printf("홍삼을 선물하였다!\n");

						while (getchar() != '\n');

						if (gender == 1)
						{
							printf("어? 이거 정관자 홍삼 아니야? 진짜 대박! 이걸 어떻게 구했대? 사랑해 아들! 고마워 잘 먹을게!\n");
						}
						else if (gender == 2)
						{
							printf("어? 이거 정관자 홍삼 아니야? 진짜 대박! 이걸 어떻게 구했대? 사랑해 딸! 고마워 잘 먹을게!\n");
						}
						else
						{
							printf("어? 이거 정관자 홍삼 아니야? 진짜 대박! 이걸 어떻게 구했대? 사랑해 자식! 고마워 잘 먹을게!\n");
						}
						printf("선물드리기 미션 완료!  경험치 + 5\n");
						ex += 5;
						m2done = true;
						break;
					}
					else
					{
						printf("돈이 없다!\n");

						while (getchar() != '\n');

						printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
						scanf("%d", &choose);

						if (choose == 1)
						{
							continue;
						}
						else if (choose == 2)
						{
							printf("게임을 종료합니다.");
							break;
						}
						else
						{
							printf("N/A");
							break;
						}
					}
				}
				break;
			}
			break;
		}
		case 3:
		{
			printf("노래 부르기! 가사를 입력하시면 됩니다!\n");

			while (getchar() != '\n');

			printf("가사 입력: ");
			scanf("%s", song1);

			printf("가사 입력: ");
			scanf("%s", song2);

			printf("가사 입력: ");
			scanf("%s", song3);

			printf("가사 입력: ");
			scanf("%s", song4);

			printf("입력 끝!\n");

			while (getchar() != '\n');

			printf("%s%s%s%s\n", song1, song2, song3, song4);

			while (getchar() != '\n');

			if (gender == 1)
			{
				printf("우리아들 노래 잘 부른다! 고마워!\n");
			}
			else if (gender == 2)
			{
				printf("우리딸 노래 잘 부른다! 고마워!\n");
			}
			else
			{
				printf("우리자식 노래 잘 부른다! 고마워!\n");
			}
			printf("노래 부르기 미션 완료! 용돈 + 3, 경험치 +5\n");
			money += 3, ex += 5;
			m3done = true;
			break;
		}

		case 4:
		{
			printf("내방 정리하기! 나오는 숫자를 똑같이 입력하시면 됩니다.\n");

			while (getchar() != '\n');

			printf("3: ");
			scanf("%d", &clean1);

			if (clean1 == 3)
			{
				printf("1: ");
				scanf("%d", &clean2);

				if (clean2 == 1)
				{
					printf("8: ");
					scanf("%d", &clean3);

					if (clean3 == 8)
					{
						printf("39: ");
						scanf("%d", &clean4);

						if (clean4 == 39)
						{
							printf("12: ");
							scanf("%d", &clean5);

							if (clean5 == 12)
							{
								printf(" 방 정리하기 미션 완료! 용돈 + 1, 경험치 +5\n");
								money += 1, ex += 5;
								m4done = true;
							}
							else
							{
								printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
								scanf("%d", &choose);

								if (choose == 1)
								{
									continue;
								}
								else if (choose == 2)
								{
									printf("게임을 종료합니다.");
									break;
								}
								else
								{
									printf("N/A");
									break;
								}
							}
						}
						else
						{
							printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
							scanf("%d", &choose);

							if (choose == 1)
							{
								continue;
							}
							else if (choose == 2)
							{
								printf("게임을 종료합니다.");
								break;
							}
							else
							{
								printf("N/A");
								break;
							}
						}
					}
					else
					{
						printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
						scanf("%d", &choose);

						if (choose == 1)
						{
							continue;
						}
						else if (choose == 2)
						{
							printf("게임을 종료합니다.");
							break;
						}
						else
						{
							printf("N/A");
							break;
						}
					}
				}
				else
				{
					printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
					scanf("%d", &choose);

					if (choose == 1)
					{
						continue;
					}
					else if (choose == 2)
					{
						printf("게임을 종료합니다.");
						break;
					}
					else
					{
						printf("N/A");
						break;
					}
				}

			}
			else
			{
				printf("미션 실패! 다시 하시겠습니까? (1: 예) (2: 종료)");
				scanf("%d", &choose);

				if (choose == 1)
				{
					continue;
				}
				else if (choose == 2)
				{
					printf("게임을 종료합니다.");
					break;
				}
				else
				{
					printf("N/A");
					break;
				}
			}
			break;
		}
		case 5:
		{
			printf("프로그램 종료");
			break;
		}
		}
	}

	if (ex == 20)
	{
		printf("엄마, 제가 한 번씩 이럴 때 있어도 엄마를 사랑하는 마음은 바뀌지 않는 거 알지요?");

		while (getchar() != '\n')

		printf("축하합니다! 게임을 클리어하셨어요!\n\n");
		printf("-------------------------------------------------\n");
		printf("내 용돈: %d원, 경험치: %d------------------------\n", money, ex);
		printf("-------------------------------------------------\n");
		printf("-------------------------------------------------\n\n");
	}

	return 0;
}