#include "MainForm.h"
#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace Peint;

void main(array<String^>^ argv)
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
		break;
	case Tools::Rectangle:
		bmp = (Bitmap^)tempBMP->Clone();
		Canvas = Graphics::FromImage(bmp);
		pictureBox->Image = bmp;
		break;
	default:
		break;
	}
}

System::Void MainForm::pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
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
			break;
		case Tools::Rectangle:
		{
			tempBMP = (Bitmap^)bmp->Clone();
			tempCanvas = Graphics::FromImage(tempBMP);
			rectStart.X = Math::Min(e->X, startX);
			rectStart.Y = Math::Min(e->Y, startY);
			rectEnd.X = Math::Max(e->X, startX);
			rectEnd.Y = Math::Max(e->Y, startY);
			rectSize.Width = Math::Abs(startX - e->X);
			rectSize.Height = Math::Abs(startY - e->Y);

			if (rectSize.Width != 0 && rectSize.Height != 0) {
				tempCanvas->DrawRectangle(pen, rectStart.X, rectStart.Y, rectSize.Width, rectSize.Height);
				tempCanvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
			}
			else
			{
				if (rectSize.Width == 0)
					tempCanvas->DrawLine(pen, rectStart.X, rectStart.Y - brushWidth / 2, rectEnd.X, rectEnd.Y + brushWidth / 2);
				else 
					tempCanvas->DrawLine(pen, rectStart.X - brushWidth / 2, rectStart.Y, rectEnd.X + brushWidth / 2, rectEnd.Y);
			}
			pictureBox->Image = tempBMP;
			break;
		}
		default:
			break;
		}
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
