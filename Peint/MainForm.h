#include "History.h"
#include "Selection.h"
#include "FileManager.h"

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
		History^ history;
		Rectangle rect;
		Point mousePos1;
		Point mousePos2;
		DraggedFragment^ draggedFragment;
		FileManager^ file;

		int startX;
		int startY;
		int brushWidth = 3;
		bool needFill = false;
		bool needCut = false;

		enum class Tools {
			Pointer,
			Brush,
			Spray,
			Pipette,
			Eraser,
			Fill,
			Line,
			Ellipse,
			Rectangle,
			Selection
		};
		Tools currentTool = Tools::Brush;

		//Point rectStart;
		//Point rectEnd;
		//Drawing::Size rectSize;

	private: System::Windows::Forms::PictureBox^ pictureBox;

	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aheadToolStripMenuItem;
	private: System::Windows::Forms::Button^ colorButton1;

	private: System::Windows::Forms::Panel^ pictureBoxPanel;
	private: System::Windows::Forms::TrackBar^ brushWidthBar;
	private: System::Windows::Forms::NumericUpDown^ brushWidhtUpDown;
	private: System::Windows::Forms::Button^ rectangleButton;
	private: System::Windows::Forms::Button^ brushButton;
	private: System::Windows::Forms::Button^ ellipseButton;
	private: System::Windows::Forms::Button^ lineButton;
	private: System::Windows::Forms::Button^ fillButton;
	private: System::Windows::Forms::Button^ eraserButton;
	private: System::Windows::Forms::Button^ pipetteButton;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ sprayButton;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ Colors;
	private: System::Windows::Forms::Button^ colorButton30;



	private: System::Windows::Forms::Button^ colorButton29;

	private: System::Windows::Forms::Button^ colorButton28;

	private: System::Windows::Forms::Button^ colorButton27;

	private: System::Windows::Forms::Button^ colorButton26;

	private: System::Windows::Forms::Button^ colorButton25;

	private: System::Windows::Forms::Button^ colorButton24;

	private: System::Windows::Forms::Button^ colorButton23;

	private: System::Windows::Forms::Button^ colorButton22;

	private: System::Windows::Forms::Button^ colorButton21;

	private: System::Windows::Forms::Button^ colorButton20;

	private: System::Windows::Forms::Button^ colorButton19;

	private: System::Windows::Forms::Button^ colorButton18;

	private: System::Windows::Forms::Button^ colorButton17;

	private: System::Windows::Forms::Button^ colorButton16;

	private: System::Windows::Forms::Button^ colorButton15;

	private: System::Windows::Forms::Button^ colorButton14;

	private: System::Windows::Forms::Button^ colorButton13;

	private: System::Windows::Forms::Button^ colorButton12;

	private: System::Windows::Forms::Button^ colorButton11;

	private: System::Windows::Forms::Button^ colorButton10;

private: System::Windows::Forms::Button^ colorButton9;

private: System::Windows::Forms::Button^ colorButton8;

private: System::Windows::Forms::Button^ colorButton7;

private: System::Windows::Forms::Button^ colorButton6;

private: System::Windows::Forms::Button^ colorButton5;

private: System::Windows::Forms::Button^ colorButton4;

private: System::Windows::Forms::Button^ colorButton3;

private: System::Windows::Forms::Button^ colorButton2;
private: System::Windows::Forms::Button^ currentColor;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ editColor;
private: System::Windows::Forms::ColorDialog^ colorDialog;
private: System::Windows::Forms::Label^ Size;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ selectionButton;
private: System::Windows::Forms::Button^ deselectButton;

