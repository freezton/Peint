#include "MainForm.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace Peint;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Peint::MainForm form;
	Application::Run(% form);
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
	//brushWidthLabel->Text = std::to_string(brushWidthBar->Value);
}

System::Void MainForm::dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
System::Void MainForm::domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {}

System::Void MainForm::ColorButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	brushColor = ColorButton1->BackColor;
}
System::Void MainForm::ColorButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	brushColor = ColorButton2->BackColor;
}

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
			break;
		case Tools::Fill:
			break;
		case Tools::Line:
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
		break;
	case Tools::Eraser:
		break;
	case Tools::Fill:
		break;
	case Tools::Line:
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
			break;
		case Tools::Fill:
			break;
		case Tools::Line:
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
	bmp = (Bitmap^)history->goBack()->Clone();
	pictureBox->Image = (Bitmap^)bmp->Clone();
	Canvas = Graphics::FromImage(bmp);
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