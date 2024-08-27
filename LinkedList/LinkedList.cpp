// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SingleList.h"
#include <vector>
#include <forward_list>
int main()
{
	SingleList list;
	
	list.PushFront(85);
	list.PushFront(85);
	list.PushFront(67);
	list.PushFront(85);
	list.PushFront(89);
	list.PushFront(85);
	list.PushFront(85);
	list.PushFront(85);
	list.PushFront(85);

	std::cout << "Printing Our List" << std::endl;
	for (auto it = list.Begin(); it != list.End(); ++it) {
		std::cout << " " << *it << " " << std::endl;
	}

	list.Remove(85);
	
	std::cout << "Printing Our List" << std::endl;
	for (auto it = list.Begin(); it != list.End(); ++it) {
		std::cout << " " << *it << " " << std::endl;
	}
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
