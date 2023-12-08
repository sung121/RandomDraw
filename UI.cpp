#include "UI.h"

void RunUI()
{


	bool isExit = 0;
	//choice = getch();

	while (!isExit)
	{
		MakeMenuBar();

		char choice = 0;
		choice = _getch();
		switch (choice)
		{
		case '0':
			Exit(&isExit);
			break;
		case '1':
			system("cls");
			printf("���� �������� ���� ����Դϴ�. ��� �Ͻ÷��� �ƹ�Ű�� ��������\n");
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
			printf("���� �������� ���� ����Դϴ�. ��� �Ͻ÷��� �ƹ�Ű�� ��������\n");
			_getch();
			system("cls");
		default:
			PrintWrongInput();
			break;







		}


	}



}

void Exit(bool* isExit)
{
	system("cls");
	*isExit = 1;
	printf("���α׷��� ����Ǿ����ϴ�. �ƹ�Ű�� ��������");
	_getch();
	return;
}

void MakeMenuBar()
{
	printf(" ��ٸ�Ÿ��:[1] �����̱�:[2] ����̱�:[3] ������[0] \n");
	printf("���ϴ� �������� �������ּ���: ");
}

void DetermineEnter()
{
	int isIn = 1;
	while (isIn)
	{
		char a = _getch();
		if (a == 13)
		{
			isIn = 0;
			break;
		}
		else
		{
			PrintWrongInput();
		}
	}

}

inline void PrintWrongInput()
{
	system("cls");
	printf("�߸��� ������ �Դϴ�. ��� �Ͻ÷��� �ƹ�Ű�� ��������\n");
	_getch();
	system("cls");
}




