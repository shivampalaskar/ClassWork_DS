# Assignment 2

assignments on linked list:
---------------------------
1. Implement Singly Linear Linked List and perform following operations:
	i) Sort the linked list elements by using:
		1. Selection sort (using pointer)
		2. Bubble sort(using pointer)
	ii) Merge two already sorted linked lists into a third linked list
	iii) Add node into a linked list in a sorted manner
	
2. Write a recursive function to reverse a singly linear linked list.
3. Write a function to find middle node in a linked list.
4. Write a function(recursive & non-recursive) to remove duplicate elements from a sorted linked list
5. Reverse a linked list in groups of given size
	e.g. group size = 3
	Input : 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> 80 -> 90 -> NULL
	Output: 30 -> 20 -> 10 -> 60 -> 50 -> 40 -> 90 -> 80 -> 70 -> NULL
	
6. Implement linked list of employees.
7. Implement the function search_and_delete() for singly linear linked list:
	- accept the key from the user in a main() function and pass it to the
	search_and_delete()
	function.
	- bool search_and_delete(int key);
	- call search() function from inside search_and_delete() function
	- node *search(int key, node **prev);
	- search() function should return the addr of node to be deleted if found and addr
	of its prev node as well on success and on failure it returns NULL.
	- if node is found then write a logic to delete the node in a search_and_delete()
	function and return true in case of successfull deletion otherwise return false
	which indicates key data is not found.
