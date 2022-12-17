#include "MainForm.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>
#include "NewFileForm.h"
#include "AboutForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace Peint;

[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Peint::MainForm form;
	Application::Run(% form);
}

bool compareColors(Color first, Color second)
{
	return (first.R == second.R) && (first.G == second.G) && (first.B == second.B);
}

System::Void MainForm::colorButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton1->BackColor;
	currentColor->BackColor = colorButton1->BackColor;
}
System::Void MainForm::colorButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton2->BackColor;
	currentColor->BackColor = colorButton2->BackColor;
}
System::Void MainForm::colorButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton3->BackColor;
	currentColor->BackColor = colorButton3->BackColor;
}
System::Void MainForm::colorButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton4->BackColor;
	currentColor->BackColor = colorButton4->BackColor;
}
System::Void MainForm::colorButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton5->BackColor;
	currentColor->BackColor = colorButton5->BackColor;
}
System::Void MainForm::colorButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton6->BackColor;
	currentColor->BackColor = colorButton6->BackColor;
}
System::Void MainForm::colorButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton7->BackColor;
	currentColor->BackColor = colorButton7->BackColor;
}
System::Void MainForm::colorButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton8->BackColor;
	currentColor->BackColor = colorButton8->BackColor;
}
System::Void MainForm::colorButton9_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton9->BackColor;
	currentColor->BackColor = colorButton9->BackColor;
}
System::Void MainForm::colorButton10_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton10->BackColor;
	currentColor->BackColor = colorButton10->BackColor;
}
System::Void MainForm::colorButton11_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton11->BackColor;
	currentColor->BackColor = colorButton11->BackColor;
}
System::Void MainForm::colorButton12_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton12->BackColor;
	currentColor->BackColor = colorButton12->BackColor;
}
System::Void MainForm::colorButton13_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton13->BackColor;
	currentColor->BackColor = colorButton13->BackColor;
}
System::Void MainForm::colorButton14_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton14->BackColor;
	currentColor->BackColor = colorButton14->BackColor;
}
System::Void MainForm::colorButton15_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton15->BackColor;
	currentColor->BackColor = colorButton15->BackColor;
}
System::Void MainForm::colorButton16_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton16->BackColor;
	currentColor->BackColor = colorButton16->BackColor;
}
System::Void MainForm::colorButton17_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton17->BackColor;
	currentColor->BackColor = colorButton17->BackColor;
}
System::Void MainForm::colorButton18_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton18->BackColor;
	currentColor->BackColor = colorButton18->BackColor;
}
System::Void MainForm::colorButton19_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton19->BackColor;
	currentColor->BackColor = colorButton19->BackColor;
}
System::Void MainForm::colorButton20_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton20->BackColor;
	currentColor->BackColor = colorButton20->BackColor;
}
System::Void MainForm::colorButton21_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton21->BackColor;
	currentColor->BackColor = colorButton21->BackColor;
}
System::Void MainForm::colorButton22_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton22->BackColor;
	currentColor->BackColor = colorButton22->BackColor;
}
System::Void MainForm::colorButton23_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton23->BackColor;
	currentColor->BackColor = colorButton23->BackColor;
}
System::Void MainForm::colorButton24_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton24->BackColor;
	currentColor->BackColor = colorButton24->BackColor;
}
System::Void MainForm::colorButton25_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton25->BackColor;
	currentColor->BackColor = colorButton25->BackColor;
}
System::Void MainForm::colorButton26_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton26->BackColor;
	currentColor->BackColor = colorButton26->BackColor;
}
System::Void MainForm::colorButton27_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton27->BackColor;
	currentColor->BackColor = colorButton27->BackColor;
}
System::Void MainForm::colorButton28_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton28->BackColor;
	currentColor->BackColor = colorButton28->BackColor;
}
System::Void MainForm::colorButton29_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton29->BackColor;
	currentColor->BackColor = colorButton29->BackColor;
}
System::Void MainForm::colorButton30_Click(System::Object^ sender, System::EventArgs^ e) {
	brushColor = colorButton30->BackColor;
	currentColor->BackColor = colorButton30->BackColor;
}

