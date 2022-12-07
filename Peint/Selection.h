#pragma once
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class DraggedFragment
{
public:
	Rectangle SourceRect;
	Point Location;
	
	Rectangle getRect();

	Void fix(Image^ image);
};