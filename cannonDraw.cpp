#include "framework.h"



void MakeCase()
{

	system("cls");
	Case* newCase = new Case;
	printf("���� ���� ������ �������ּ���");
	int a = *(newCase->GetMax());
	scanf_s("%d", &a);
	printf("�����Ͻ� ���� ���� ������ %d�Դϴ�.", a);


}

Case::Case()
{
	m_max = 0;
	m_min = 0;

}

int* Case::GetMax()
{

	return &m_max;
}

int* Case::GetMin()
{
	return &m_min;
}
