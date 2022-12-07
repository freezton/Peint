#include <cliext/vector>

//using namespace System;
//using namespace System::Drawing;

#pragma once
public ref class History
{
private:
	int current;
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
	}

	System::Void push(System::Drawing::Bitmap^ bmp);

	System::Drawing::Bitmap^ goBack();

	System::Drawing::Bitmap^ goForward();

	System::Boolean hasNext();

	System::Boolean hasPrevious();

};