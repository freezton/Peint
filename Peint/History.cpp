#include "History.h"

System::Void History::push(System::Drawing::Bitmap^ bmp)
{
	if (history.size() == 0)
	{
		history.push_back(bmp);
	}
	else
	{
		history.push_back(bmp);
		current++;
	}
}

System::Drawing::Bitmap^ History::goBack()
{
	return history[--current];
}

System::Drawing::Bitmap^ History::goForward()
{
	return history[++current];
}