#pragma once
#include<iostream>
#include "Folder.h"
using namespace std;

int choiceFolder;

///enum folderNames { CUTEDOGS, CUTECATS, CUTEHORSES };

int functionFolder()
{
	cout << "Name:               " << "Size:            " << "Date:                     " << "Type: " << "\n";

	Folder withAll("Everything", 0, 0);
	withAll.print();

	return 0;
}

int functionInFolder()
{
	cout << "\n";
	cout << "choose your folder: ";
	cout << "\n";
	Folder dog("Cute_Dogs", 0, 0);
	dog.print();
	cout << " + New Folder";
	cout << "\n";
	cin >> choiceFolder;
	switch (choiceFolder)
	{
	case 1:
	{
		Folder dog("Cute_Dogs", 0, 0);
		dog.print();
		break;
	}
	case 2:
		//	MakeFolder(); 
		//	printfolder();
		break;

	}

	return 0;

}
