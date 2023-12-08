#include "framework.h"



void MakeCase()
{

	system("cls");
	Case* newCase = new Case();

	GiveChoice(newCase);
	system("cls");
	PullOutNumber(newCase);


	system("cls");

}

void GiveChoice(Case* param)
{
	//공 번호를 지정할 주도권을 사용자에게 넘김
	while (1)
	{
		system("cls");
		printf("공의 개수와 번호를 직접 지정하시겠습니까[y/n]\n");
		char keyInput = _getch();

		if (keyInput == 'y' || keyInput == 'Y')
		{
			ChooseNumberDirectly(param);
			break;
		}
		else if (keyInput == 'n' || keyInput == 'N')
		{
			printf("직접 지정하시지 않아, 저절로 공의 개수를 10개로 설정합니다.\n");
			param->SetRange();
			break;
		}
		else
		{
			PrintWrongInput();
		}
	}

	return;
}

void ChooseNumberDirectly(Case* param)
{
	system("cls");

	printf("던질 공의 개수혹은 범위를 선택해주세요 :");
	{/*
		char szstring[100];
		scanf_s("%s", szstring);
		printf("%d", szstring);*/

		int a = 0;
		scanf_s("%d", &a);
		param->SetRange(a);

		printf("던질 공의 개수는 %d개입니다.\n", a);
		_getch();
	}
}

void PullOutNumber(Case* param)
{

	//int* array = new int[loopNum];
	Case* Param = param;
	
	while (1)
	{
		printf("공 번호의 중복을 허용하시겠습니까?[y/n]\n");
		char keyInput = _getch();

		if (keyInput == 'N' || keyInput == 'n')
		{
			//전달받은 Case 객체의 number에 차례대로 공 번호를 대입
			for (int i = 1; i <= Param->GetMax(); i++)
			{
				printf("%d번째 공을 뽑으세요\n\n", i);
				DetermineEnter();

				int ranNum;
				int isIn = 1;
				while (isIn)
				{
					ranNum = 1 + rand() % Param->GetMax();
					for (int j = 0; j < i; j++)
					{
						if (Param->GetNumber()[j] == ranNum)
						{
							ranNum = 1 + rand() % Param->GetMax();
							j = -1;
						}
					}
					isIn = 0;
				}

				Param->SetNumber(i - 1, ranNum);

				printf("%d번째 공의 번호: %d\n", i, Param->GetNumber()[i - 1]);
			}
			_getch();
			break;

		}
		else if (keyInput == 'Y' || keyInput == 'y')
		{
			for (int i = 0; i <= Param->GetMax(); i++)
			{
				int ranNum;
				printf("%d번째 공을 뽑으세요\n\n", i+1);
				DetermineEnter();

				ranNum = 1 + rand() % Param->GetMax();
				Param->SetNumber(i, ranNum);
				printf("%d번째 공의 번호: %d\n", i+1, Param->GetNumber()[i]);
			}
			break;
		}
		else
		{
			PrintWrongInput();
		}
	}

}



