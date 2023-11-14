#include <iostream>
#include "Folder.h"
#include "File.h"
using namespace std;

int choice;
bool isRunning = true;

int functionFolder()
{
	cout << "Name:               " << "Size:            " << "Date:                     " << "Type: " << "\n";

	Folder withAll("Everything", 0, 0);
	withAll.print();


	
	return 0;
}

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

			break;
		
		case 2:
			isRunning = false;
			break;
			
		}
	}




}

