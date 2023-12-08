#pragma once

#include "framework.h"

typedef struct Node
{
	int   key;
	char  name[32];
	Node* pNext;
	Node* pPrev;

} Node;


void AddNewNodeInFront();
void AddNewNodeInBack();
void DeleteNodeInFront();
void DeleteNodeInBack();

void SortListByKey();
void SortListByName();
