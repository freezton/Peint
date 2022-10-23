#include "MainForm.h"
#include <Windows.h>
#include <stdio.h>
#include <time.h>

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ argv)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	Peint::MainForm form;
	Application::Run(% form);
}

struct Point
{
	int x, y;
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

class PointsArray
{
private:
	int index = 0;

};

bool isMouseDown = false;

System::Void Peint::MainForm::dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}

System::Void Peint::MainForm::domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {}

System::Void Peint::MainForm::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	isMouseDown = true;
}

System::Void Peint::MainForm::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	isMouseDown = false;
}

System::Void Peint::MainForm::MainForm_Shown(System::Object^ sender, System::EventArgs^ e)
{

}