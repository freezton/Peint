#include "Selection.h"

Rectangle DraggedFragment::getRect()
{
	return Rectangle(Location, SourceRect.Size);
}

Void DraggedFragment::fix(Image^ image)
{
	Image^ clone = (Image^)image->Clone();
	Graphics^ gr = Graphics::FromImage(image);
	
	gr->SetClip(SourceRect);
	gr->Clear(Color::White);

	gr->SetClip(DraggedFragment::getRect());
	gr->DrawImage(clone, Location.X - SourceRect.X, Location.Y - SourceRect.Y);

}