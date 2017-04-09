#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	int Data;
	Node* Next;

public:
	Node();
	Node(int Value, Node* nNext);
	~Node();

	void setData(int Value);
	int getData();
	Node* getNext();
	void setNext(Node *p);
};