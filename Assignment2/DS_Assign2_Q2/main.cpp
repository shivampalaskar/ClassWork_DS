#include <iostream>
#include "MenuList.h"
#include "SinglyLinearList.h"
using namespace std;

int main() {
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
			list.displayReverseList(list.getHead());
			cout<<endl;
			break;
		}
		case 5: {
			list.makeListReverse(list.getHead());
			break;
		}
		case 6: {
			list.recursionTest(5);
			cout << endl;
			break;
		}

		}
	}
	return EXIT_SUCCESS;
}
