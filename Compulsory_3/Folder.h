#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

class Folder 
{
private:
	string name;
	int size;
	time_t date;
	int tm_mday, tm_mon;

public:
	Folder(string newName, int newSize, int newDate) 
	{
		name = newName;

		srand(time(NULL));
		size = rand() % 100 + 1;
		cout << size;

		date = time(0);
		char* dt = ctime(&date);
		cout << "date: " << dt << endl;
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
		cout << "Folder name: " << name << endl;
		cout << "Folder size: " << size << "MB" << endl;
		cout << "Folder date: " << date << endl;
	}

	void print(int size) 
	{
		cout << "size: " << getSize();
	}
};
