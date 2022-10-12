#include "MainForm.h"
#include <Windows.h>
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	Peint::MainForm form;
	Application::Run(% form);
}

System::Void Peint::MainForm::dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
System::Void Peint::MainForm::domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
