#pragma once
class String
{
private:
	int length;
	char *pString;

public:
	String();
	String(const char* str);
	String(const String &str);
	~String();

	int getLength();
	void reverse();
	int compareTo(String b);
	void appendWith(String b);
	void output();
};