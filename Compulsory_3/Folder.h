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
	string makeName;
	int size, date;

public:
	Folder(string newName, int newSize, int newDate) 
	{
		name = newName;

		size = rand() % 100 + 1; 
		
		date = newDate;
	}


	int MakeFolder(string makeName, int newSize, int newDate) 
		{
		cout << "Type new folder name: ";
		cin >> makeName;
		cout << "New Folder:";
		cout << makeName << "       " << size << "MB" << "       " << __DATE__ << "     " << "Folder" << "\t" << endl;
		return 0;
		}

	string getName() 
	{
		return name;
	}
	string getMakeName() 
	{
		return makeName;
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

	void printfolder() 
	{
		cin >> makeName;
		cout << makeName << "       " << size << "MB" << "       " << __DATE__ << "     " << "Folder" << "\t" << endl;
	}

};
