#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

/// <summary>
/// class Folder that stores a simple folder with date, random size of max. 100MB and a given name
/// </summary>
class Folder 
{
private:
	string name;
	int size, date;

public:
	Folder(string newName, int newSize, int newDate) 
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
		cout << name << "          " << size << "MB" << "             " << __DATE__ << "               " << "Folder" << "\t" << endl;
	}

};