private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Button^ cutButton;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::RadioButton^ withoutFillButton;
private: System::Windows::Forms::RadioButton^ withFillButton;
private: System::Windows::Forms::Timer^ sprayTimer;
private: System::ComponentModel::IContainer^ components;






	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->backToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aheadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorButton1 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxPanel = (gcnew System::Windows::Forms::Panel());
			this->brushWidthBar = (gcnew System::Windows::Forms::TrackBar());
			this->brushWidhtUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->rectangleButton = (gcnew System::Windows::Forms::Button());
			this->brushButton = (gcnew System::Windows::Forms::Button());
			this->ellipseButton = (gcnew System::Windows::Forms::Button());
			this->lineButton = (gcnew System::Windows::Forms::Button());
			this->fillButton = (gcnew System::Windows::Forms::Button());
			this->eraserButton = (gcnew System::Windows::Forms::Button());
			this->pipetteButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->sprayButton = (gcnew System::Windows::Forms::Button());
			this->selectionButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Size = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->editColor = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->currentColor = (gcnew System::Windows::Forms::Button());
			this->colorButton30 = (gcnew System::Windows::Forms::Button());
			this->colorButton29 = (gcnew System::Windows::Forms::Button());
			this->colorButton28 = (gcnew System::Windows::Forms::Button());
			this->colorButton27 = (gcnew System::Windows::Forms::Button());
			this->colorButton26 = (gcnew System::Windows::Forms::Button());
			this->colorButton25 = (gcnew System::Windows::Forms::Button());
			this->colorButton24 = (gcnew System::Windows::Forms::Button());
			this->colorButton23 = (gcnew System::Windows::Forms::Button());
			this->colorButton22 = (gcnew System::Windows::Forms::Button());
			this->colorButton21 = (gcnew System::Windows::Forms::Button());
			this->colorButton20 = (gcnew System::Windows::Forms::Button());
			this->colorButton19 = (gcnew System::Windows::Forms::Button());
			this->colorButton18 = (gcnew System::Windows::Forms::Button());
			this->colorButton17 = (gcnew System::Windows::Forms::Button());
			this->colorButton16 = (gcnew System::Windows::Forms::Button());
			this->colorButton15 = (gcnew System::Windows::Forms::Button());
			this->colorButton14 = (gcnew System::Windows::Forms::Button());
			this->colorButton13 = (gcnew System::Windows::Forms::Button());
			this->colorButton12 = (gcnew System::Windows::Forms::Button());
			this->colorButton11 = (gcnew System::Windows::Forms::Button());
			this->colorButton10 = (gcnew System::Windows::Forms::Button());
			this->colorButton9 = (gcnew System::Windows::Forms::Button());
			this->colorButton8 = (gcnew System::Windows::Forms::Button());
			this->colorButton7 = (gcnew System::Windows::Forms::Button());
			this->colorButton6 = (gcnew System::Windows::Forms::Button());
			this->colorButton5 = (gcnew System::Windows::Forms::Button());
			this->colorButton4 = (gcnew System::Windows::Forms::Button());
			this->colorButton3 = (gcnew System::Windows::Forms::Button());
			this->colorButton2 = (gcnew System::Windows::Forms::Button());
			this->Colors = (gcnew System::Windows::Forms::Label());
			this->colorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->withoutFillButton = (gcnew System::Windows::Forms::RadioButton());
			this->withFillButton = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->deselectButton = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cutButton = (gcnew System::Windows::Forms::Button());
			this->sprayTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->menuStrip->SuspendLayout();
			this->pictureBoxPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brushWidthBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brushWidhtUpDown))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox
			// 
			this->pictureBox->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.BackgroundImage")));
			this->pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox->Location = System::Drawing::Point(-1, -1);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(1326, 597);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			this->pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::pictureBox_Paint);
			this->pictureBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseDown);
			this->pictureBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseMove);
			this->pictureBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox_MouseUp);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveAsToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// menuStrip
			// 
			this->menuStrip->BackColor = System::Drawing::SystemColors::Window;
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->backToolStripMenuItem, this->aheadToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(1386, 24);
			this->menuStrip->TabIndex = 2;
			this->menuStrip->Text = L"menuStrip";
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->backToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->backToolStripMenuItem->Text = L"Back";
			this->backToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::backToolStripMenuItem_Click);
			// 
			// aheadToolStripMenuItem
			// 
			this->aheadToolStripMenuItem->Name = L"aheadToolStripMenuItem";
			this->aheadToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::Z));
			this->aheadToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->aheadToolStripMenuItem->Text = L"Ahead";
			this->aheadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aheadToolStripMenuItem_Click);
			// 
			// colorButton1
			// 
			this->colorButton1->BackColor = System::Drawing::Color::Black;
			this->colorButton1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->colorButton1->Location = System::Drawing::Point(58, 3);
			this->colorButton1->Name = L"colorButton1";
			this->colorButton1->Size = System::Drawing::Size(25, 25);
			this->colorButton1->TabIndex = 4;
			this->colorButton1->UseVisualStyleBackColor = false;
			this->colorButton1->Click += gcnew System::EventHandler(this, &MainForm::colorButton1_Click);
			// 
			// pictureBoxPanel
			// 
			this->pictureBoxPanel->AutoScroll = true;
			this->pictureBoxPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxPanel->Controls->Add(this->pictureBox);
			this->pictureBoxPanel->Location = System::Drawing::Point(53, 129);
			this->pictureBoxPanel->Name = L"pictureBoxPanel";
			this->pictureBoxPanel->Size = System::Drawing::Size(1327, 598);
			this->pictureBoxPanel->TabIndex = 6;
			// 
			// brushWidthBar
			// 
			this->brushWidthBar->Location = System::Drawing::Point(0, 6);
			this->brushWidthBar->Maximum = 30;
			this->brushWidthBar->Minimum = 1;
			this->brushWidthBar->Name = L"brushWidthBar";
			this->brushWidthBar->Size = System::Drawing::Size(200, 45);
			this->brushWidthBar->TabIndex = 7;
			this->brushWidthBar->Value = 3;
			this->brushWidthBar->ValueChanged += gcnew System::EventHandler(this, &MainForm::brushWidthBar_ValueChanged);
			// 
			// brushWidhtUpDown
			// 
			this->brushWidhtUpDown->Location = System::Drawing::Point(24, 47);
			this->brushWidhtUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->brushWidhtUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->brushWidhtUpDown->Name = L"brushWidhtUpDown";
			this->brushWidhtUpDown->Size = System::Drawing::Size(150, 20);
			this->brushWidhtUpDown->TabIndex = 1;
			this->brushWidhtUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->brushWidhtUpDown->ValueChanged += gcnew System::EventHandler(this, &MainForm::brushWidhtUpDown_ValueChanged);
			// 
			// rectangleButton
			// 
			this->rectangleButton->BackColor = System::Drawing::Color::Transparent;
			this->rectangleButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rectangleButton.BackgroundImage")));
			this->rectangleButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rectangleButton->Location = System::Drawing::Point(4, 97);
			this->rectangleButton->Name = L"rectangleButton";
			this->rectangleButton->Size = System::Drawing::Size(40, 40);
			this->rectangleButton->TabIndex = 8;
			this->rectangleButton->UseVisualStyleBackColor = false;
			this->rectangleButton->Click += gcnew System::EventHandler(this, &MainForm::rectangleButton_Click);
			// 
			// brushButton
			// 
			this->brushButton->BackColor = System::Drawing::Color::Transparent;
			this->brushButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"brushButton.BackgroundImage")));
			this->brushButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->brushButton->Location = System::Drawing::Point(4, 7);
			this->brushButton->Name = L"brushButton";
			this->brushButton->Size = System::Drawing::Size(40, 40);
			this->brushButton->TabIndex = 9;
			this->brushButton->UseVisualStyleBackColor = false;
			this->brushButton->Click += gcnew System::EventHandler(this, &MainForm::brushButton_Click);
			// 
			// ellipseButton
			// 
			this->ellipseButton->BackColor = System::Drawing::Color::Transparent;
			this->ellipseButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ellipseButton.BackgroundImage")));
			this->ellipseButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ellipseButton->Location = System::Drawing::Point(4, 143);
			this->ellipseButton->Name = L"ellipseButton";
			this->ellipseButton->Size = System::Drawing::Size(40, 40);
			this->ellipseButton->TabIndex = 10;
			this->ellipseButton->UseVisualStyleBackColor = false;
			this->ellipseButton->Click += gcnew System::EventHandler(this, &MainForm::ellipseButton_Click);
			// 
			// lineButton
			// 
			this->lineButton->BackColor = System::Drawing::Color::Transparent;
			this->lineButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lineButton.BackgroundImage")));
			this->lineButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lineButton->Location = System::Drawing::Point(4, 53);
			this->lineButton->Name = L"lineButton";
			this->lineButton->Size = System::Drawing::Size(40, 40);
			this->lineButton->TabIndex = 11;
			this->lineButton->UseVisualStyleBackColor = false;
			this->lineButton->Click += gcnew System::EventHandler(this, &MainForm::lineButton_Click);
			// 
			// fillButton
			// 
			this->fillButton->BackColor = System::Drawing::Color::Transparent;
			this->fillButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fillButton.BackgroundImage")));
			this->fillButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->fillButton->Location = System::Drawing::Point(4, 187);
			this->fillButton->Name = L"fillButton";
			this->fillButton->Size = System::Drawing::Size(40, 40);
			this->fillButton->TabIndex = 12;
			this->fillButton->UseVisualStyleBackColor = false;
			this->fillButton->Click += gcnew System::EventHandler(this, &MainForm::fillButton_Click);
			// 
			// eraserButton
			// 
			this->eraserButton->BackColor = System::Drawing::Color::Transparent;
			this->eraserButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eraserButton.BackgroundImage")));
			this->eraserButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->eraserButton->Location = System::Drawing::Point(4, 231);
			this->eraserButton->Name = L"eraserButton";
			this->eraserButton->Size = System::Drawing::Size(40, 40);
			this->eraserButton->TabIndex = 13;
			this->eraserButton->UseVisualStyleBackColor = false;
			this->eraserButton->Click += gcnew System::EventHandler(this, &MainForm::eraserButton_Click);
			// 
			// pipetteButton
			// 
			this->pipetteButton->BackColor = System::Drawing::Color::Transparent;
			this->pipetteButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pipetteButton.BackgroundImage")));
			this->pipetteButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pipetteButton->Location = System::Drawing::Point(4, 275);
			this->pipetteButton->Name = L"pipetteButton";
			this->pipetteButton->Size = System::Drawing::Size(40, 40);
			this->pipetteButton->TabIndex = 14;
			this->pipetteButton->UseVisualStyleBackColor = false;
			this->pipetteButton->Click += gcnew System::EventHandler(this, &MainForm::pipetteButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel2->Controls->Add(this->sprayButton);
			this->panel2->Controls->Add(this->brushButton);
			this->panel2->Controls->Add(this->pipetteButton);
			this->panel2->Controls->Add(this->rectangleButton);
			this->panel2->Controls->Add(this->eraserButton);
			this->panel2->Controls->Add(this->ellipseButton);
			this->panel2->Controls->Add(this->fillButton);
			this->panel2->Controls->Add(this->lineButton);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(48, 708);
			this->panel2->TabIndex = 15;
			// 
			// sprayButton
			// 
			this->sprayButton->BackColor = System::Drawing::Color::Transparent;
			this->sprayButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sprayButton.BackgroundImage")));
			this->sprayButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sprayButton->Location = System::Drawing::Point(4, 319);
			this->sprayButton->Name = L"sprayButton";
			this->sprayButton->Size = System::Drawing::Size(40, 40);
			this->sprayButton->TabIndex = 15;
			this->sprayButton->UseVisualStyleBackColor = false;
			this->sprayButton->Click += gcnew System::EventHandler(this, &MainForm::sprayButton_Click);
			// 
			// selectionButton
			// 
			this->selectionButton->BackColor = System::Drawing::SystemColors::ControlLight;
			this->selectionButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"selectionButton.BackgroundImage")));
			this->selectionButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->selectionButton->Location = System::Drawing::Point(10, 9);
			this->selectionButton->Name = L"selectionButton";
			this->selectionButton->Size = System::Drawing::Size(60, 60);
			this->selectionButton->TabIndex = 16;
			this->selectionButton->UseVisualStyleBackColor = false;
			this->selectionButton->Click += gcnew System::EventHandler(this, &MainForm::selectionButton_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->Size);
			this->panel3->Controls->Add(this->brushWidhtUpDown);
			this->panel3->Controls->Add(this->brushWidthBar);
			this->panel3->Location = System::Drawing::Point(427, 30);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 94);
			this->panel3->TabIndex = 16;
			// 
			// Size
			// 
			this->Size->AutoSize = true;
			this->Size->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Size->Location = System::Drawing::Point(82, 79);
			this->Size->Name = L"Size";
			this->Size->Size = System::Drawing::Size(27, 13);
			this->Size->TabIndex = 39;
			this->Size->Text = L"Size";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->editColor);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->currentColor);
			this->panel4->Controls->Add(this->colorButton30);
			this->panel4->Controls->Add(this->colorButton29);
			this->panel4->Controls->Add(this->colorButton28);
			this->panel4->Controls->Add(this->colorButton27);
			this->panel4->Controls->Add(this->colorButton26);
			this->panel4->Controls->Add(this->colorButton25);
			this->panel4->Controls->Add(this->colorButton24);
			this->panel4->Controls->Add(this->colorButton23);
			this->panel4->Controls->Add(this->colorButton22);
			this->panel4->Controls->Add(this->colorButton21);
			this->panel4->Controls->Add(this->colorButton20);
			this->panel4->Controls->Add(this->colorButton19);
			this->panel4->Controls->Add(this->colorButton18);
			this->panel4->Controls->Add(this->colorButton17);
			this->panel4->Controls->Add(this->colorButton16);
			this->panel4->Controls->Add(this->colorButton15);
			this->panel4->Controls->Add(this->colorButton14);
			this->panel4->Controls->Add(this->colorButton13);
			this->panel4->Controls->Add(this->colorButton12);
			this->panel4->Controls->Add(this->colorButton11);
			this->panel4->Controls->Add(this->colorButton10);
			this->panel4->Controls->Add(this->colorButton9);
			this->panel4->Controls->Add(this->colorButton8);
			this->panel4->Controls->Add(this->colorButton7);
			this->panel4->Controls->Add(this->colorButton6);
			this->panel4->Controls->Add(this->colorButton5);
			this->panel4->Controls->Add(this->colorButton4);
			this->panel4->Controls->Add(this->colorButton3);
			this->panel4->Controls->Add(this->colorButton2);
			this->panel4->Controls->Add(this->Colors);
			this->panel4->Controls->Add(this->colorButton1);
			this->panel4->Location = System::Drawing::Point(54, 29);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(367, 95);
			this->panel4->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoEllipsis = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(314, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 28);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Edit colors";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// editColor
			// 
			this->editColor->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->editColor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editColor.BackgroundImage")));
			this->editColor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->editColor->Location = System::Drawing::Point(314, 8);
			this->editColor->Name = L"editColor";
			this->editColor->Size = System::Drawing::Size(44, 44);
			this->editColor->TabIndex = 38;
			this->editColor->UseVisualStyleBackColor = false;
			this->editColor->Click += gcnew System::EventHandler(this, &MainForm::editColor_Click);
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(9, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Current color";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// currentColor
			// 
			this->currentColor->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->currentColor->Enabled = false;
			this->currentColor->Location = System::Drawing::Point(8, 8);
			this->currentColor->Name = L"currentColor";
			this->currentColor->Size = System::Drawing::Size(44, 44);
			this->currentColor->TabIndex = 1;
			this->currentColor->UseVisualStyleBackColor = false;
			// 
			// colorButton30
			// 
			this->colorButton30->BackColor = System::Drawing::Color::Transparent;
			this->colorButton30->Enabled = false;
			this->colorButton30->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton30->Location = System::Drawing::Point(283, 54);
			this->colorButton30->Name = L"colorButton30";
			this->colorButton30->Size = System::Drawing::Size(25, 25);
			this->colorButton30->TabIndex = 37;
			this->colorButton30->UseVisualStyleBackColor = false;
			this->colorButton30->Click += gcnew System::EventHandler(this, &MainForm::colorButton30_Click);
			// 
			// colorButton29
			// 
			this->colorButton29->BackColor = System::Drawing::Color::Transparent;
			this->colorButton29->Enabled = false;
			this->colorButton29->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton29->Location = System::Drawing::Point(258, 54);
			this->colorButton29->Name = L"colorButton29";
			this->colorButton29->Size = System::Drawing::Size(25, 25);
			this->colorButton29->TabIndex = 36;
			this->colorButton29->UseVisualStyleBackColor = false;
			this->colorButton29->Click += gcnew System::EventHandler(this, &MainForm::colorButton29_Click);
			// 
			// colorButton28
			// 
			this->colorButton28->BackColor = System::Drawing::Color::Transparent;
			this->colorButton28->Enabled = false;
			this->colorButton28->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton28->Location = System::Drawing::Point(233, 54);
			this->colorButton28->Name = L"colorButton28";
			this->colorButton28->Size = System::Drawing::Size(25, 25);
			this->colorButton28->TabIndex = 35;
			this->colorButton28->UseVisualStyleBackColor = false;
			this->colorButton28->Click += gcnew System::EventHandler(this, &MainForm::colorButton28_Click);
			// 
			// colorButton27
			// 
			this->colorButton27->BackColor = System::Drawing::Color::Transparent;
			this->colorButton27->Enabled = false;
			this->colorButton27->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton27->Location = System::Drawing::Point(208, 54);
			this->colorButton27->Name = L"colorButton27";
			this->colorButton27->Size = System::Drawing::Size(25, 25);
			this->colorButton27->TabIndex = 34;
			this->colorButton27->UseVisualStyleBackColor = false;
			this->colorButton27->Click += gcnew System::EventHandler(this, &MainForm::colorButton27_Click);
			// 
			// colorButton26
			// 
			this->colorButton26->BackColor = System::Drawing::Color::Transparent;
			this->colorButton26->Enabled = false;
			this->colorButton26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton26->Location = System::Drawing::Point(183, 54);
			this->colorButton26->Name = L"colorButton26";
			this->colorButton26->Size = System::Drawing::Size(25, 25);
			this->colorButton26->TabIndex = 33;
			this->colorButton26->UseVisualStyleBackColor = false;
			this->colorButton26->Click += gcnew System::EventHandler(this, &MainForm::colorButton26_Click);
			// 
			// colorButton25
			// 
			this->colorButton25->BackColor = System::Drawing::Color::Transparent;
			this->colorButton25->Enabled = false;
			this->colorButton25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton25->Location = System::Drawing::Point(158, 54);
			this->colorButton25->Name = L"colorButton25";
			this->colorButton25->Size = System::Drawing::Size(25, 25);
			this->colorButton25->TabIndex = 32;
			this->colorButton25->UseVisualStyleBackColor = false;
			this->colorButton25->Click += gcnew System::EventHandler(this, &MainForm::colorButton25_Click);
			// 
			// colorButton24
			// 
			this->colorButton24->BackColor = System::Drawing::Color::Transparent;
			this->colorButton24->Enabled = false;
			this->colorButton24->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton24->Location = System::Drawing::Point(133, 54);
			this->colorButton24->Name = L"colorButton24";
			this->colorButton24->Size = System::Drawing::Size(25, 25);
			this->colorButton24->TabIndex = 31;
			this->colorButton24->UseVisualStyleBackColor = false;
			this->colorButton24->Click += gcnew System::EventHandler(this, &MainForm::colorButton24_Click);
			// 
			// colorButton23
			// 
			this->colorButton23->BackColor = System::Drawing::Color::Transparent;
			this->colorButton23->Enabled = false;
			this->colorButton23->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton23->Location = System::Drawing::Point(108, 54);
			this->colorButton23->Name = L"colorButton23";
			this->colorButton23->Size = System::Drawing::Size(25, 25);
			this->colorButton23->TabIndex = 30;
			this->colorButton23->UseVisualStyleBackColor = false;
			this->colorButton23->Click += gcnew System::EventHandler(this, &MainForm::colorButton23_Click);
			// 
			// colorButton22
			// 
			this->colorButton22->BackColor = System::Drawing::Color::Transparent;
			this->colorButton22->Enabled = false;
			this->colorButton22->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton22->Location = System::Drawing::Point(83, 54);
			this->colorButton22->Name = L"colorButton22";
			this->colorButton22->Size = System::Drawing::Size(25, 25);
			this->colorButton22->TabIndex = 29;
			this->colorButton22->UseVisualStyleBackColor = false;
			this->colorButton22->Click += gcnew System::EventHandler(this, &MainForm::colorButton22_Click);
			// 
			// colorButton21
			// 
			this->colorButton21->BackColor = System::Drawing::Color::Transparent;
			this->colorButton21->Enabled = false;
			this->colorButton21->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton21->Location = System::Drawing::Point(58, 54);
			this->colorButton21->Name = L"colorButton21";
			this->colorButton21->Size = System::Drawing::Size(25, 25);
			this->colorButton21->TabIndex = 28;
			this->colorButton21->UseVisualStyleBackColor = false;
			this->colorButton21->Click += gcnew System::EventHandler(this, &MainForm::colorButton21_Click);
			// 
			// colorButton20
			// 
			this->colorButton20->BackColor = System::Drawing::Color::Thistle;
			this->colorButton20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton20->Location = System::Drawing::Point(283, 28);
			this->colorButton20->Name = L"colorButton20";
			this->colorButton20->Size = System::Drawing::Size(25, 25);
			this->colorButton20->TabIndex = 27;
			this->colorButton20->UseVisualStyleBackColor = false;
			this->colorButton20->Click += gcnew System::EventHandler(this, &MainForm::colorButton20_Click);
			// 
			// colorButton19
			// 
			this->colorButton19->BackColor = System::Drawing::Color::CornflowerBlue;
			this->colorButton19->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton19->Location = System::Drawing::Point(258, 28);
			this->colorButton19->Name = L"colorButton19";
			this->colorButton19->Size = System::Drawing::Size(25, 25);
			this->colorButton19->TabIndex = 26;
			this->colorButton19->UseVisualStyleBackColor = false;
			this->colorButton19->Click += gcnew System::EventHandler(this, &MainForm::colorButton19_Click);
			// 
			// colorButton18
			// 
			this->colorButton18->BackColor = System::Drawing::Color::PowderBlue;
			this->colorButton18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton18->Location = System::Drawing::Point(233, 28);
			this->colorButton18->Name = L"colorButton18";
			this->colorButton18->Size = System::Drawing::Size(25, 25);
			this->colorButton18->TabIndex = 25;
			this->colorButton18->UseVisualStyleBackColor = false;
			this->colorButton18->Click += gcnew System::EventHandler(this, &MainForm::colorButton18_Click);
			// 
			// colorButton17
			// 
			this->colorButton17->BackColor = System::Drawing::Color::LightGreen;
			this->colorButton17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton17->Location = System::Drawing::Point(208, 28);
			this->colorButton17->Name = L"colorButton17";
			this->colorButton17->Size = System::Drawing::Size(25, 25);
			this->colorButton17->TabIndex = 24;
			this->colorButton17->UseVisualStyleBackColor = false;
			this->colorButton17->Click += gcnew System::EventHandler(this, &MainForm::colorButton17_Click);
			// 
			// colorButton16
			// 
			this->colorButton16->BackColor = System::Drawing::Color::LightYellow;
			this->colorButton16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton16->Location = System::Drawing::Point(183, 28);
			this->colorButton16->Name = L"colorButton16";
			this->colorButton16->Size = System::Drawing::Size(25, 25);
			this->colorButton16->TabIndex = 23;
			this->colorButton16->UseVisualStyleBackColor = false;
			this->colorButton16->Click += gcnew System::EventHandler(this, &MainForm::colorButton16_Click);
			// 
			// colorButton15
			// 
			this->colorButton15->BackColor = System::Drawing::Color::NavajoWhite;
			this->colorButton15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton15->Location = System::Drawing::Point(158, 28);
			this->colorButton15->Name = L"colorButton15";
			this->colorButton15->Size = System::Drawing::Size(25, 25);
			this->colorButton15->TabIndex = 22;
			this->colorButton15->UseVisualStyleBackColor = false;
			this->colorButton15->Click += gcnew System::EventHandler(this, &MainForm::colorButton15_Click);
			// 
			// colorButton14
			// 
			this->colorButton14->BackColor = System::Drawing::Color::LightCoral;
			this->colorButton14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton14->Location = System::Drawing::Point(133, 28);
			this->colorButton14->Name = L"colorButton14";
			this->colorButton14->Size = System::Drawing::Size(25, 25);
			this->colorButton14->TabIndex = 21;
			this->colorButton14->UseVisualStyleBackColor = false;
			this->colorButton14->Click += gcnew System::EventHandler(this, &MainForm::colorButton14_Click);
			// 
			// colorButton13
			// 
			this->colorButton13->BackColor = System::Drawing::Color::IndianRed;
			this->colorButton13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton13->Location = System::Drawing::Point(108, 28);
			this->colorButton13->Name = L"colorButton13";
			this->colorButton13->Size = System::Drawing::Size(25, 25);
			this->colorButton13->TabIndex = 20;
			this->colorButton13->UseVisualStyleBackColor = false;
			this->colorButton13->Click += gcnew System::EventHandler(this, &MainForm::colorButton13_Click);
			// 
			// colorButton12
			// 
			this->colorButton12->BackColor = System::Drawing::Color::DarkGray;
			this->colorButton12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton12->Location = System::Drawing::Point(83, 28);
			this->colorButton12->Name = L"colorButton12";
			this->colorButton12->Size = System::Drawing::Size(25, 25);
			this->colorButton12->TabIndex = 19;
			this->colorButton12->UseVisualStyleBackColor = false;
			this->colorButton12->Click += gcnew System::EventHandler(this, &MainForm::colorButton12_Click);
			// 
			// colorButton11
			// 
			this->colorButton11->BackColor = System::Drawing::Color::White;
			this->colorButton11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton11->Location = System::Drawing::Point(58, 28);
			this->colorButton11->Name = L"colorButton11";
			this->colorButton11->Size = System::Drawing::Size(25, 25);
			this->colorButton11->TabIndex = 18;
			this->colorButton11->UseVisualStyleBackColor = false;
			this->colorButton11->Click += gcnew System::EventHandler(this, &MainForm::colorButton11_Click);
			// 
			// colorButton10
			// 
			this->colorButton10->BackColor = System::Drawing::Color::MediumOrchid;
			this->colorButton10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton10->Location = System::Drawing::Point(283, 3);
			this->colorButton10->Name = L"colorButton10";
			this->colorButton10->Size = System::Drawing::Size(25, 25);
			this->colorButton10->TabIndex = 17;
			this->colorButton10->UseVisualStyleBackColor = false;
			this->colorButton10->Click += gcnew System::EventHandler(this, &MainForm::colorButton10_Click);
			// 
			// colorButton9
			// 
			this->colorButton9->BackColor = System::Drawing::Color::Blue;
			this->colorButton9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton9->Location = System::Drawing::Point(258, 3);
			this->colorButton9->Name = L"colorButton9";
			this->colorButton9->Size = System::Drawing::Size(25, 25);
			this->colorButton9->TabIndex = 16;
			this->colorButton9->UseVisualStyleBackColor = false;
			this->colorButton9->Click += gcnew System::EventHandler(this, &MainForm::colorButton9_Click);
			// 
			// colorButton8
			// 
			this->colorButton8->BackColor = System::Drawing::Color::DodgerBlue;
			this->colorButton8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton8->Location = System::Drawing::Point(233, 3);
			this->colorButton8->Name = L"colorButton8";
			this->colorButton8->Size = System::Drawing::Size(25, 25);
			this->colorButton8->TabIndex = 15;
			this->colorButton8->UseVisualStyleBackColor = false;
			this->colorButton8->Click += gcnew System::EventHandler(this, &MainForm::colorButton8_Click);
			// 
			// colorButton7
			// 
			this->colorButton7->BackColor = System::Drawing::Color::Green;
			this->colorButton7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton7->Location = System::Drawing::Point(208, 3);
			this->colorButton7->Name = L"colorButton7";
			this->colorButton7->Size = System::Drawing::Size(25, 25);
			this->colorButton7->TabIndex = 14;
			this->colorButton7->UseVisualStyleBackColor = false;
			this->colorButton7->Click += gcnew System::EventHandler(this, &MainForm::colorButton7_Click);
			// 
			// colorButton6
			// 
			this->colorButton6->BackColor = System::Drawing::Color::Yellow;
			this->colorButton6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton6->Location = System::Drawing::Point(183, 3);
			this->colorButton6->Name = L"colorButton6";
			this->colorButton6->Size = System::Drawing::Size(25, 25);
			this->colorButton6->TabIndex = 13;
			this->colorButton6->UseVisualStyleBackColor = false;
			this->colorButton6->Click += gcnew System::EventHandler(this, &MainForm::colorButton6_Click);
			// 
			// colorButton5
			// 
			this->colorButton5->BackColor = System::Drawing::Color::Orange;
			this->colorButton5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton5->Location = System::Drawing::Point(158, 3);
			this->colorButton5->Name = L"colorButton5";
			this->colorButton5->Size = System::Drawing::Size(25, 25);
			this->colorButton5->TabIndex = 12;
			this->colorButton5->UseVisualStyleBackColor = false;
			this->colorButton5->Click += gcnew System::EventHandler(this, &MainForm::colorButton5_Click);
			// 
			// colorButton4
			// 
			this->colorButton4->BackColor = System::Drawing::Color::Red;
			this->colorButton4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton4->Location = System::Drawing::Point(133, 3);
			this->colorButton4->Name = L"colorButton4";
			this->colorButton4->Size = System::Drawing::Size(25, 25);
			this->colorButton4->TabIndex = 11;
			this->colorButton4->UseVisualStyleBackColor = false;
			this->colorButton4->Click += gcnew System::EventHandler(this, &MainForm::colorButton4_Click);
			// 
			// colorButton3
			// 
			this->colorButton3->BackColor = System::Drawing::Color::DarkRed;
			this->colorButton3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton3->Location = System::Drawing::Point(108, 3);
			this->colorButton3->Name = L"colorButton3";
			this->colorButton3->Size = System::Drawing::Size(25, 25);
			this->colorButton3->TabIndex = 10;
			this->colorButton3->UseVisualStyleBackColor = false;
			this->colorButton3->Click += gcnew System::EventHandler(this, &MainForm::colorButton3_Click);
			// 
			// colorButton2
			// 
			this->colorButton2->BackColor = System::Drawing::Color::DimGray;
			this->colorButton2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->colorButton2->Location = System::Drawing::Point(83, 3);
			this->colorButton2->Name = L"colorButton2";
			this->colorButton2->Size = System::Drawing::Size(25, 25);
			this->colorButton2->TabIndex = 9;
			this->colorButton2->UseVisualStyleBackColor = false;
			this->colorButton2->Click += gcnew System::EventHandler(this, &MainForm::colorButton2_Click);
			// 
			// Colors
			// 
			this->Colors->AutoSize = true;
			this->Colors->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Colors->Location = System::Drawing::Point(163, 80);
			this->Colors->Name = L"Colors";
			this->Colors->Size = System::Drawing::Size(36, 13);
			this->Colors->TabIndex = 8;
			this->Colors->Text = L"Colors";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->withoutFillButton);
			this->panel1->Controls->Add(this->withFillButton);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(813, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(567, 94);
			this->panel1->TabIndex = 1;
			// 
			// withoutFillButton
			// 
			this->withoutFillButton->AutoSize = true;
			this->withoutFillButton->Checked = true;
			this->withoutFillButton->Enabled = false;
			this->withoutFillButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->withoutFillButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->withoutFillButton->Location = System::Drawing::Point(17, 17);
			this->withoutFillButton->Name = L"withoutFillButton";
			this->withoutFillButton->Size = System::Drawing::Size(100, 24);
			this->withoutFillButton->TabIndex = 42;
			this->withoutFillButton->TabStop = true;
			this->withoutFillButton->Text = L"Without fill";
			this->withoutFillButton->UseVisualStyleBackColor = true;
			this->withoutFillButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::withoutFillButton_CheckedChanged);
			// 
			// withFillButton
			// 
			this->withFillButton->AutoSize = true;
			this->withFillButton->Enabled = false;
			this->withFillButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->withFillButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->withFillButton->Location = System::Drawing::Point(123, 17);
			this->withFillButton->Name = L"withFillButton";
			this->withFillButton->Size = System::Drawing::Size(77, 24);
			this->withFillButton->TabIndex = 41;
			this->withFillButton->Text = L"With fill";
			this->withFillButton->UseVisualStyleBackColor = true;
			this->withFillButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::withFillButton_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(259, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Properties";
			// 
			// deselectButton
			// 
			this->deselectButton->Enabled = false;
			this->deselectButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deselectButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->deselectButton->Location = System::Drawing::Point(73, 9);
			this->deselectButton->Name = L"deselectButton";
			this->deselectButton->Size = System::Drawing::Size(92, 28);
			this->deselectButton->TabIndex = 17;
			this->deselectButton->Text = L"Deselect";
			this->deselectButton->UseVisualStyleBackColor = true;
			this->deselectButton->Click += gcnew System::EventHandler(this, &MainForm::deselectButton_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->cutButton);
			this->panel5->Controls->Add(this->deselectButton);
			this->panel5->Controls->Add(this->selectionButton);
			this->panel5->Location = System::Drawing::Point(633, 30);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(174, 94);
			this->panel5->TabIndex = 41;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(60, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Selection";
			// 
			// cutButton
			// 
			this->cutButton->Enabled = false;
			this->cutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cutButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->cutButton->Location = System::Drawing::Point(73, 41);
			this->cutButton->Name = L"cutButton";
			this->cutButton->Size = System::Drawing::Size(92, 28);
			this->cutButton->TabIndex = 18;
			this->cutButton->Text = L"Cut";
			this->cutButton->UseVisualStyleBackColor = true;
			this->cutButton->Click += gcnew System::EventHandler(this, &MainForm::cutButton_Click);
			// 
			// sprayTimer
			// 
			this->sprayTimer->Interval = 50;
			this->sprayTimer->Tick += gcnew System::EventHandler(this, &MainForm::sprayTimer_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1386, 732);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBoxPanel);
			this->Controls->Add(this->menuStrip);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->pictureBoxPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brushWidthBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brushWidhtUpDown))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
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
	private: System::Void brushWidthBar_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void brushWidhtUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void rectangleButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void brushButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ellipseButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void lineButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void fillButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void eraserButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pipetteButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton13_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton15_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton16_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton17_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton18_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton19_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton20_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton21_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton22_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton23_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton24_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton25_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton26_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton27_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton28_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton29_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void colorButton30_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void editColor_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void aheadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void selectionButton_Click(System::Object^ sender, System::EventArgs^ e) {
	currentTool = Tools::Selection;
}
private: System::Void pictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void deselectButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void openFile();
private: System::Void MainForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cutButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void withFillButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void withoutFillButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void sprayTimer_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void sprayButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
