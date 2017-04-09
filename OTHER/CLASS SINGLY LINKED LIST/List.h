#pragma once
#include "Node.h"
class List
{
	Node *Head;
	Node *Tail;
public:
	List();
	~List();

	Node* CreateNode(int Value);

	void AddHead(Node *p);
	void AddTail(Node *p);
	void InsertAfterQ(Node *p, Node *q);
	void Sort();
	void RemoveHead();
	void RemoveTail();
	void RemoveAfterQ(Node *q);
	void RemoveAValue(int Value);
	void Display();

	bool isInList(int Value);

	int Count();
	int MaxValue();
	int MinValue();
};