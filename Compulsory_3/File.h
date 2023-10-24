#pragma once
#include <iostream>
using namespace std;

class File
{
private:
	string name;
	int size, date;

public:
	File(string newName, int newSize, int newDate)
	{
		name = newName;
		size = newSize;
		date = newDate;
	}

	string getName()
	{
		return name;
	}
	int getSize()
	{
		return size;
	}
	int getDate()
	{
		return date;
	}
};

