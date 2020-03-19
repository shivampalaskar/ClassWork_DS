#include <iostream>
#include "MenuList.h"
using namespace std;

int menuList(){
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1. Add Node"<<endl;
	cout<<"2. Display"<<endl;
	cout<<"3. Delete All Nodes"<<endl;
	cout<<"4. Delete Duplicate Elements (Non-Recursive)"<<endl;
	cout<<"5. Delete Duplicate Elements (Recursive)"<<endl;
	cout<<"Enter Choice : ";
	cin>>choice;
	return choice;
}
