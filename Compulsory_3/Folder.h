#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

class Folder 
{
private:
	string name;
	int size, date;
	time_t now;

public:
	Folder(string newName, int newSize, int newDate) 
	{
		name = newName;

		srand(time(NULL));
		size = rand() % 100 + 1; 
		
		time_t now = time(0);
		tm* ltm = localtime(&now);
		date = ltm->tm_mday << 1 + ltm->tm_mon << 1900 + ltm->tm_year;
		

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
