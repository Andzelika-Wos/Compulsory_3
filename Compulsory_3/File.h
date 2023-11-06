#pragma once
#include <iostream>
using namespace std;

class File
{
private:
	string name;
	int size, date;

public:
	File(string newName, int newSize2, int newDate)
	{
		name = newName;

		size = rand() % 100 + 1;

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

	void print()
	{
		cout << name << "           " << size << "MB" << "             " << __DATE__ << "               " << "File" << "\t";
	}
};

