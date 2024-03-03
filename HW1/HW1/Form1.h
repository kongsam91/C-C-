#pragma once
#include<stdlib.h>
#include <time.h> 
#include <string> 

int list[10000000]; //全域變數
int list_BubbleSort[10000000]; //全域變數

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
	private: System::Windows::Forms::Label^ label_CPUTIME_SS;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox_selfcheck;
	private: System::Windows::Forms::Label^ label_error;
	private: System::Windows::Forms::Button^ button_SelfCheck;
	private: System::Windows::Forms::ListBox^ listBox_BubbleSort;

	private: System::Windows::Forms::Button^ button_BubbleSort;
	private: System::Windows::Forms::Label^ label_CPUTIME_BS;
	private: System::Windows::Forms::Button^ button_BinarySearch;
	private: System::Windows::Forms::ListBox^ listBox_BinarySearch;



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
			this->label_CPUTIME_SS = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox_selfcheck = (gcnew System::Windows::Forms::CheckBox());
			this->label_error = (gcnew System::Windows::Forms::Label());
			this->button_SelfCheck = (gcnew System::Windows::Forms::Button());
			this->listBox_BubbleSort = (gcnew System::Windows::Forms::ListBox());
			this->button_BubbleSort = (gcnew System::Windows::Forms::Button());
			this->label_CPUTIME_BS = (gcnew System::Windows::Forms::Label());
			this->button_BinarySearch = (gcnew System::Windows::Forms::Button());
			this->listBox_BinarySearch = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(368, 437);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Data Generator";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(368, 94);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(153, 324);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(64, 233);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n = ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox1->Location = System::Drawing::Point(125, 227);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 27);
			this->textBox1->TabIndex = 3;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(546, 94);
			this->listBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(153, 324);
			this->listBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(546, 437);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 39);
			this->button2->TabIndex = 5;
			this->button2->Text = L"排序";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox_range
			// 
			this->textBox_range->Location = System::Drawing::Point(125, 272);
			this->textBox_range->Margin = System::Windows::Forms::Padding(5);
			this->textBox_range->Name = L"textBox_range";
			this->textBox_range->Size = System::Drawing::Size(188, 27);
			this->textBox_range->TabIndex = 6;
			// 
			// label_range
			// 
			this->label_range->AutoSize = true;
			this->label_range->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label_range->Location = System::Drawing::Point(32, 272);
			this->label_range->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
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
			this->label2->Location = System::Drawing::Point(172, 168);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"參數設定";
			// 
			// checkBox_PrintOutPut
			// 
			this->checkBox_PrintOutPut->AutoSize = true;
			this->checkBox_PrintOutPut->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->checkBox_PrintOutPut->Location = System::Drawing::Point(125, 324);
			this->checkBox_PrintOutPut->Margin = System::Windows::Forms::Padding(5);
			this->checkBox_PrintOutPut->Name = L"checkBox_PrintOutPut";
			this->checkBox_PrintOutPut->Size = System::Drawing::Size(102, 20);
			this->checkBox_PrintOutPut->TabIndex = 9;
			this->checkBox_PrintOutPut->Text = L"Print Output";
			this->checkBox_PrintOutPut->UseVisualStyleBackColor = true;
			// 
			// label_CPUTIME_SS
			// 
			this->label_CPUTIME_SS->AutoSize = true;
			this->label_CPUTIME_SS->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Bold));
			this->label_CPUTIME_SS->Location = System::Drawing::Point(575, 501);
			this->label_CPUTIME_SS->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_CPUTIME_SS->Name = L"label_CPUTIME_SS";
			this->label_CPUTIME_SS->Size = System::Drawing::Size(76, 16);
			this->label_CPUTIME_SS->TabIndex = 10;
			this->label_CPUTIME_SS->Text = L"CPU time = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 10, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(379, 36);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 14);
			this->label4->TabIndex = 11;
			this->label4->Text = L"隨機產生的數列";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 10, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(591, 36);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 14);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Selectioin Sort ";
			// 
			// checkBox_selfcheck
			// 
			this->checkBox_selfcheck->AutoSize = true;
			this->checkBox_selfcheck->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->checkBox_selfcheck->Location = System::Drawing::Point(96, 28);
			this->checkBox_selfcheck->Margin = System::Windows::Forms::Padding(5);
			this->checkBox_selfcheck->Name = L"checkBox_selfcheck";
			this->checkBox_selfcheck->Size = System::Drawing::Size(94, 20);
			this->checkBox_selfcheck->TabIndex = 13;
			this->checkBox_selfcheck->Text = L"Self Check";
			this->checkBox_selfcheck->UseVisualStyleBackColor = true;
			this->checkBox_selfcheck->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox_selfcheck_CheckedChanged);
			// 
			// label_error
			// 
			this->label_error->AutoSize = true;
			this->label_error->BackColor = System::Drawing::SystemColors::Control;
			this->label_error->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold));
			this->label_error->ForeColor = System::Drawing::Color::Red;
			this->label_error->Location = System::Drawing::Point(32, 448);
			this->label_error->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_error->Name = L"label_error";
			this->label_error->Size = System::Drawing::Size(0, 16);
			this->label_error->TabIndex = 14;
			// 
			// button_SelfCheck
			// 
			this->button_SelfCheck->Location = System::Drawing::Point(84, 56);
			this->button_SelfCheck->Name = L"button_SelfCheck";
			this->button_SelfCheck->Size = System::Drawing::Size(150, 39);
			this->button_SelfCheck->TabIndex = 15;
			this->button_SelfCheck->Text = L"SelfCheck";
			this->button_SelfCheck->UseVisualStyleBackColor = true;
			// 
			// listBox_BubbleSort
			// 
			this->listBox_BubbleSort->FormattingEnabled = true;
			this->listBox_BubbleSort->ItemHeight = 16;
			this->listBox_BubbleSort->Location = System::Drawing::Point(731, 94);
			this->listBox_BubbleSort->Name = L"listBox_BubbleSort";
			this->listBox_BubbleSort->Size = System::Drawing::Size(153, 324);
			this->listBox_BubbleSort->TabIndex = 16;
			// 
			// button_BubbleSort
			// 
			this->button_BubbleSort->Enabled = false;
			this->button_BubbleSort->Location = System::Drawing::Point(731, 438);
			this->button_BubbleSort->Name = L"button_BubbleSort";
			this->button_BubbleSort->Size = System::Drawing::Size(153, 39);
			this->button_BubbleSort->TabIndex = 17;
			this->button_BubbleSort->Text = L"BubbleSort";
			this->button_BubbleSort->UseVisualStyleBackColor = true;
			this->button_BubbleSort->Click += gcnew System::EventHandler(this, &Form1::button3_BubbleSort_Click);
			// 
			// label_CPUTIME_BS
			// 
			this->label_CPUTIME_BS->AutoSize = true;
			this->label_CPUTIME_BS->Location = System::Drawing::Point(728, 500);
			this->label_CPUTIME_BS->Name = L"label_CPUTIME_BS";
			this->label_CPUTIME_BS->Size = System::Drawing::Size(83, 16);
			this->label_CPUTIME_BS->TabIndex = 18;
			this->label_CPUTIME_BS->Text = L"CPU time = ";
			// 
			// button_BinarySearch
			// 
			this->button_BinarySearch->Location = System::Drawing::Point(907, 438);
			this->button_BinarySearch->Name = L"button_BinarySearch";
			this->button_BinarySearch->Size = System::Drawing::Size(143, 36);
			this->button_BinarySearch->TabIndex = 19;
			this->button_BinarySearch->Text = L"BinarySearch";
			this->button_BinarySearch->UseVisualStyleBackColor = true;
			// 
			// listBox_BinarySearch
			// 
			this->listBox_BinarySearch->FormattingEnabled = true;
			this->listBox_BinarySearch->ItemHeight = 16;
			this->listBox_BinarySearch->Location = System::Drawing::Point(907, 94);
			this->listBox_BinarySearch->Name = L"listBox_BinarySearch";
			this->listBox_BinarySearch->Size = System::Drawing::Size(143, 324);
			this->listBox_BinarySearch->TabIndex = 20;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 549);
			this->Controls->Add(this->listBox_BinarySearch);
			this->Controls->Add(this->button_BinarySearch);
			this->Controls->Add(this->label_CPUTIME_BS);
			this->Controls->Add(this->button_BubbleSort);
			this->Controls->Add(this->listBox_BubbleSort);
			this->Controls->Add(this->button_SelfCheck);
			this->Controls->Add(this->label_error);
			this->Controls->Add(this->checkBox_selfcheck);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label_CPUTIME_SS);
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
			this->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Form1";
			this->Text = L"Selection Sort v.s Bubble sort By Y.T Lin ver_0.2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//副程式(SelectionSort)
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
		//副程式(BubbleSort)
		void BubbleSort(int list[], int n) {

			int i,j, bigger = list[0], tmp = list[0];

			for(int j = 0;j<n-1;j++){
				for (int i = 0; i < n-j-1; i++) {
					if (list[i] > list[i + 1]) {	

						bigger = list[i];
						list[i] = list[i+1];
						list[i + 1] = bigger;

					}
				}
			}

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		listBox1->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉

		//if (int::TryParse(textBox1->Text)) 判斷輸入是否正常


		try
		{
			int n = Int32::Parse(textBox1->Text); 
			int range = Int32::Parse(textBox_range->Text);
			label_error->Text = "";
			// 如果程式碼能執行到這裡，表示輸入是個整數
			srand(time(NULL));
			for (int i = 0;i < n;i++)
			{
				if (checkBox_PrintOutPut->Checked) {
					list[i] = rand() % range + 1; //產生範圍從0到range到數列
					list_BubbleSort[i] = list[i];
					listBox1->Items->Add("data[" + Convert::ToString(i) + "] = " + list[i]);
				}
			}
			//沒有數列前不能按排序Button
			button2->Enabled = true; 
			button_BubbleSort->Enabled = true; 

		}
		catch (FormatException^)
		{
			// 如果無法將文字轉換成整數，跳Error
			button2->Enabled = false;
			button_BubbleSort->Enabled = false;
			label_error->Text = "ERROR 出現錯誤 請輸入整數";
			label_error->ForeColor = Color::Red;

		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉
		clock_t t_begin, t_end;
		t_begin = clock();
		SelectionSort(list, int::Parse(textBox1->Text));
		t_end = clock();
		label_CPUTIME_SS->Text = "CPU time = " + (float)(t_end - t_begin) / CLOCKS_PER_SEC;

		for (int i = 0;i < int::Parse(textBox1->Text);i++)
		{	
			if (checkBox_PrintOutPut->Checked) {
				listBox2->Items->Add("data[" + Convert::ToString(i) + "] = " + list[i]);
			}
		}
	}


	private: System::Void button3_BubbleSort_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox_BubbleSort->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉
		clock_t t_begin, t_end;
		t_begin = clock();
		BubbleSort(list_BubbleSort, int::Parse(textBox1->Text));
		t_end = clock();
		label_CPUTIME_BS->Text = "CPU time = " + (float)(t_end - t_begin) / CLOCKS_PER_SEC;
		for (int i = 0;i < int::Parse(textBox1->Text);i++)
		{
			if (checkBox_PrintOutPut->Checked) {
				listBox_BubbleSort->Items->Add("data[" + Convert::ToString(i) + "] = " + list_BubbleSort[i]);
			}
		}
	}

private: System::Void checkBox_selfcheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}