System::Void MainForm::editColor_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (colorDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		brushColor = colorDialog->Color;
		currentColor->BackColor = colorDialog->Color;
		if (colorButton21->Enabled == false)
		{
			colorButton21->Enabled = true;
			colorButton21->BackColor = brushColor;
			colorButton21->Focus();
		}
		else if (colorButton21->Enabled == false)
		{
			colorButton21->Enabled = true;
			colorButton21->BackColor = brushColor;
			colorButton21->Focus();
		}
		else if (colorButton22->Enabled == false)
		{
			colorButton22->Enabled = true;
			colorButton22->BackColor = brushColor;
			colorButton22->Focus();
		}
		else if (colorButton23->Enabled == false)
		{
			colorButton23->Enabled = true;
			colorButton23->BackColor = brushColor;
			colorButton23->Focus();
		}
		else if (colorButton24->Enabled == false)
		{
			colorButton24->Enabled = true;
			colorButton24->BackColor = brushColor;
			colorButton24->Focus();
		}
		else if (colorButton25->Enabled == false)
		{
			colorButton25->Enabled = true;
			colorButton25->BackColor = brushColor;
			colorButton25->Focus();
		}
		else if (colorButton26->Enabled == false)
		{
			colorButton26->Enabled = true;
			colorButton26->BackColor = brushColor;
			colorButton26->Focus();
		}
		else if (colorButton27->Enabled == false)
		{
			colorButton27->Enabled = true;
			colorButton27->BackColor = brushColor;
			colorButton27->Focus();
		}
		else if (colorButton28->Enabled == false)
		{
			colorButton28->Enabled = true;
			colorButton28->BackColor = brushColor;
			colorButton28->Focus();
		}
		else if (colorButton29->Enabled == false)
		{
			colorButton29->Enabled = true;
			colorButton29->BackColor = brushColor;
			colorButton29->Focus();
		}
		else if (colorButton30->Enabled == false)
		{
			colorButton30->Enabled = true;
			colorButton30->BackColor = brushColor;
			colorButton30->Focus();
		}
		else
		{
			colorButton21->BackColor = colorButton22->BackColor;
			colorButton22->BackColor = colorButton23->BackColor;
			colorButton23->BackColor = colorButton24->BackColor;
			colorButton24->BackColor = colorButton25->BackColor;
			colorButton25->BackColor = colorButton26->BackColor;
			colorButton26->BackColor = colorButton27->BackColor;
			colorButton27->BackColor = colorButton28->BackColor;
			colorButton28->BackColor = colorButton29->BackColor;
			colorButton29->BackColor = colorButton30->BackColor;
			colorButton30->BackColor = brushColor;
			colorButton30->Focus();
		}
	}
}

System::Void MainForm::MainForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	srand(time(NULL));
	pen = gcnew Pen(brushColor, (float)brushWidth);
	brush = gcnew SolidBrush(Color::Black);
	bmp = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
	history = gcnew History();
	file = gcnew FileManager();

	MainForm::Text = file->getFileName() + " - Pixelmaker";
	Canvas = Graphics::FromImage(bmp);
	Canvas->Clear(Color::White);
	pictureBox->Image = bmp;
	history->push((Bitmap^)bmp->Clone());
	brushButton->Focus();
}

System::Void MainForm::dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
System::Void MainForm::domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {}

System::Void MainForm::brushWidthBar_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	brushWidth = brushWidthBar->Value;
	pen->Width = (float)brushWidth;
	brushWidhtUpDown->Value = brushWidth;
}

System::Void MainForm::brushWidhtUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	brushWidth = Decimal::ToInt32(brushWidhtUpDown->Value);
	pen->Width = (float)brushWidth;
	brushWidhtUpDown->Value = brushWidth;
}

System::Void MainForm::pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		if (!file->isNeedSave()) {
			file->setNeedSave(true);
		}
		startX = e->X;
		startY = e->Y;
		brush->Color = brushColor;
		pen->Color = brushColor;
		pen->Width = (float)brushWidth;
		int sprayWidth = brushWidth < 2 ? 2 : brushWidth;
		switch (currentTool)
		{
		case Tools::Brush:
			Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = bmp;
			break;
		case Tools::Spray:
			for (int i = 0; i < 25; i++) {
				int r = rand() % (sprayWidth / 2);
				int deg = rand() % 360;
				int x = round(r * cos(Math::PI / 180 * deg));
				int y = round(r * sin(Math::PI / 180 * deg));
				Canvas->FillPie(brush, startX - x, startY - y, 2, 2, 0, 360);
			}
			sprayTimer->Enabled = true;
			break;
		case Tools::Eraser:
			pen->Color = Color::White;
			brush->Color = Color::White;
			Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = bmp;
			break;
		case Tools::Fill:
		{
			Drawer::Drawer::Fill(bmp, brush->Color, Point(startX, startY));
			pictureBox->Image = bmp;
			break;
		}
		case Tools::Line:
			Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = bmp;
			break;
		case Tools::Ellipse:
			break;
		case Tools::Rectangle:
			break;
		case Tools::Selection:
			if (draggedFragment != nullptr && !draggedFragment->getRect().Contains(e->Location))
			{
				draggedFragment = nullptr;
				pictureBox->Invalidate();
				deselectButton->Enabled = false;
				cutButton->Enabled = false;
			}
			break;
		default:
			break;
		}
	}
}

