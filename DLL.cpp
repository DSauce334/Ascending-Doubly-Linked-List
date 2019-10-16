#pragma once
#include "DLL.h"
#include "Node.h"
#include <iostream>
using namespace std;

Doubly_Linked::Doubly_Linked()
{
	//initializes the first head node and initiates linked-list
	headnode = new Node();
	firstnode = headnode;
	listsize = 0;
}
//Empty node not called, but used for verification, leftover from other project.
bool Doubly_Linked::Empty()
{
	//check to see if the linked list has been filled with at least one node
	//outside of the head node or not
	if (firstnode->nextnode == '\0')
		return true;
	else
		return false;
}

void Doubly_Linked::ascending_Insert(Node* Insert)
{
	Node* iterator = headnode->nextnode;

	//if the list is empty except for the headnode, place the new node normally
	if (headnode->nextnode == '\0')
	{
		//connects the prevnode of the new inserted node to the node before it
		Insert->prevNode = headnode;

		//connects the newly inserted node to the node after it
		//If statement is not needed, no error will be produced due to the next node of the previous node
		//being set to null with no node coming after it.
		Insert->nextnode = headnode->nextnode;

		//connects the previous node to the inserted node last
		headnode->nextnode = Insert;
		listsize++;
	}
	else if (headnode->nextnode != '\0')
	{
		for (int i = 0; i < listsize; i++)
		{
			
			 if ((iterator->dataval) >= (Insert->dataval))
			{
				//connects the prevnode of the new inserted node to the node before it
				Insert->prevNode = iterator->prevNode;

				//connects the newly inserted node to the node after it
				//If statement is not needed, no error will be produced due to the next node of the previous node
				//being set to null with no node coming after it.
				Insert->nextnode = iterator;

				//connects the previous node to the inserted node last
				iterator->prevNode = Insert;
				iterator = Insert->prevNode;
				iterator->nextnode = Insert;
				listsize++;
				break;
			}
			 else if (iterator->nextnode == '\0')
			 {
				 //connects the prevnode of the new inserted node to the node before it
				 Insert->prevNode = iterator;

				 //connects the newly inserted node to the node after it
				 //If statement is not needed, no error will be produced due to the next node of the previous node
				 //being set to null with no node coming after it.
				 Insert->nextnode = iterator->nextnode;

				 //if a nextnode does exist connect it to the inserted node
				 //if (headnode->nextnode != '\0')
					 //headnode->nextnode->prevNode = Insert;

				 //connects the previous node to the inserted node last
				 iterator->nextnode = Insert;
				 listsize++;
				 break;
			 }
			 //transverse the values of the nodes through the iterator for comparison
			if ((iterator->dataval) < (Insert->dataval))
				iterator = iterator->nextnode;
		}
	}
}
//Erase function leftover from previous doubly-linked list project (Project 2, GPA calculator)
void Doubly_Linked::Erase(Node* toBeErased)
{
	//erasing node not at end of linked list
	if (toBeErased->nextnode != '\0')
	{
		toBeErased->nextnode->prevNode = toBeErased->prevNode; // delete 3
	}

	//erasing node not at start of linked list
	if (toBeErased->prevNode != '\0')
	{
		toBeErased->prevNode->nextnode = toBeErased->nextnode; // delete 2
	}

	//erasing node first in linked list
	else 
		firstnode = toBeErased->nextnode;

	//sets the previous and next node connections of the erased node to null, removing it from the linked list
	toBeErased->nextnode = '\0';
	toBeErased->prevNode = '\0';

	listsize--;
}


void Doubly_Linked::Display()
{
	//uses iterator and loop to display the inputted data
	Node* iterator = headnode->nextnode;
	cout << endl;
	cout << "The nodes inserted in ascending order (from left to right) are: " << endl;
	for (int i = 0; i < listsize; i++)
	{
		cout << iterator->dataval << " ";
		//iterator here used to traverse nodes to build complete list
		iterator = iterator->nextnode;
	}
	cout << endl;
}