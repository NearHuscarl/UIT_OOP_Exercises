#include "Node.h"
#include <iostream>
using namespace std;

Node::Node()
{
}

Node::Node(int Value, Node * nNext)
{
	Data = Value;
	Next = nNext;
}

Node::~Node()
{
}

void Node::setData(int Value)
{
	Data = Value;
}

int Node::getData()
{
	return Data;
}

Node* Node::getNext()
{
	return Next;
}

void Node::setNext(Node * p)
{
	Next = p;
}