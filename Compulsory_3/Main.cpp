#include <iostream>
#include "Folder.h"
#include "File.h"
#include "Function_Folder.h"
using namespace std;

int choice;
bool isRunning = true;

/// <summary>
/// The main function that lets you access all the different Folders and Files
/// </summary>
/// <returns></returns>
int main() 
{
	
	while(isRunning == true)
	{
		cout << "\n";
		cout << "Type 1 or 2 to do action: \n";
		cout << "1. Enter folder\n";
		cout << "2. Exit\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\n";
			functionFolder();
			functionInFolder();
			break;

		case 2:
			isRunning = false;
			break;
			
		default:
			cout << "That was neither 1 nor 2?\n"; 
			cout << "please try again ^^\n";  
			cin.clear(); 
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		}
	}

	return 0;
}

