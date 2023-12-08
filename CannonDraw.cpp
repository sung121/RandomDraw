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
	//�� ��ȣ�� ������ �ֵ����� ����ڿ��� �ѱ�
	while (1)
	{
		system("cls");
		printf("���� ������ ��ȣ�� ���� �����Ͻðڽ��ϱ�[y/n]\n");
		char keyInput = _getch();

		if (keyInput == 'y' || keyInput == 'Y')
		{
			ChooseNumberDirectly(param);
			break;
		}
		else if (keyInput == 'n' || keyInput == 'N')
		{
			printf("���� �����Ͻ��� �ʾ�, ������ ���� ������ 10���� �����մϴ�.\n");
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

	printf("���� ���� ����Ȥ�� ������ �������ּ��� :");
	{/*
		char szstring[100];
		scanf_s("%s", szstring);
		printf("%d", szstring);*/

		int a = 0;
		scanf_s("%d", &a);
		param->SetRange(a);

		printf("���� ���� ������ %d���Դϴ�.\n", a);
		_getch();
	}
}

void PullOutNumber(Case* param)
{

	//int* array = new int[loopNum];
	Case* Param = param;
	
	while (1)
	{
		printf("�� ��ȣ�� �ߺ��� ����Ͻðڽ��ϱ�?[y/n]\n");
		char keyInput = _getch();

		if (keyInput == 'N' || keyInput == 'n')
		{
			//���޹��� Case ��ü�� number�� ���ʴ�� �� ��ȣ�� ����
			for (int i = 1; i <= Param->GetMax(); i++)
			{
				printf("%d��° ���� ��������\n\n", i);
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

				printf("%d��° ���� ��ȣ: %d\n", i, Param->GetNumber()[i - 1]);
			}
			_getch();
			break;

		}
		else if (keyInput == 'Y' || keyInput == 'y')
		{
			for (int i = 0; i <= Param->GetMax(); i++)
			{
				int ranNum;
				printf("%d��° ���� ��������\n\n", i+1);
				DetermineEnter();

				ranNum = 1 + rand() % Param->GetMax();
				Param->SetNumber(i, ranNum);
				printf("%d��° ���� ��ȣ: %d\n", i+1, Param->GetNumber()[i]);
			}
			break;
		}
		else
		{
			PrintWrongInput();
		}
	}

}



