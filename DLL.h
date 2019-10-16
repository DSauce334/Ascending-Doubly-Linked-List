#pragma once
#include "Node.h"

class Doubly_Linked
{
public:
	//initial nodes and values
	Node* headnode;
	Node* firstnode;
	int listsize;

	//Implemented functions
	Doubly_Linked();
	bool Empty();
	void ascending_Insert(Node* toBeInserted);
	void Erase(Node* toBeErased);
	void Display();
};

