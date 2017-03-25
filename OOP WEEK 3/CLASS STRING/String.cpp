#include "String.h"
#include <cstring>
#include <iostream>
using namespace std;

String::String()
{
}

String::String(const char * str)
{
	length = strlen(str) + 1;
	pString = new char[length];
	strcpy_s(pString, length, str);
}

String::String(const String &str)
{
	length = strlen(str.pString) + 1;
	pString = new char[length];
	strcpy_s(pString, length, str.pString);
}

String::~String()
{
	delete[] pString;
}

int String::getLength()
{
	return length - 1;
}

void String::reverse()
{
	String temp(*this);
	for (int i = length - 2, count = 0; i >= 0; i--)
	{
		temp.pString[count] = pString[i];
		count++;
	}

	for (int j = 0; j < length; j++)
	{
		pString[j] = temp.pString[j];
	}
}

int String::compareTo(String b)
{
	int result = strcmp(pString, b.pString);
	return result;
}

void String::appendWith(String b)
{
	int newLength = (length - 1) + (b.length - 1) + 1;
	char* temp = new char[newLength];

	for (int x = 0; x < length - 1; x++)
	{
		temp[x] = pString[x];
	}

	for (int y = length - 1, count = 0; y < newLength - 1; y++)
	{
		temp[y] = b.pString[count];
		count++;
	}
	temp[newLength - 1] = '\0';

	length = newLength;
	pString = new char[length];

	strcpy_s(pString, length, temp);
	pString[length - 1] = '\0';
}

void String::output()
{
	cout << pString << endl;
}