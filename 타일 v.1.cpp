#include <stdio.h>
#pragma warning (disable:4996)

#define MAP_WIDTH       10
#define MAP_HEIGHT      10

#define UP              1
#define DOWN            2
#define LEFT            3
#define RIGHT           4

#define ROAD            0
#define WALL            1
#define GEM             2

int main() {
    
        char map[MAP_WIDTH][MAP_HEIGHT] =
        {
            { 0,1,1,1,1,1,1,1,1,1 },
            { 0,0,0,0,0,0,0,0,0,1 },
            { 1,1,1,1,1,1,1,0,0,1 },
            { 1,0,0,0,0,0,1,1,0,1 },
            { 1,0,0,0,2,0,1,1,0,1 },
            { 1,1,1,1,1,0,1,1,0,1 },
            { 1,0,0,0,0,0,0,0,0,1 },
            { 1,0,0,0,0,0,0,0,0,1 },
            { 1,0,0,0,0,0,0,0,0,1 },
            { 1,1,1,1,1,1,1,1,1,1 },
        };

        int playerx = 0;
        int playery = 0;
        int direction = 0;
        int clear = 0;
        int coin = 0;
        int choose = 0;
        int skin1 = 0;
        int skin1choose = 0;
        int skin2 = 0;
        int skin2choose = 0;
        int achivement1 = 0;
        int achivement2 = 0;

        while (clear == 0)
        {   

            printf("\n현재 코인: %d\n\n", coin);

                if (coin == 2 && skin1 == 0)
                {
                    for (int i = 0; i < 1; i++)
                    {
                        printf("\"€\"구매하시겠습니까? 1:네 2:아니오: ");
                        scanf("%d", &skin1choose);

                        if (skin1choose == 1)
                        {
                            skin1 = 1;
                            printf("스킨1 구매완료\n");
                            coin -= 2;
                            printf("\a도전과제 \"유로\" 완료\n");
                            achivement1 = 1;
                        }
                        else
                        {
                            printf("스킨 1 구매취소\n");
                        }
                    }
                }
           
            if (coin == 4 && skin2 == 0)
            {
                for (int i = 0; i < 1; i++)
                {
                    printf("\"$\"구매하시겠습니까? 1:네 2:아니오: ");
                    scanf("%d", &skin2choose);

                    if (skin2choose == 1)
                    {
                        skin2 = 1;
                        printf("스킨2 구매완료\n");
                        coin -= 4;
                        printf("\a도전과제 \"달러\" 완료\n");
                        achivement2 = 1;
                    }
                    else
                    {
                        printf("스킨 2 구매취소\n");
                    }
                }
            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (map[i][j] == ROAD)
                    {
                    if (playerx == j && playery == i && skin1 == 1 && skin2 == 0)
                    {
                        printf("€");
                    }
                    else if (playerx == j && playery == i && skin2 == 1)
                    {
                        printf("$");
                    }
                    else if (playerx == j && playery == i)
                        {
                            printf("§");
                        }
                       
                        else
                        {
                            printf("■");
                        }
                    }
                    else if (map[i][j] == WALL)
                    {
                        printf("▢");
                    }
                    else if (map[i][j] == GEM)

                    {
                        if (playerx == j && playery == i && skin1 == 1)
                        {
                            printf("€");
                        }
                        else if (playerx == j && playery == i && skin2 == 1)
                        {
                            printf("$");

                        if (playerx == j && playery == i)
                        {
                            printf("§");
                        }
                      ;
                        }
                        else
                        {
                            printf("▼");
                        }
                    }
                }
                printf("\n");
            }

            printf("1.위 2.아래, 3,왼쪽 4.오른쪽 그 외: 종료");
            scanf("%d", &direction);

            switch (direction)
            {
            case UP:

                playery--;
                if (playery < 0)
                {
                    playery = 0;
                    printf("\a\n맵 밖으로 나갈 수 없습니다.\n\n");
                }
                if (map[playery][playerx] == WALL)
                {
                    playery++;
                    printf("\a\n벽을 투과할 수 없습니다.\n\n");
                }
           

                break;

            case DOWN:

                playery++;
                if (playery > 9)
                {
                    playery = 9;
                    printf("\a\n맵 밖으로 나갈 수 없습니다.\n\n");
                }
                if (map[playery][playerx] == WALL)
                {
                    playery--;
                    printf("\a\n벽을 투과할 수 없습니다.\n\n");
                }
              

                break;


                break;

            case LEFT:

                playerx--;
                if (playerx < 0)
                {
                    playerx = 0;
                    printf("\a\n맵 밖으로 나갈 수 없습니다.\n\n");
                }
                if (map[playery][playerx] == WALL)
                {
                    playerx++;
                    printf("\a\n벽을 투과할 수 없습니다.\n\n");
                }
             

                break;

            case RIGHT:

                playerx++;
                if (playerx > 9)
                {
                    playerx = 9;
                    printf("\a\n맵 밖으로 나갈 수 없습니다.\n\n");
                }
                if (map[playery][playerx] == WALL)
                {
                    playerx--;
                    printf("\a\n벽을 투과할 수 없습니다.\n\n");
                }
               

                break;


                break;

            default:
                printf("\n프로그램을 종료합니다.\n");
                clear = 1;
            }
            if (map[playery][playerx] == GEM)
            {
                playery = 0; playerx = 0;

                printf("Game Clear!\n");

                coin += 1;

                printf("1.재시작 2.종료");
                scanf("%d", &choose);

                if (choose == 1)
                {
                    continue;
                }
                else if (choose == 2)
                {
                    printf("프로그램을 종료합니다");
                    clear = 1;
                }
            }
        }
        if (achivement1 == 1)
        {
            printf("\"유로\"도전과제 달성 2/1\n");
        }
        if (achivement2 == 1)
        {
            printf("\"달러\"도전과제 달성 2/1\n");
        }
        if (achivement1 == 1 && achivement2 == 1)
        {
            printf("\"유로\"도전과제 달성\n");
            printf("\"달러\"도전과제 달성 2/2\n");
        }
    

    



    return 0;
}