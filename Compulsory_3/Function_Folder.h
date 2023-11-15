#pragma once
#include<iostream>
#include "Folder.h"
using namespace std;

int choiceFolder;
string makeName;

///enum folderNames { CUTEDOGS, CUTECATS, CUTEHORSES };

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
/// a function that lets you go into the different Folders, and make new Folders with user input
/// also alowes you to see the different Files inside the Folders, and lets you create new Files
/// </summary>
/// <returns></returns>
int functionInFolder()
{
	cout << "\n";
	cout << "choose your folder: ";
	cout << "\n\n";
	
	Folder dog("Cute_Dogs ", 0, 0);
	dog.print();

	Folder cat("Cute_Cats ", 0, 0);
	cat.print();

	cout << " + New Folder";
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
		cout << "Type new folder name: ";
		cin >> makeName;
		cout << "New Folder: " << makeName;
		void printfolder();
		break;

	}

	return 0;

}
