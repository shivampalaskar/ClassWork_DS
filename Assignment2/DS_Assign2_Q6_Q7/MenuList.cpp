#include <iostream>
#include "MenuList.h"
using namespace std;

int menuList(){
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1. Add Node At Last"<<endl;
	cout<<"2. Display"<<endl;
	cout<<"3. Delete All Nodes"<<endl;
	cout<<"4. Delete Employee By Emp ID"<<endl;
	cout<<"5. Search Employee By emp ID"<<endl;
	cout<<"6. Search_And_Delete By ID"<<endl;
	cout<<"7. Display Reverse List (Recursive Method)"<<endl;
	cout<<"8. Make List Reverse"<<endl;
	//cout<<"9. Reverse List By Group"<<endl;
	cout<<"Enter Choice : ";
	cin>>choice;
	return choice;
}
