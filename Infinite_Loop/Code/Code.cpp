// Lab 1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
// sting should be included
using namespace std;

int main()
{
       // remove int choice= 0;
	string name = "";
	string age = "";
	string occup = "";

	// remove while (choice != -1)

	{
		// remove cout << "-1: Exit\n";
		cout << "1: Enter Name\n";
		cout << "2: Enter Age\n";
		cout << "3: Enter Occupation\n";
		// remove cin >> choice;
	}

		// remove *if (choice == -1)
		//break;*/
                    
		// remove switch (choice) and cases
		{
			cout << "What is your Name: ";
			cin >> name;
			cout << "What is your Age? ";
			cin >> age;
			cout << "What is your Occupation? ";
			cin >> occup;
	
		}


	cout << "Thank you for using our application, " << name << " and hope your career in " << occup << " is successful.";
	cout << "Hope your " << age << " birthday will enjoyable and exciting";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
