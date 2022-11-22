#include "Stack.h"

using namespace System;
using namespace System::Drawing;

Void PointStack::push(Point point)
{
	if (this->node == nullptr)
	{
		this->node = new Node;
		this->node->point = point;
		this->node->next = nullptr;
	}
}

Point PointStack::pop()
{
	return this->node->point;
}