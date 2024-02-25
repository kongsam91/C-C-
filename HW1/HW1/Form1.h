#pragma once
#include<stdlib.h>

int list[1000]; //全域變數

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(308, 387);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Data Generator";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(308, 46);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(170, 319);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(51, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n = ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox1->Location = System::Drawing::Point(96, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 31);
			this->textBox1->TabIndex = 3;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(556, 46);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(170, 319);
			this->listBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(556, 387);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 52);
			this->button2->TabIndex = 5;
			this->button2->Text = L"排序";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 480);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//副程式(排序)
		void SelectionSort(int list[], int n)
		{
			int i, j, min = list[0], tmp=list[0];
			for (int j = 0; j < n; j++) {

				for (int i = j; i < n; i++) {

					if (list[i] <= min) {
						min = list[i];
						tmp = list[j];//原先位置的先丟到tmp
						list[j] = min;//把最小的丟到原先的位置
						list[i] = tmp;//再把原先位置的數字丟到原本最小數字的位子                
					}
				}
				min = list[n - 1];
			}
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		listBox1->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉
		
		//if (int::TryParse(textBox1->Text)) 判斷輸入是否正常

		int n = int::Parse(textBox1->Text); //產生亂數的數量從textBox1中的Str轉成int

		for (int i = 0;i < n;i++)
		{
			list[i] = rand(); //引用時需引用函式庫 stdlib.h
			listBox1->Items->Add(list[i]);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉
		SelectionSort(list, int::Parse(textBox1->Text));

		for (int i = 0;i < int::Parse(textBox1->Text);i++)
		{
			listBox2->Items->Add(list[i]);
		}
	}
};
}
