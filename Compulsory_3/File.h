#pragma once
#include <iostream>
using namespace std;

/// <summary>
/// class File that stores a simple file with date, random size of max. 100MB and a given name
/// </summary>
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
		cout << name << "           " << size << "MB" << "             " << __DATE__ << "               " << "File" << "\t" << endl;
	}
};

