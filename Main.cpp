#include <iostream>
#include "Node.h"
#include "DLL.h"
using namespace std;

int main()
{
	//Nodes declaring the data values
	Node* n1 = new Node(7);
	Node* n2 = new Node(3);
	Node* n3 = new Node(4);
	Node* n4 = new Node(1);
	Node* n5 = new Node(5);
	Node* n6 = new Node(9);
	
	//cout statements to show original order.
	cout << "The original order of the nodes as entered (from left to right) are: " << endl;
	cout << n1->dataval << " ";
	cout << n2->dataval << " ";
	cout << n3->dataval << " ";
	cout << n4->dataval << " ";
	cout << n5->dataval << " ";
	cout << n6->dataval << endl;

	//initializes the linked list
	Doubly_Linked doublyLinkedList;

	// inserting the nodes into the linked list
	doublyLinkedList.ascending_Insert(n1);
	doublyLinkedList.ascending_Insert(n2);
	doublyLinkedList.ascending_Insert(n3);
	doublyLinkedList.ascending_Insert(n4);
	doublyLinkedList.ascending_Insert(n5);
	doublyLinkedList.ascending_Insert(n6);

	//calls the display function
	doublyLinkedList.Display();

	//check to see if linked list is empty or not
	/*
	if (doublyLinkedList.Empty() == true)
		cout << "\nYour list is empty. \n";
	else
		cout << "\nYour list is not empty. \n";
	*/


	return 0;
}