#include "Case.h"

Case::Case()
{
	m_iMax = 0;
	m_iMin = 0;

}
Case::~Case()
{

}

int Case::GetMax()
{
	return m_iMax;
}

int Case::GetMin()
{
	return m_iMin;
}

void Case::SetRange(int max , int min )
{
	this->m_iMax = max;
	this->m_iMin = min;
	this->m_ipNumber = new int[m_iMax];


}

void Case::SetNumber(int sequence, int num)
{

	m_ipNumber[sequence] = num;
	
}

int* Case::GetNumber()
{
	return m_ipNumber;
}