System::Void MainForm::pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	sprayTimer->Enabled = false;
	if (currentTool == Tools::Pipette)
	{
		brushColor = bmp->GetPixel(e->X, e->Y);
		currentColor->BackColor = brushColor;
		currentTool = Tools::Brush;
		brushButton->Focus();
	}
	else if (currentTool == Tools::Line || currentTool == Tools::Ellipse || currentTool == Tools::Rectangle)
	{
		bmp = (Bitmap^)tempBMP->Clone();
		Canvas = Graphics::FromImage(bmp);
		pictureBox->Image = bmp;
	}
	else if (currentTool == Tools::Selection)
	{
		if (mousePos1 != mousePos2)
		{
			draggedFragment = gcnew DraggedFragment();
			draggedFragment->SourceRect = rect;
			draggedFragment->Location = rect.Location;
			deselectButton->Enabled = true;
			cutButton->Enabled = true;
		}
		else
		{
			if (draggedFragment != nullptr)
			{
				draggedFragment->fix(pictureBox->Image);
				draggedFragment = nullptr;
				mousePos1 = e->Location;
				mousePos2 = e->Location;
				deselectButton->Enabled = false;
				cutButton->Enabled = false;
			}
		}
		pictureBox->Invalidate();
	}
	history->push((Bitmap^)bmp->Clone());
	backToolStripMenuItem->Enabled = true;
	aheadToolStripMenuItem->Enabled = false;
}

System::Void MainForm::pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		rect.X = Math::Min(e->X, startX);
		rect.Y = Math::Min(e->Y, startY);
		rect.Width = Math::Abs(startX - e->X);
		rect.Height = Math::Abs(startY - e->Y);
		int sprayWidth = brushWidth < 2 ? 2 : brushWidth;
		switch (currentTool)
		{
		case Tools::Brush:
			Canvas->DrawLine(pen, startX, startY, e->X, e->Y);
			startX = e->X;
			startY = e->Y;
			Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = bmp;
			break;
		case Tools::Spray:
			brush->Color = brushColor;
			for (int i = 0; i < 25; i++) {
				int r = rand() % (sprayWidth / 2);
				int deg = rand() % 360;
				int x = round(r * cos(Math::PI / 180 * deg));
				int y = round(r * sin(Math::PI / 180 * deg));
				Canvas->FillPie(brush, startX - x, startY - y, 2, 2, 0, 360);
			}
			startX = e->X;
			startY = e->Y;
			pictureBox->Image = bmp;
			break;
		case Tools::Eraser:
			Canvas->DrawLine(pen, startX, startY, e->X, e->Y);
			startX = e->X;
			startY = e->Y;
			Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = bmp;
			break;
		case Tools::Line:
			tempBMP = (Bitmap^)bmp->Clone();
			tempCanvas = Graphics::FromImage(tempBMP);
			tempCanvas->DrawLine(pen, startX, startY, e->X, e->Y);
			tempCanvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = tempBMP;
			break;
		case Tools::Ellipse:
			tempBMP = (Bitmap^)bmp->Clone();
			tempCanvas = Graphics::FromImage(tempBMP);
			if (needFill || (rect.Width < pen->Width*2 || rect.Height < pen->Width*2))
				tempCanvas->FillEllipse(brush, rect);
			else
				tempCanvas->DrawEllipse(pen, Rectangle(rect.X + pen->Width / 2, rect.Y + pen->Width / 2, rect.Width - pen->Width, rect.Height - pen->Width));
			pictureBox->Image = tempBMP;
			break;
		case Tools::Rectangle:
		{
			tempBMP = (Bitmap^)bmp->Clone();
			tempCanvas = Graphics::FromImage(tempBMP);
			if (rect.Width != 0 && rect.Height != 0) {
				if (needFill || (rect.Width < pen->Width * 2 || rect.Height < pen->Width * 2))
					tempCanvas->FillRectangle(brush, rect);
				else
					tempCanvas->DrawRectangle(pen, Rectangle(rect.X + pen->Width / 2, rect.Y + pen->Width / 2, rect.Width - pen->Width, rect.Height - pen->Width));
			}
			pictureBox->Image = tempBMP;
			break;
		}
		case Tools::Selection:
		{
			if (draggedFragment != nullptr)
			{
				draggedFragment->Location.Offset(e->Location.X - mousePos2.X, e->Location.Y - mousePos2.Y);
				mousePos1 = e->Location;
			}
			mousePos2 = e->Location;
			pictureBox->Invalidate();
			break;
		}
		default:
			break;
		}
	}
	else
	{
		mousePos1 = e->Location;
		mousePos2 = e->Location;
	}
}

