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
	//printf("���α׷��� ����Ǿ����ϴ�. �ƹ�Ű�� ��������");
	return;
}

void MakeMenuBar()
{
	printf(" ��ٸ�Ÿ��:[1] �����̱�:[2] ����̱�:[3] ������[0] \n");
	printf("���ϴ� �������� �������ּ���: ");
}


