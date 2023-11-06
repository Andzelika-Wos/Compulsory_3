#include <iostream>
#include "Folder.h"
#include "File.h"
using namespace std;

int main() 
{

	cout << "Name:               " << "Size:            " << "Date:                     " << "Type: " << "\n";

	Folder dog("Cute_dogos", 0, 0);
	dog.print();

	File cat("Cute_cats", 0, 0);
	cat.print();

}
