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
	/// —водка дл€ MainForm
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
		/// ќсвободить все используемые ресурсы.
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
		Graphics^ tempCanvas;
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

		Point rectStart;
		Point rectEnd;
		Drawing::Size rectSize;

	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aheadToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ColorButton2;
	private: System::Windows::Forms::Button^ ColorButton1;
	private: System::Windows::Forms::Panel^ pictureBoxPanel;
	private: System::Windows::Forms::TrackBar^ brushWidthBar;
	private: System::Windows::Forms::NumericUpDown^ brushWidhtUpDown;
	private: System::Windows::Forms::Button^ rectangleButton;
	private: System::Windows::Forms::Button^ brushButton;



	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->pictureBoxPanel = (gcnew System::Windows::Forms::Panel());
			this->brushWidthBar = (gcnew System::Windows::Forms::TrackBar());
			this->brushWidhtUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->rectangleButton = (gcnew System::Windows::Forms::Button());
			this->brushButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pictureBoxPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brushWidthBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brushWidhtUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(-1, -1);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(963, 400);
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
			this->panel1->Location = System::Drawing::Point(591, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 69);
			this->panel1->TabIndex = 3;
			// 
			// ColorButton2
			// 
			this->ColorButton2->BackColor = System::Drawing::Color::Fuchsia;
			this->ColorButton2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ColorButton2->FlatAppearance->BorderSize = 3;
			this->ColorButton2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ColorButton2->Location = System::Drawing::Point(3, 39);
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
			// pictureBoxPanel
			// 
			this->pictureBoxPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxPanel->Controls->Add(this->pictureBox);
			this->pictureBoxPanel->Location = System::Drawing::Point(9, 99);
			this->pictureBoxPanel->Name = L"pictureBoxPanel";
			this->pictureBoxPanel->Size = System::Drawing::Size(963, 400);
			this->pictureBoxPanel->TabIndex = 6;
			// 
			// brushWidthBar
			// 
			this->brushWidthBar->Location = System::Drawing::Point(165, 27);
			this->brushWidthBar->Maximum = 30;
			this->brushWidthBar->Minimum = 1;
			this->brushWidthBar->Name = L"brushWidthBar";
			this->brushWidthBar->Size = System::Drawing::Size(152, 45);
			this->brushWidthBar->TabIndex = 7;
			this->brushWidthBar->Value = 10;
			this->brushWidthBar->ValueChanged += gcnew System::EventHandler(this, &MainForm::brushWidthBar_ValueChanged);
			// 
			// brushWidhtUpDown
			// 
			this->brushWidhtUpDown->Location = System::Drawing::Point(165, 67);
			this->brushWidhtUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->brushWidhtUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->brushWidhtUpDown->Name = L"brushWidhtUpDown";
			this->brushWidhtUpDown->Size = System::Drawing::Size(152, 20);
			this->brushWidhtUpDown->TabIndex = 1;
			this->brushWidhtUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->brushWidhtUpDown->ValueChanged += gcnew System::EventHandler(this, &MainForm::brushWidhtUpDown_ValueChanged);
			// 
			// rectangleButton
			// 
			this->rectangleButton->Location = System::Drawing::Point(96, 49);
			this->rectangleButton->Name = L"rectangleButton";
			this->rectangleButton->Size = System::Drawing::Size(40, 38);
			this->rectangleButton->TabIndex = 8;
			this->rectangleButton->Text = L"Rect";
			this->rectangleButton->UseVisualStyleBackColor = true;
			this->rectangleButton->Click += gcnew System::EventHandler(this, &MainForm::rectangleButton_Click);
			// 
			// brushButton
			// 
			this->brushButton->Location = System::Drawing::Point(38, 49);
			this->brushButton->Name = L"brushButton";
			this->brushButton->Size = System::Drawing::Size(42, 38);
			this->brushButton->TabIndex = 9;
			this->brushButton->Text = L"br";
			this->brushButton->UseVisualStyleBackColor = true;
			this->brushButton->Click += gcnew System::EventHandler(this, &MainForm::brushButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::MenuBar;
			this->ClientSize = System::Drawing::Size(984, 511);
			this->Controls->Add(this->brushButton);
			this->Controls->Add(this->rectangleButton);
			this->Controls->Add(this->brushWidhtUpDown);
			this->Controls->Add(this->brushWidthBar);
			this->Controls->Add(this->pictureBoxPanel);
			this->Controls->Add(this->panel1);
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
			this->pictureBoxPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brushWidthBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brushWidhtUpDown))->EndInit();
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
	private: System::Void brushWidthBar_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void brushWidhtUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void rectangleButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void brushButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
