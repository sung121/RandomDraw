#include "framework.h"



void MakeCase()
{

	system("cls");
	Case* newCase = new Case();

	printf("���� ���� ������ �������ּ��� :");
	{
	int a = 0;
	scanf_s("%d", &a);
	newCase->SetRange(a);
	printf("�����Ͻ� ���� ���� ������ %d���Դϴ�.\n", a);
	_getch();
	}

	ChooseNumber();
	printf("����Ű�� �����ø� ������ �߻��� ��ȣ�� �̽��ϴ�.\n");
	DetermineEnter();
	system("cls");
	PullOutNumber(newCase);

	
	system("cls");

}

void ChooseNumber()
{
	//�� ��ȣ�� ������ �ֵ����� ����ڿ��� �ѱ�
	while (1)
	{
		system("cls");
		printf("���� ��ȣ�� ���� �����Ͻðڽ��ϱ�[y/n]\n");
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
			printf("�߸��� �Է��Դϴ�. �ٽ� �������ּ���\n");
			_getch();
		}
	}

	return;
}

void PullOutNumber(Case* param)
{
	
	//int* array = new int[loopNum];
	Case* Param = param;


	//���޹��� Case ��ü�� number�� ���ʴ�� �� ��ȣ�� ����
	for (int i = 1; i <= Param->GetMax(); i++)
	{
		printf("%d��° ���� ��������\n\n", i);
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
		
		printf("%d��° ���� ��ȣ: %d\n", i, Param->GetNumber()[i-1]);
	}
	_getch();
	
}




