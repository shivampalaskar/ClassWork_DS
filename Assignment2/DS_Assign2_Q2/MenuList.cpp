#include <iostream>
#include "MenuList.h"
using namespace std;

int menuList(){
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1. Add Node At Last"<<endl;
	cout<<"2. Display"<<endl;
	cout<<"3. Delete All Nodes"<<endl;
	cout<<"4. Display Reverse List (Recursive Method)"<<endl;
	cout<<"5. Make List Reverse"<<endl;
	cout<<"Enter Choice : ";
	cin>>choice;
	return choice;
}
