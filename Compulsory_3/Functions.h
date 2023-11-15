#pragma once
#pragma warning(disable : 4996)
#include<iostream>
#include "Folder.h"
#include "File.h"
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

int choiceFolder;

/// <summary>
/// simple function that puts everything we need from class Folder and prints it out
/// </summary>
/// <returns></returns>
int functionFolder()
{
	cout << "Name:               " << "Size:            " << "Date:                     " << "Type: " << "\n";

	Folder withAll("Everything", 0, 0);
	withAll.print();

	return 0;
}

/// <summary>
/// function that asks and stores the amount of folders you want to create
/// </summary>
/// <returns></returns>
int howManyFolders() 
{
	int const folderMin = 1;
	int const folderMax = 5;
	int folderCount = -1;
	while (folderCount < folderMin || folderCount > folderMax)
	{
		cout << "How many folders do you want to create? Choose from " << folderMin << " to " << folderMax << ":\n";
		cin >> folderCount;
	}
	return folderCount;
}

/// <summary>
/// function that asks and stores the amount of files you want to create
/// </summary>
/// <returns></returns>
int howManyFiles() 
{
	int const filesMin = 1;
	int const filesMax = 10;
	int filesCount = -1;
	while (filesCount < filesMin || filesCount > filesMax) 
	{
		cout << "How many files do you want to create? Choose from " << filesMin << " to " << filesMax << ":\n";
		cin >> filesCount;
	}
	return filesCount;
}

/// <summary>
/// a function that lets you go into the different Folders, and make new Folders with user input
/// also alowes you to see the different Files inside the Folders, and lets you create new Files
/// </summary>
/// <returns></returns>
int functionInFolder()
{
	cout << "\n";
	cout << "choose your folder (with 1, 2, 3 or 4): ";
	cout << "\n\n";
	
	Folder dog("Cute_Dogs ", 0, 0);
	dog.print();

	Folder cat("Cute_Cats ", 0, 0);
	cat.print();

	cout << " + New Folder\n";
	cout << " + New File";
	cout << "\n\n";
	cin >> choiceFolder;
	switch (choiceFolder)
	{
	case 1:
	{
		Folder dog("Cute_Dogs  ", 0, 0);
		dog.print();
		
		File dogo("dogo     ", 0, 0);
		dogo.print();
		File aww("awwwwwwww", 0, 0);
		aww.print();
		File cutie("cutie    ", 0, 0);
		cutie.print();

		break;
	}
	case 2:
	{
		Folder cat("Cute_Cats  ", 0, 0);
		cat.print();

		File kitty("kitty    ", 0, 0);
		kitty.print();
		File aww("awwwwwwww", 0, 0);
		aww.print();
		File cutie("cutie    ", 0, 0);
		cutie.print();
		break;
	}
	case 3:
	{
		int size;
		srand(time(0));
		size = rand() % 100 + 1;
		string newFolder[5];

		string folders(string newFolder);
		{
			int const folderCount = howManyFolders();
			cout << "names of folders pls: ";
			for (int i = 0; i < folderCount; i++)
			{
				cin >> newFolder[i];
			}
			cout << "\nnew folders: \n";
			for (int i = 0; i < folderCount; i++)
				cout << newFolder[i] << "                   " << size << "MB            " << __DATE__ << "               " << "Folder" "\n";
		}
		break;
	}

	case 4:
	{
		int size;
		srand(time(0)); 
		size = rand() % 100 + 1;
		string newFile[10];

		string files(string newFile);
		{
			int const fileCount = howManyFiles();
			cout << "names of files: ";
			for (int i = 0; i < fileCount; i++)
			{
				cin >> newFile[i];
			}
			cout << "\nthe new files: \n";
			for (int i = 0; i < fileCount; i++)
				cout << newFile[i] << "                   " << size << "MB             " << __DATE__ << "                " << "File" "\n";
		}
		break;
	}
	default:
		cout << "1, 2, 3 or 4 pls\n";
		cout << "do try again :]\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return 0;
}
