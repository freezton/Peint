#pragma once

namespace Peint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private:
		Graphics^ Canvas;
		Pen^ pen;
		SolidBrush^ brush;
		Bitmap^ bmp;
		Bitmap^ tempBMP;
		Color brushColor = Color::Black;
		List <Point>^ points;

		int startX;
		int startY;
		int brushWidth = 10;

		enum class Tools {
			Brush,
			Spray,
			Pipette,
			Eraser,
			Fill,
			Line,
			Ellipse,
			Rectangle
		};
		Tools currentTool = Tools::Brush;
	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aheadToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ColorButton2;
	private: System::Windows::Forms::Button^ ColorButton1;


	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->backToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aheadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ColorButton2 = (gcnew System::Windows::Forms::Button());
			this->ColorButton1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(0, 115);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(984, 397);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			this->pictureBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseDown);
			this->pictureBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseMove);
			this->pictureBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseUp);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::SystemColors::Window;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->backToolStripMenuItem, this->aheadToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(984, 24);
			this->menuStrip2->TabIndex = 2;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->backToolStripMenuItem->Text = L"Back";
			// 
			// aheadToolStripMenuItem
			// 
			this->aheadToolStripMenuItem->Name = L"aheadToolStripMenuItem";
			this->aheadToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->aheadToolStripMenuItem->Text = L"Ahead";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->ColorButton2);
			this->panel1->Controls->Add(this->ColorButton1);
			this->panel1->Location = System::Drawing::Point(433, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 85);
			this->panel1->TabIndex = 3;
			// 
			// ColorButton2
			// 
			this->ColorButton2->BackColor = System::Drawing::Color::Red;
			this->ColorButton2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ColorButton2->FlatAppearance->BorderSize = 3;
			this->ColorButton2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ColorButton2->Location = System::Drawing::Point(34, 3);
			this->ColorButton2->Name = L"ColorButton2";
			this->ColorButton2->Size = System::Drawing::Size(25, 25);
			this->ColorButton2->TabIndex = 5;
			this->ColorButton2->UseVisualStyleBackColor = false;
			this->ColorButton2->Click += gcnew System::EventHandler(this, &MainForm::ColorButton2_Click);
			// 
			// ColorButton1
			// 
			this->ColorButton1->BackColor = System::Drawing::Color::Black;
			this->ColorButton1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ColorButton1->Location = System::Drawing::Point(3, 3);
			this->ColorButton1->Name = L"ColorButton1";
			this->ColorButton1->Size = System::Drawing::Size(25, 25);
			this->ColorButton1->TabIndex = 4;
			this->ColorButton1->UseVisualStyleBackColor = false;
			this->ColorButton1->Click += gcnew System::EventHandler(this, &MainForm::ColorButton1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(984, 511);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->menuStrip2);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
		private: System::Void MainForm_Shown(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void ColorButton1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ColorButton2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
