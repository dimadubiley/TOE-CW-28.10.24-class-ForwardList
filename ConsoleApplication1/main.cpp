#include <iostream>
#include "ForwardList.h"

using namespace std;

int main()
{
	ForwardList list;
	list.PushBack(1);
	list.PushBack(3);
	list.Print();
	list.PopFront();
	list.Print();
}