#include<iostream>
#include "CornerGrocerMenu.h"
#include <fstream>
using namespace std;




int main(){
	ifstream stream("CS210_Project_Three_Input_File.txt");
	string str;
	map<string, int> list;

	if (stream.is_open()) {
		while (getline(stream, str)) {
			if (list.count(str) == 1) {
				list.at(str) += 1;
			}
			else {
				list.emplace(str, 0);
			}
			

		}
	}


	/*hile ( {
		
		
		cout << str;
		if (list.count(str) == 1) {
			list.at(str) += 1;
		}
		else {
			list.emplace(str, 0);
		}
	}*/

	stream.close();
	/*map<string, int>::iterator itr;*/
	//for (itr = list.begin(); itr != list.end(); ++itr) {
	//	cout << itr->first << " " << itr->second << endl;
	//}
	CornerGrocerMenu menu(list);
	menu.menu();
	//return 0;
}