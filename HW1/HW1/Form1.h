#pragma once
#include<stdlib.h>
#include <time.h> 
#include <string> 

int list[10000000]; //全域變數

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
	private: System::Windows::Forms::TextBox^ textBox_range;
	private: System::Windows::Forms::Label^ label_range;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox_PrintOutPut;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox_selfcheck;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->textBox_range = (gcnew System::Windows::Forms::TextBox());
			this->label_range = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox_PrintOutPut = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox_selfcheck = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(263, 411);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Data Generator";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(263, 138);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(128, 256);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(51, 222);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n = ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox1->Location = System::Drawing::Point(88, 219);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 27);
			this->textBox1->TabIndex = 3;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(440, 138);
			this->listBox2->Margin = System::Windows::Forms::Padding(2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(128, 256);
			this->listBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(440, 411);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 42);
			this->button2->TabIndex = 5;
			this->button2->Text = L"排序";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox_range
			// 
			this->textBox_range->Location = System::Drawing::Point(88, 272);
			this->textBox_range->Name = L"textBox_range";
			this->textBox_range->Size = System::Drawing::Size(114, 22);
			this->textBox_range->TabIndex = 6;
			// 
			// label_range
			// 
			this->label_range->AutoSize = true;
			this->label_range->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label_range->Location = System::Drawing::Point(19, 272);
			this->label_range->Name = L"label_range";
			this->label_range->Size = System::Drawing::Size(63, 16);
			this->label_range->TabIndex = 7;
			this->label_range->Text = L"Range = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(98, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"參數設定";
			// 
			// checkBox_PrintOutPut
			// 
			this->checkBox_PrintOutPut->AutoSize = true;
			this->checkBox_PrintOutPut->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->checkBox_PrintOutPut->Location = System::Drawing::Point(88, 322);
			this->checkBox_PrintOutPut->Name = L"checkBox_PrintOutPut";
			this->checkBox_PrintOutPut->Size = System::Drawing::Size(102, 20);
			this->checkBox_PrintOutPut->TabIndex = 9;
			this->checkBox_PrintOutPut->Text = L"Print Output";
			this->checkBox_PrintOutPut->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(637, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 12);
			this->label3->TabIndex = 10;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 10, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(270, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 14);
			this->label4->TabIndex = 11;
			this->label4->Text = L"隨機產生的數列";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 10, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(446, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 14);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Selectioin Sort ";
			// 
			// checkBox_selfcheck
			// 
			this->checkBox_selfcheck->AutoSize = true;
			this->checkBox_selfcheck->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->checkBox_selfcheck->Location = System::Drawing::Point(88, 365);
			this->checkBox_selfcheck->Name = L"checkBox_selfcheck";
			this->checkBox_selfcheck->Size = System::Drawing::Size(94, 20);
			this->checkBox_selfcheck->TabIndex = 13;
			this->checkBox_selfcheck->Text = L"Self Check";
			this->checkBox_selfcheck->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 511);
			this->Controls->Add(this->checkBox_selfcheck);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox_PrintOutPut);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_range);
			this->Controls->Add(this->textBox_range);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Selection Sort v.s Bubble sort By Y.T Lin ver_0.2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//副程式(排序)
		void SelectionSort(int list[], int n)
		{
			int i, j, min = list[0], tmp = list[0];
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
		//副程式(計算cpu time)

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		listBox1->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉

		//if (int::TryParse(textBox1->Text)) 判斷輸入是否正常

		int n = int::Parse(textBox1->Text); //將數字字串解析成整數
		int range = int::Parse(textBox_range->Text);

		srand(time(NULL));
		for (int i = 0;i < n;i++)
		{	
			if(checkBox_PrintOutPut->Checked) {
			list[i] = rand() % range +1 ; //產生範圍從0到range到數列
			listBox1->Items->Add("data["+ Convert::ToString(i) +"] = " +list[i]);
			}
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉
		clock_t t_begin, t_end;
		t_begin = clock();
		SelectionSort(list, int::Parse(textBox1->Text));
		t_end = clock();
		listBox2->Items->Add("CPU time =" + (float)(t_begin - t_end) / CLOCKS_PER_SEC);

		for (int i = 0;i < int::Parse(textBox1->Text);i++)
		{	
			if (checkBox_PrintOutPut->Checked) {
				listBox2->Items->Add("data[" + Convert::ToString(i) + "] = " + list[i]);
			}
		}
	}
};
}