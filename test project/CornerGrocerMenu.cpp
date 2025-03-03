#include "CornerGrocerMenu.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;
//creates intial list of map of grocery items
CornerGrocerMenu::CornerGrocerMenu(map<string,int> grocerList) : grocerList(grocerList), option(0), currentItem("") {}
//creates display of options
void CornerGrocerMenu::menu() {

	while (option != 4) {
		cout << string(21, '-') << endl;
		cout << "Pick a menu Option" << endl;
		cout << "Menu Opton 1: frequency of the specific item" << endl;
		cout << "Menu Opton 2: print list of items and their frequencies" << endl;
		cout << "Menu Opton 3: print list of items and their frequencies as a histogram" << endl;
		cout << "Menu Opton 4: Exit Program" << endl;
		cout << string(21, '-') << endl;
		cin >> option;
		switch (option)
		{
			case 1:
				menuOption1();
				break;
			case 2:
				menuOption2();
				break;
			case 3:
				menuOption3();
				break;
		}
		}


	
	

}

//option to take input and return item frequency
void CornerGrocerMenu::menuOption1() {
	cout << "Enter item you want to search for:" << endl;
	cin >> currentItem;
	if (grocerList.count(currentItem) == 1) {
		cout << grocerList[currentItem] << endl;
	}
	else {
		cout << 0 << endl;
	}
	

}

//option to display all item frequency
void CornerGrocerMenu::menuOption2(){
	map<string, int>::iterator itr;
	for (itr = grocerList.begin(); itr != grocerList.end(); ++itr) {
		cout << itr->first << " " << itr->second << endl;
	}
}

//option to display all item frequency as a histogram
void CornerGrocerMenu::menuOption3(){
	map<string, int>::iterator itr;
	for (itr = grocerList.begin(); itr != grocerList.end(); ++itr) {
		cout << itr->first << " " << string(itr->second,'*') << endl;
	}
}



