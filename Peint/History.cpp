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

System::Boolean History::hasNext()
{
	if (current == history.size())
		return false;
	return true;
}

System::Boolean History::hasPrevious()
{
	if (current == 0)
		return false;
	return true;
}

System::Drawing::Bitmap^ History::goBack()
{
	if (current != 0)
		return history[--current];
}

System::Drawing::Bitmap^ History::goForward()
{
	if (current != history.size()-1)
		return history[++current];
}