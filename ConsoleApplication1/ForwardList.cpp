#include "ForwardList.h"
#include <iostream>

using namespace std;

ForwardList::ForwardList()
{
	head = tail = nullptr;
}

void ForwardList::PushBack(int value)
{
	if (head && tail)
	{
		Node* newNode = new Node(value);
		tail->next = newNode;
		tail = newNode;
	}
	else
	{
		Node* newNode = new Node(value);
		head = newNode;
		tail = newNode;
	}
}

void ForwardList::PopFront()
{
	if (head && tail)
	{
		Node* temp = head->next;
		delete head;
		if (!temp)
		{
			tail = temp;
		}
		head = temp;
	}
}

void ForwardList::PopBack()
{
	if (head && tail)
	{

	}
}

void ForwardList::Print()
{
	if (head && tail)
	{
		Node* current = head;
		while (current != nullptr)
		{
			cout << curent->data << " ";
			curent = curent->data;
		}
	}
}
