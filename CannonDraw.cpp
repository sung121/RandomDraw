#include "CannonDraw.h"


void MakeCase()
{

	system("cls");
	Case* newCase = new Case;
	
	printf("�� ��ȣ�� ������ ���� �����Ͻðڽ���?[y/n]\n");

	ChooseRange(newCase);


}

void ChooseRange(Case* newCase)
{

	while (1)
	{
		char c_Select = 0;
		c_Select = _getch();

		if ('Y' == c_Select || 'y' == c_Select)
		{


		}
		else if ('N' == c_Select || 'n' == c_Select)
		{
			system("cls");
			printf("�� ��ȣ�� ������ 0~%d�� �����߽��ϴ�.", newCase->GetMax());
			break;
		}
		else
		{
			system("cls");
			printf("�߸��� �Է��Դϴ�. �ٽ� �������ּ���\n");
		}
	}

}

void ChooseCount(Case* newCase)
{
	printf("���� ���� ������ �������ּ���:");

	{
		int a = 0;
		scanf_s("%d", &a);
		newCase->SetRange(a);
	}

	printf("�����Ͻ� ���� ���� ������ %d�Դϴ�.\n", newCase->GetMax());
}
