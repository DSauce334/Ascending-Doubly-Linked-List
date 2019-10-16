#pragma once
class Node
{
public:
	//elements of node, including the course number, the GPA, and the amount of units the course is
	int dataval;
	Node* nextnode;
	Node* prevNode;

	//Implemented functions
	Node();
	Node(int data);
};