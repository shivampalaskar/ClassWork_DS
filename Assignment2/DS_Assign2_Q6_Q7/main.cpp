#include <iostream>
#include "MenuList.h"
#include "SinglyLinearList.h"
#include <string>
#include <cstring>
using namespace std;

int main() {
	string str;
	int choice;
	SinglyLinearList list;
	while ((choice = menuList()) != 0) {
		switch (choice) {
		case 1: {
			list.addNodeAtLast(list.createNewNode());
			break;
		}
		case 2: {
			if (list.isListEmpty())
				cout << "List Is Empty" << endl;
			else
				list.displayNode();
			break;
		}
		case 3: {
			list.deleteList();
			break;
		}
		case 4: {
			if (list.isListEmpty())
				cout << "List Is Empty" << endl;
			else{
				int empID;
				cout<<"Enter Employee ID : ";
				cin>>empID;
				bool flag = list.deleteEmployeeByID(empID);
				if(flag)
					cout<<"Emp ID "<<empID<<" Deleted Successfully "<<endl;
				else
					cout << "Emp ID " << empID << " Not Found" << endl;
			}
			break;
		}
		case 5: {
			if (list.isListEmpty())
				cout << "List Is Empty" << endl;
			else {
				int empID;
				cout << "Enter Employee ID : ";
				cin >> empID;
				bool flag = list.searchEmployeeByID(empID);
				if (!flag)
					cout << "Emp ID " << empID << " Not Found" << endl;
			}
			break;
		}
		case 6: {
			list.displayReverseList(list.getHead());
			cout << endl;
			break;
		}
		case 7: {
			list.makeListReverse(list.getHead());
			break;
		}

		}
	}
	return EXIT_SUCCESS;
}
