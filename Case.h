#pragma once

#include "framework.h"


class Case
{
public:
	Case();
	~Case();

private:
	int m_iMax;
	int m_iMin;
	int* m_ipNumber;

public:
	int GetMax();
	int GetMin();
	void SetRange(int max = 10, int min = 0);
	void SetNumber(int, int);
	int* GetNumber();

};


