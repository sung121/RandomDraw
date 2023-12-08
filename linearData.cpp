#include "framework.h"
#include "linearData.h"

Node g_HeadNode = { 0 };
Node g_TailNode = { 0 };

void AddNewNodeInFront()
{

}

void AddNewNodeInBack()
{
	
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pPrev = g_TailNode.pPrev;
	pNewNode->pNext = &g_TailNode;
	g_TailNode.pPrev = pNewNode;




	pNewNode->pPrev = &g_HeadNode;

}

void DeleteNodeInFront()
{
}

void DeleteNodeInBack()
{
}

void SortListByKey()
{
}

void SortListByName()
{
}
