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
	int* GetMax();
	int* GetMin();

};




void MakeCase();
