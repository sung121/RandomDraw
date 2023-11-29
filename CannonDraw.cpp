#include "CannonDraw.h"


void MakeCase()
{

	system("cls");
	Case* newCase = new Case;
	
	printf("공 번호의 범위를 직접 지정하시겠습까?[y/n]\n");

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
			printf("공 번호의 범위를 0~%d로 설정했습니다.", newCase->GetMax());
			break;
		}
		else
		{
			system("cls");
			printf("잘못된 입력입니다. 다시 선택해주세요\n");
		}
	}

}

void ChooseCount(Case* newCase)
{
	printf("던질 공의 개수를 선택해주세요:");

	{
		int a = 0;
		scanf_s("%d", &a);
		newCase->SetRange(a);
	}

	printf("선택하신 던질 공의 개수는 %d입니다.\n", newCase->GetMax());
}