System::Void MainForm::sprayTimer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	brush->Color = brushColor;
	int sprayWidth = brushWidth < 2 ? 2 : brushWidth;
	for (int i = 0; i < 25; i++) {
		int r = rand() % (sprayWidth / 2);
		int deg = rand() % 360;
		int x = round(r * cos(Math::PI / 180 * deg));
		int y = round(r * sin(Math::PI / 180 * deg));
		Canvas->FillPie(brush, startX - x, startY - y, 2, 2, 0, 360);
	}
	pictureBox->Image = bmp;
}

Rectangle getRect(Point p1, Point p2)
{
	int x1 = Math::Min(p1.X, p2.X);
	int x2 = Math::Max(p1.X, p2.X);
	int y1 = Math::Min(p1.Y, p2.Y);
	int y2 = Math::Max(p1.Y, p2.Y);
	return Rectangle(x1, y1, x2 - x1, y2 - y1);
}

System::Void MainForm::pictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	ControlPaint^ c;
	if (draggedFragment != nullptr)
	{
		e->Graphics->SetClip(draggedFragment->SourceRect);
		e->Graphics->Clear(Color::White);

		e->Graphics->SetClip(draggedFragment->getRect());
		e->Graphics->DrawImage(pictureBox->Image, draggedFragment->Location.X - draggedFragment->SourceRect.X, draggedFragment->Location.Y - draggedFragment->SourceRect.Y);

		e->Graphics->ResetClip();
		c->DrawFocusRectangle(e->Graphics, draggedFragment->getRect());
	}
	else
	{
		if (mousePos1 != mousePos2)
			c->DrawFocusRectangle(e->Graphics, getRect(mousePos1, mousePos2));
	}
}

System::Void MainForm::backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (history->hasPrevious())
	{
		bmp = (Bitmap^)history->goBack()->Clone();
		pictureBox->Image = (Bitmap^)bmp->Clone();
		Canvas = Graphics::FromImage(bmp);
		aheadToolStripMenuItem->Enabled = true;
	}
	if (!history->hasPrevious())
		backToolStripMenuItem->Enabled = false;
}

System::Void MainForm::aheadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (history->hasNext())
	{
		bmp = (Bitmap^)history->goForward()->Clone();
		pictureBox->Image = (Bitmap^)bmp->Clone();
		Canvas = Graphics::FromImage(bmp);
		backToolStripMenuItem->Enabled = true;
	}
	if (!history->hasNext())
		aheadToolStripMenuItem->Enabled = false;
}

System::Void MainForm::newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Windows::Forms::DialogResult result;
	if (file->isNeedSave()) {
		result = Windows::Forms::MessageBox::Show(L"Do you want to save changes to the file " + file->getFileName() + L"?", L"Save", MessageBoxButtons::YesNoCancel);
		if (result == Windows::Forms::DialogResult::Yes) {
			file->save(pictureBox->Image);
		}
	}
	if (result == Windows::Forms::DialogResult::No || !file->isNeedSave()) {
		NewFileForm^ newFileDialog = gcnew NewFileForm();
		newFileDialog->ShowDialog();
		if (newFileDialog->isCreated) {
			file = gcnew FileManager(newFileDialog->width, newFileDialog->height);
			MainForm::Text = file->getFileName() + " - Pixelmaker";
			bmp = file->getBmp();
			pictureBox->Width = bmp->Width;
			pictureBox->Height = bmp->Height;
			pictureBox->Image = bmp;
			Canvas = Graphics::FromImage(bmp);
			Canvas->Clear(Color::White);
			Canvas->FillPie(gcnew SolidBrush(bmp->GetPixel(1, 1)), 1, 1, 1, 1, 0, 360);
			history = gcnew History();
			history->push((Bitmap^)bmp->Clone());
			pictureBoxPanel->HorizontalScroll->Value = 0;
			pictureBoxPanel->VerticalScroll->Value = 0;
			pictureBoxPanel->Width = Math::Min(pictureBox->Width + 1, 1327);
			pictureBoxPanel->Height = Math::Min(pictureBox->Height + 1, 598);
		}
	}
}

