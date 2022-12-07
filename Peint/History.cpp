#include "History.h"

using namespace System;
using namespace System::Drawing;

Void History::push(System::Drawing::Bitmap^ bmp)
{
	if (history.size() == 0)
	{
		history.push_back(bmp);
	}
	else
	{
		if (current != history.size() - 1)
		{
			history.erase(history.begin() + current + 1, history.begin() + history.size());
		}
		history.push_back(bmp);
	}
	current = history.size() - 1;
}

Boolean History::hasNext()
{
	if (current == history.size() - 1)
		return false;
	return true;
}

Boolean History::hasPrevious()
{
	if (current == 0)
		return false;
	return true;
}

Bitmap^ History::goBack()
{
	if (current != 0)
		return history[--current];
}

Bitmap^ History::goForward()
{
	if (current != history.size() - 1)
		return history[++current];
}

