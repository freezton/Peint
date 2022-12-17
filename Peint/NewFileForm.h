#pragma once

namespace Peint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ NewFileForm
	/// </summary>
	public ref class NewFileForm : public System::Windows::Forms::Form
	{
	public:
		NewFileForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public: int width;
	public: int height;
	public: bool isCreated = false;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~NewFileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MaskedTextBox^ widthTextBox;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ heightTextBox;

	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::Button^ cancelButton;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->heightTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->widthTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->heightTextBox);
			this->groupBox1->Controls->Add(this->widthTextBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(14, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(243, 128);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Size";
			// 
			// heightTextBox
			// 
			this->heightTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->heightTextBox->Location = System::Drawing::Point(107, 73);
			this->heightTextBox->Mask = L"0000";
			this->heightTextBox->Name = L"heightTextBox";
			this->heightTextBox->Size = System::Drawing::Size(100, 24);
			this->heightTextBox->TabIndex = 2;
			// 
			// widthTextBox
			// 
			this->widthTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->widthTextBox->Location = System::Drawing::Point(107, 26);
			this->widthTextBox->Mask = L"0000";
			this->widthTextBox->Name = L"widthTextBox";
			this->widthTextBox->Size = System::Drawing::Size(100, 24);
			this->widthTextBox->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(23, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Height";
			this->label2->Click += gcnew System::EventHandler(this, &NewFileForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Width";
			this->label1->Click += gcnew System::EventHandler(this, &NewFileForm::label1_Click);
			// 
			// createButton
			// 
			this->createButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->createButton->Location = System::Drawing::Point(14, 146);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(115, 36);
			this->createButton->TabIndex = 1;
			this->createButton->Text = L"Create";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &NewFileForm::createButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cancelButton->Location = System::Drawing::Point(142, 146);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(115, 36);
			this->cancelButton->TabIndex = 2;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &NewFileForm::cancelButton_Click);
			// 
			// NewFileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(272, 197);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->createButton);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"NewFileForm";
			this->Text = L"New file";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	int::TryParse(widthTextBox->Text, width);
	int::TryParse(heightTextBox->Text, height);
	if (width >= 10 && width <= 2000 && height >= 10 && height <= 2000) {
		isCreated = true;
		this->Close();
	}
	else {
		MessageBox::Show(L"\nEnter a valid number between 10 and 2000.", L"New file", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}

