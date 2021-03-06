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
			list.bubbleSort_ByNode(); // This Sort whole Node
			break;
		}
		case 5: {
			list.selectionSort_ByValue(); // This will sort only integer Element in Node
			break;
		}
		case 6: {
			list.addNodeBySortedManner(list.createNewNode());
			break;
		}

		}
	}
	return EXIT_SUCCESS;
}
