#include "framework.h"



void MakeCase()
{

	system("cls");
	Case* newCase = new Case();

	printf("던질 공의 개수를 선택해주세요 :");
	{
	int a = 0;
	scanf_s("%d", &a);
	newCase->SetRange(a);
	printf("선택하신 던질 공의 개수는 %d개입니다.\n", a);
	_getch();
	}

	ChooseNumber();
	printf("엔터키를 누르시면 대포를 발사해 번호를 뽑습니다.\n");
	DetermineEnter();
	system("cls");
	PullOutNumber(newCase);

	
	system("cls");

}

void ChooseNumber()
{
	//공 번호를 지정할 주도권을 사용자에게 넘김
	while (1)
	{
		system("cls");
		printf("공의 번호를 직접 지정하시겠습니까[y/n]\n");
		char keyInput = _getch();

		if (keyInput == 'y' || keyInput == 'Y')
		{
			
		}
		else if (keyInput == 'n' || keyInput == 'N')
		{
			break;
		}
		else
		{
			system("cls");
			printf("잘못된 입력입니다. 다시 선택해주세요\n");
			_getch();
		}
	}

	return;
}

void PullOutNumber(Case* param)
{
	
	//int* array = new int[loopNum];
	Case* Param = param;


	//전달받은 Case 객체의 number에 차례대로 공 번호를 대입
	for (int i = 1; i <= Param->GetMax(); i++)
	{
		printf("%d번째 공을 뽑으세요\n\n", i);
		DetermineEnter();
		
		int ranNum; 
		int isIn = 1;
		while (isIn)
		{
			ranNum = rand() % Param->GetMax();
			for (int j = 0; j < i; j++)
			{
				if (Param->GetNumber()[j] == ranNum)
				{
					ranNum = rand() % Param->GetMax();
					break;
				}
			}
			isIn = 0;
		}
			
			Param->SetNumber(i-1, ranNum);
		
		printf("%d번째 공의 번호: %d\n", i, Param->GetNumber()[i-1]);
	}
	_getch();
	
}




