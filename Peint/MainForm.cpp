#include "MainForm.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>
#include <stack>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace Peint;

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
	pen = gcnew Pen(brushColor, (float)brushWidth);
	brush = gcnew SolidBrush(Color::Black);
	bmp = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
	history = gcnew History();
	Canvas = Graphics::FromImage(bmp);
	Canvas->Clear(Color::White);
	pictureBox->Image = bmp;
	history->push((Bitmap^)bmp->Clone());
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
		startX = e->X;
		startY = e->Y;
		brush->Color = brushColor;
		pen->Color = brushColor;
		pen->Width = (float)brushWidth;
		switch (currentTool)
		{
		case Tools::Brush:
			Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = bmp;
			break;
		case Tools::Spray:
			break;
		case Tools::Pipette:
			break;
		case Tools::Eraser:
			pen->Color = Color::White;
			brush->Color = Color::White;
			Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = bmp;
			break;
		case Tools::Fill:
		{
			Color targetColor = bmp->GetPixel(e->X, e->Y);
			if (compareColors(brushColor, targetColor))
			{
				return;
			}
			Generic::Stack<Point>^ pixels = gcnew Generic::Stack<Point>();
			pixels->Push(Point(startX, startY));
			while (pixels->Count != 0)
			{
				Point temp = pixels->Pop();
				int y1 = temp.Y;
				while (y1 >= 0 && bmp->GetPixel(temp.X, y1) == targetColor)
				{
					y1--;
				}
				y1++;
				bool spanLeft = false;
				bool spanRight = false;
				while (y1 < bmp->Height && bmp->GetPixel(temp.X, y1) == targetColor)
				{
					bmp->SetPixel(temp.X, y1, brushColor);
					if (!spanLeft && temp.X > 0 && bmp->GetPixel(temp.X - 1, y1) == targetColor)
					{
						pixels->Push(Point(temp.X - 1, y1));
						spanLeft = true;
					}
					else if (spanLeft && temp.X - 1 == 0 && bmp->GetPixel(temp.X - 1, y1) != targetColor)
					{
						spanLeft = false;
					}
					if (!spanRight && temp.X < bmp->Width - 1 && bmp->GetPixel(temp.X + 1, y1) == targetColor)
					{
						pixels->Push(Point(temp.X + 1, y1));
						spanRight = true;
					}
					else if (spanRight && temp.X < bmp->Width - 1 && bmp->GetPixel(temp.X + 1, y1) != targetColor)
					{
						spanRight = false;
					}
					y1++;
				}

			}
			pictureBox->Refresh();
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
		default:
			break;
		}
	}
}

System::Void MainForm::pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	switch (currentTool)
	{
	case Tools::Brush:
		break;
	case Tools::Spray:
		break;
	case Tools::Pipette:
		brushColor = bmp->GetPixel(e->X, e->Y);
		currentColor->BackColor = brushColor;
		currentTool = Tools::Brush;
		brushButton->Focus();
		break;
	case Tools::Eraser:
		break;
	case Tools::Fill:
		break;
	case Tools::Line:
		if (tempBMP != nullptr)
		{
			bmp = (Bitmap^)tempBMP->Clone();
			Canvas = Graphics::FromImage(bmp);
			pictureBox->Image = bmp;
		}
		break;
	case Tools::Ellipse:
		if (tempBMP != nullptr)
		{
			bmp = (Bitmap^)tempBMP->Clone();
			Canvas = Graphics::FromImage(bmp);
			pictureBox->Image = bmp;
		}
		break;
	case Tools::Rectangle:
		if (tempBMP != nullptr)
		{
			bmp = (Bitmap^)tempBMP->Clone();
			Canvas = Graphics::FromImage(bmp);
			pictureBox->Image = bmp;
		}
		break;
	default:
		break;
	}
	history->push((Bitmap^)bmp->Clone());
}

System::Void MainForm::pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		Drawing::Rectangle rect;
		rect.X = Math::Min(e->X, startX);
		rect.Y = Math::Min(e->Y, startY);
		rect.Width = Math::Abs(startX - e->X);
		rect.Height = Math::Abs(startY - e->Y);
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
			break;
		case Tools::Pipette:
			break;
		case Tools::Eraser:
			Canvas->DrawLine(pen, startX, startY, e->X, e->Y);
			startX = e->X;
			startY = e->Y;
			Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			pictureBox->Image = bmp;
			break;
		case Tools::Fill:
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
			tempCanvas->DrawEllipse(pen, rect);
			pictureBox->Image = tempBMP;
			break;
		case Tools::Rectangle:
		{
			tempBMP = (Bitmap^)bmp->Clone();
			tempCanvas = Graphics::FromImage(tempBMP);
			if (rect.Width != 0 && rect.Height != 0) {
				tempCanvas->DrawRectangle(pen, rect);
				tempCanvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			}
			else
			{
				if (rect.Width == 0)
					tempCanvas->DrawLine(pen, rect.X, rect.Y - brushWidth / 2, rect.X + rect.Width, rect.Y + rect.Height + brushWidth / 2);
				else 
					tempCanvas->DrawLine(pen, rect.X - brushWidth / 2, rect.Y, rect.X + rect.Width + brushWidth / 2, rect.Y + rect.Height);
			}
			pictureBox->Image = tempBMP;
			break;
		}
		default:
			break;
		}
	}
}

System::Void MainForm::backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (history->hasPrevious())
	{
		bmp = (Bitmap^)history->goBack()->Clone();
		pictureBox->Image = (Bitmap^)bmp->Clone();
		Canvas = Graphics::FromImage(bmp);
	}
}

System::Void MainForm::brushButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Brush;
}

System::Void MainForm::rectangleButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Rectangle;
}

System::Void MainForm::ellipseButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Ellipse;
}

System::Void MainForm::lineButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Line;
}

System::Void MainForm::fillButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Fill;
}

System::Void MainForm::eraserButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Eraser;
}

System::Void MainForm::pipetteButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentTool = Tools::Pipette;
}