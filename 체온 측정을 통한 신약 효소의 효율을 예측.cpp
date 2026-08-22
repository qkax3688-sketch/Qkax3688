#include <stdio.h>
#pragma warning (disable:4996)
int main() 
{
	double temperature;
	double concentration;
	double speed;
	char name[11] = { 0, };

	printf("이 프로그램은 체온 측정을 통한 신약 효소의 효율을 예측하기 위해 만든 프로그램 입니다 (엔터를 누르세요)");

	while (getchar() != '\n');

		printf("\n");
	printf("        약        \n");
	printf("      약약약      \n");
	printf("    약       약   \n");
	printf("  약           약 \n");
	printf("  약           약  \n");
	printf("   약         약   \n");
	printf("     약약약약약     \n\n");
	printf("  엔터를 누르세요");

	while (getchar() != '\n');

	for (int i = 1; i < 2; i++)
	{
		printf("stop을 입력하여 멈출 수 있습니다. (엔터를 눌러 계속)");
		while (getchar() != '\n');

	}

	printf("반응속도는 미카엘리스-멘텐 반응속도론을 이용하여 구합니다.(엔터를 눌러 계속)");
	while (getchar() != '\n');

	while(true){
		printf("체온을 입력해 주세요(섭씨): ");
		scanf("%s", name);
		if(name[0] == 's'&& name[1] == 't'&& name[2] == 'o'&& name[3] == 'p')
		{
			printf("프로그램을 종료합니다."); break;
		}
		else 
		{
			sscanf(name,"%lf", &temperature);
		}
		if (sscanf(name, "%lf", &concentration) != 1)
		{
			printf("[Error] 글자를 포함하지 않은 수로 작성 바랍니다.\n"); continue;
    }
	if (temperature <= 20 )
		{
			printf("[Error] 온도가 너무 낮습니다.\n"); continue;
		}
		else if (temperature >= 50)
		{
			printf("[Error] 온도가 너무 높습니다.\n"); continue;
		}

		printf("약물 농도를 입력해주세요(mM): ");
		scanf("%s", name);
		if (name[0] == 's'&& name[1] == 't'&& name[2] == 'o'&& name[3] == 'p')
		{
		printf("프로그램을 종료합니다."); break;
		}
		else
		{
			sscanf(name,"%lf", &concentration);
		}
		if (concentration <= 0)
		{
			printf("[Error] 농도가 음수일 수 없습니다\n"); continue;
		}
		if (sscanf(name, "%lf", &concentration) != 1)
		{
			printf("{Error} 글자를 포함하지 않은 수로 작성 바랍니다\n."); continue;
		}

		speed = (100 * concentration) / (2.0 + concentration);

			if (temperature >= 30 && temperature < 40)
			{
				if (concentration >= 5.0)
			{
					printf("체온:%.1lf℃, 농도:%.1lfmM 이므로 신약 결합되기에 적합합니다. 반응속도는 약 %.2lf%% 정도로 반응 속도로 예상됩니다 \n", temperature, concentration, speed);
				}
				else if (concentration <= 5.0)
				{
					printf("체온:%.1lf℃, 농도:%.1lfmM 이므로 신약 결합되기에 적합합니다. 반응속도는 약 %.2lf%% 정도로 반응 속도로 예상됩니다 \n", temperature, concentration, speed);
				}

			}	

					else
					{
						printf("체온:%lf℃, 농도:%lfmM 이므로 신약 결합되기에 적합하지 않습니다.\n", temperature, concentration);
					}
			}



		return 0;




}
		
