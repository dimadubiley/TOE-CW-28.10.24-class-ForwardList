#pragma once
class Node
{
	int data;
	Node* next;
public:
	Node(): data(0), next(nullptr){}
	Node(int value)
		: data (value), next(nullptr)
	{}

};

class ForwardList
{
	Node* head;
	Node* tail;
public:
	ForwardList();
	void PushBack(int value);
	void PopFront();
	void PopBack();
	void Print();
};

