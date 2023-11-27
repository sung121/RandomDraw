#include "framework.h"



void MakeCase()
{

	system("cls");
	Case* newCase = new Case;
	printf("던질 공의 개수를 선택해주세요");
	int a = *(newCase->GetMax());
	scanf_s("%d", &a);
	printf("선택하신 던질 공의 개수는 %d입니다.", a);


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