System::Void MainForm::openFile() {
	if (file->open()) {
		MainForm::Text = file->getFileName() + " - Pixelmaker";
		bmp = file->getBmp();
		pictureBox->Width = bmp->Width;
		pictureBox->Height = bmp->Height;
		pictureBox->Image = bmp;
		Canvas = Graphics::FromImage(bmp);
		Canvas->FillPie(gcnew SolidBrush(bmp->GetPixel(1, 1)), 1, 1, 1, 1, 0, 360);
		history = gcnew History();
		history->push((Bitmap^)bmp->Clone());
	}
}

System::Void MainForm::openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Windows::Forms::DialogResult result;
	if (file->isNeedSave()) {
		result = Windows::Forms::MessageBox::Show(L"Do you want to save changes to the file " + file->getFileName() + L"?", L"Save", MessageBoxButtons::YesNoCancel);
		if (result == Windows::Forms::DialogResult::Yes) {
			if (file->save(pictureBox->Image)) {
				openFile();
			}
		}
	}
	if (result == Windows::Forms::DialogResult::No || !file->isNeedSave()) {
		openFile();
	}
}

System::Void MainForm::saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	file->save(pictureBox->Image);
	MainForm::Text = file->getFileName() + " - Pixelmaker";
}

System::Void MainForm::saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	file->saveAs(pictureBox->Image);
	MainForm::Text = file->getFileName() + " - Pixelmaker";
}

System::Void MainForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AboutForm^ form = gcnew AboutForm();
	form->Show();
}

System::Void MainForm::deselect()
{
	if (draggedFragment != nullptr)
	{
		draggedFragment = nullptr;
		pictureBox->Invalidate();
		deselectButton->Enabled = false;
		cutButton->Enabled = false;
	}
}

System::Void MainForm::brushButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Brush;
	withFillButton->Enabled = false;
	withoutFillButton->Enabled = false;
	deselect();
}

System::Void MainForm::rectangleButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Rectangle;
	withFillButton->Enabled = true;
	withoutFillButton->Enabled = true;
	deselect();
}

System::Void MainForm::ellipseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Ellipse;
	withFillButton->Enabled = true;
	withoutFillButton->Enabled = true;
	deselect();
}

System::Void MainForm::lineButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Line;
	withFillButton->Enabled = false;
	withoutFillButton->Enabled = false;
	deselect();
}

System::Void MainForm::fillButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Fill;
	withFillButton->Enabled = false;
	withoutFillButton->Enabled = false;
	deselect();
}

System::Void MainForm::eraserButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Eraser;
	withFillButton->Enabled = false;
	withoutFillButton->Enabled = false;
	deselect();
}

System::Void MainForm::pipetteButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Pipette;
	withFillButton->Enabled = false;
	withoutFillButton->Enabled = false;
	deselect();
}

System::Void MainForm::sprayButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Spray;
	withFillButton->Enabled = false;
	withoutFillButton->Enabled = false;
	deselect();
}

System::Void MainForm::selectionButton_Click(System::Object^ sender, System::EventArgs^ e) {
	currentTool = Tools::Selection;
}

System::Void MainForm::deselectButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	deselect();
}

System::Void MainForm::cutButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (draggedFragment != nullptr)
	{
		Canvas->FillRectangle(gcnew SolidBrush(Color::White), draggedFragment->SourceRect);
		pictureBox->Image = bmp;
	}
	draggedFragment = nullptr;
	deselectButton->Enabled = false;
	cutButton->Enabled = false;
}

System::Void MainForm::withFillButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	needFill = true;
}

System::Void MainForm::withoutFillButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	needFill = false;
}

System::Void MainForm::MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Windows::Forms::DialogResult result;
	if (file->isNeedSave()) {
		result = Windows::Forms::MessageBox::Show(L"Do you want to save changes to the file " + file->getFileName() + L"?", L"Save", MessageBoxButtons::YesNoCancel);
		if (result == Windows::Forms::DialogResult::Yes) {
			file->save(pictureBox->Image);
		}
	}
	file->setNeedSave(false);
}