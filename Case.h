#pragma once

#include "framework.h"


class Case
{
public:
	Case();
	~Case();

private:
	int m_max;
	int m_min;
public:
	int GetMax();
	int GetMin();
	void SetRange(int max = 10, int min = 0);


};


