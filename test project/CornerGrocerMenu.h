#ifndef CORNERGROCERMENU_H
#define CORNERGROCERMENU_H

#include <map>
#include <string>
#include <iostream>

using namespace std;
class CornerGrocerMenu
{
public:
	void menu();
	void menuOption1();
	void menuOption2();
	void menuOption3();
	CornerGrocerMenu(map<string, int> grocerList);


private:
	int option;
	string currentItem;
	map<string, int> grocerList;
};


#endif
