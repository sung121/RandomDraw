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
			system("cls");
			printf("�߸��� ������ �Դϴ�. ��� �Ͻ÷��� �ƹ�Ű�� ��������\n");
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
	printf("���α׷��� ����Ǿ����ϴ�. �ƹ�Ű�� ��������");
	_getch();
	return;
}

void MakeMenuBar()
{
	printf(" ��ٸ�Ÿ��:[1] �����̱�:[2] ����̱�:[3] ������[0] \n");
	printf("���ϴ� �������� �������ּ���: ");
}


