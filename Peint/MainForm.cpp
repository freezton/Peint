#include "MainForm.h"
#include <Windows.h>
#include <stdio.h>
#include <time.h>

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ argv)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Peint::MainForm form;
	Application::Run(% form);
}

System::Void Peint::MainForm::MainForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(brushColor, brushWidth);
	brush = gcnew SolidBrush(Color::Black);
	bmp = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
	Canvas = Graphics::FromImage(bmp);
	Canvas->Clear(Color::White);
	pictureBox->Image = bmp;
}

System::Void Peint::MainForm::dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
System::Void Peint::MainForm::domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {}

System::Void Peint::MainForm::ColorButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	brushColor = ColorButton1->BackColor;
}

System::Void Peint::MainForm::ColorButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	brushColor = ColorButton2->BackColor;
}

System::Void Peint::MainForm::pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	startX = e->X;
	startY = e->Y;
	pen->Color = brushColor;
	pen->Width = brushWidth;
	brush->Color = brushColor;
	Canvas->FillPie(brush, e->X - brushWidth / 2, e->Y - brushWidth / 2, brushWidth, brushWidth, 0, 360);
	pictureBox->Image = bmp;
}

System::Void Peint::MainForm::pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	
}

System::Void Peint::MainForm::pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
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
			break;
		default:
			break;
		}
	}
}
