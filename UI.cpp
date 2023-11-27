#include "framework.h"

void RunUI()
{

	
	bool isExit = 0;
	//choice = getch();

	while (!isExit)
	{
		char choice = 0;
		MakeMenuBar();
		choice = _getch();
		switch (choice)
		{
		case '0':
			Exit(&isExit);
			break;
		case '1':

			break;
		case '2':
			MakeCase();
			choice = 0;
			break;
		default:

			





		}

		
	}



}

void Exit(bool* isExit)
{
	system("cls");
	*isExit = 1;
	//printf("프로그램이 종료되었습니다. 아무키나 누르세요");
	return;
}

void MakeMenuBar()
{
	printf(" 사다리타기:[1] 대포뽑기:[2] 제비뽑기:[3] 나가기[0] \n");
	printf("원하는 선택지를 선택해주세요: ");
}


