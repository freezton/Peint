#pragma once

using namespace System::Drawing;

typedef struct Node
{
	Point point;
	Node* next;
} Node;

public ref class PointStack
{
private:
	int size;
	Node* node;

public:
	PointStack()
	{
		this->size = 0;
		this->node = nullptr;
	}

	System::Void push(System::Drawing::Point point);
	
	System::Drawing::Point pop();
};
