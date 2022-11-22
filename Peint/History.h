#include <cliext/vector>

//using namespace System;
//using namespace System::Drawing;

#pragma once
public ref class History
{
private:
	int current;
	int maxSize;
	cliext::vector<System::Drawing::Bitmap^> history;

protected:
	~History()
	{
		delete history;
	}

public:
	History()
	{
		this->current = 0;
		this->maxSize = 50;
	}
	History(int maxSize)
	{
		this->current = 0;
		this->maxSize = maxSize;
	}

	System::Void push(System::Drawing::Bitmap^ bmp);

	System::Drawing::Bitmap^ goBack();

	System::Drawing::Bitmap^ goForward();

	System::Boolean hasNext();

};