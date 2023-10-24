#pragma once
#include <iostream>
using namespace std;

class Folder 
{
private:
	string name;
	int size, date;

public:
	Folder(string newName, int newSize, int newDate) 
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
