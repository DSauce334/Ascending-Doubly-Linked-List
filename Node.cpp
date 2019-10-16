#pragma once
#include "Node.h"

Node::Node()
{
	dataval = 0;
	Node* nextNode = '\0';
	Node* prevNode = '\0';
}

Node::Node(int data)
{
	dataval = data;
	Node* nextNode = '\0';
	Node* prevNode = '\0';
}