#include "UI.h"

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
			system("cls");
			printf("아직 구현되지 않은 기능입니다. 계속 하시려면 아무키나 누르세요\n");
			_getch();
			system("cls");
			break;
		case '2':
			MakeCase();
			system("cls");
			choice = 0;
			break;
		case '3':
			system("cls");
			printf("아직 구현되지 않은 기능입니다. 계속 하시려면 아무키나 누르세요\n");
			_getch();
			system("cls");
		default:
			system("cls");
			printf("잘못된 선택지 입니다. 계속 하시려면 아무키나 누르세요\n");
			_getch();
			system("cls");
			break;

			





		}

		
	}



}

void Exit(bool* isExit)
{
	system("cls");
	*isExit = 1;
	printf("프로그램이 종료되었습니다. 아무키나 누르세요");
	_getch();
	return;
}

void MakeMenuBar()
{
	printf(" 사다리타기:[1] 대포뽑기:[2] 제비뽑기:[3] 나가기[0] \n");
	printf("원하는 선택지를 선택해주세요: ");
}


