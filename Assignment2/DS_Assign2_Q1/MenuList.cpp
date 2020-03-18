#include <iostream>
#include "MenuList.h"
using namespace std;

int menuList(){
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1. Add Node At Last"<<endl;
	cout<<"2. Display"<<endl;
	cout<<"3. Delete All Nodes"<<endl;
	cout<<"4. Bubble Sort (Sort By Node)"<<endl;
	cout<<"5. Selection Sort (Sort By Value)"<<endl;
	cout<<"6. Add Node In Sorted Manner"<<endl;
	cout<<"Enter Choice : ";
	cin>>choice;
	return choice;
}
