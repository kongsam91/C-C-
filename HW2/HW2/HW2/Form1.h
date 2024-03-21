#pragma once
#include<stdlib.h>
///#define size 5


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_size;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_MagicSquare;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_size = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_MagicSquare = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(47, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Square size:";
			// 
			// textBox_size
			// 
			this->textBox_size->Location = System::Drawing::Point(51, 207);
			this->textBox_size->Name = L"textBox_size";
			this->textBox_size->Size = System::Drawing::Size(93, 22);
			this->textBox_size->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(51, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"5<=sizes<=21";
			// 
			// button_MagicSquare
			// 
			this->button_MagicSquare->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_MagicSquare->Location = System::Drawing::Point(43, 290);
			this->button_MagicSquare->Name = L"button_MagicSquare";
			this->button_MagicSquare->Size = System::Drawing::Size(101, 24);
			this->button_MagicSquare->TabIndex = 3;
			this->button_MagicSquare->Text = L"Magic square";
			this->button_MagicSquare->UseVisualStyleBackColor = true;
			this->button_MagicSquare->Click += gcnew System::EventHandler(this, &Form1::button_MagicSquare_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 594);
			this->Controls->Add(this->button_MagicSquare);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_size);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void BuildArray(int n ) {
			int MagicSquare[n][n];

		}
		
#pragma endregion
		int size = int::Parse(textBox_size->Text);
		

		


	private: System::Void button_MagicSquare_Click(System::Object^ sender, System::EventArgs^ e) {

		BuildArray(int::Parse(textBox_size->Text));

	}
};
}
