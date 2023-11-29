#include "Case.h"

Case::Case()
{
	m_max = 0;
	m_min = 0;

}
Case::~Case()
{

}

int Case::GetMax()
{

	return m_max;
}

int Case::GetMin()
{
	return m_min;
}

void Case::SetRange(int max , int min )
{
	this->m_max = max;
	this->m_min = min;

}
