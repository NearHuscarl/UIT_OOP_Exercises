#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	Head = Tail = NULL;
}

List::~List()
{
	Node *p;
	while (Head != NULL)
	{
		p = Head;
		Head = Head->getNext();
		delete p;
	}
}

Node* List::CreateNode(int Value)
{
	Node *p = new Node;

	if (p == NULL)
	{
		return NULL;
	}
	p->setData(Value);
	p->setNext(NULL);

	return p;
}

void List::AddHead(Node *p)
{
	if (Head == NULL)
	{
		Head = Tail = p;
	}
	else
	{
		p->setNext(Head);
		Head = p;
	}
}

void List::AddTail(Node * p)
{
	if (Head == NULL)
	{
		Head = Tail = p;
	}
	else
	{
		Tail->setNext(p);
		Tail = p;
	}
}

void List::InsertAfterQ(Node * p, Node * q)
{
	for (Node *k = Head; k != NULL; k = k->getNext())
	{
		if (k->getData() == q->getData())
		{
			Node *g = k->getNext();
			k->setNext(p);
			p->setNext(g);
			return;
		}
	}
}

void List::Sort()
{
	for (Node *p = Head; p != Tail; p = p->getNext())
	{
		for (Node *q = p->getNext(); q != NULL; q = q->getNext())
		{
			if (p->getData() > q->getData())
			{
				int Temp = p->getData();
				p->setData(q->getData());
				q->setData(Temp);
			}
		}
	}
}

void List::RemoveHead()
{
	Node *p = Head;
	Head = Head->getNext();
	delete p;
}

void List::RemoveTail()
{
	Node *p = new Node;
	for (Node *k = Head; k != NULL; k = k->getNext())
	{
		if (k == Tail)
		{
			Tail = p;
			Tail->setNext(NULL);
			delete k;
			return;
		}
		p = k;
	}
}

void List::RemoveAfterQ(Node * q)
{
	Node *g = new Node;
	for (Node *k = Head; k != NULL; k = k->getNext())
	{
		if (k->getData() == q->getData())
		{
			g = k->getNext();
			k->setNext(g->getNext());
			delete g;
			return;
		}
	}
}

void List::RemoveAValue(int Value)
{
	if (Head->getData() == Value)
	{
		RemoveHead();
		return;
	}

	if (Tail->getData() == Value)
	{
		RemoveTail();
		return;
	}

	Node *q = new Node;
	for (Node *g = Head; g != NULL; g = g->getNext())
	{
		if (g->getData() == Value)
		{
			RemoveAfterQ(q);
			return;
		}
		q = g;
	}
}

void List::Display()
{
	for (Node *p = Head; p != NULL; p = p->getNext())
	{
		cout << p->getData() << " ";
	}
	cout << endl;
}

int List::Count()
{
	int count = 0;
	for (Node *p = Head; p != NULL; p = p->getNext())
	{
		if (p->getNext() != NULL)
		{
			count++;
		}
	}
	return count + 1;
}

int List::MaxValue()
{
	int Max = Head->getData();
	for (Node *p = Head; p != NULL; p = p->getNext())
	{
		if (p->getData() > Max)
		{
			Max = p->getData();
		}
	}
	return Max;
}

int List::MinValue()
{
	int Min = Head->getData();
	for (Node *p = Head; p != NULL; p = p->getNext())
	{
		if (p->getData() < Min)
		{
			Min = p->getData();
		}
	}
	return Min;
}

bool List::isInList(int Value)
{
	for (Node *p = Head; p != NULL; p = p->getNext())
	{
		if (p->getData() == Value)
		{
			return true;
		}
	}
	return false;
}