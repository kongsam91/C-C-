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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label_BubbleSort;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_BinarySearch;
	private: System::Windows::Forms::ListBox^ listBox_BinarySearch;
	private: System::Windows::Forms::Button^ button_BinarySearch;
	private: System::Windows::Forms::Label^ label_CPUTIME_BS;
	private: System::Windows::Forms::Button^ button_BubbleSort;
	private: System::Windows::Forms::ListBox^ listBox_BubbleSort;
	private: System::Windows::Forms::Button^ button_SelfCheck;
	private: System::Windows::Forms::Label^ label_error;
	private: System::Windows::Forms::CheckBox^ checkBox_selfcheck;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label_CPUTIME_SS;
	private: System::Windows::Forms::CheckBox^ checkBox_PrintOutPut;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label_range;
	private: System::Windows::Forms::TextBox^ textBox_range;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;





























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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label_BubbleSort = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_BinarySearch = (gcnew System::Windows::Forms::TextBox());
			this->listBox_BinarySearch = (gcnew System::Windows::Forms::ListBox());
			this->button_BinarySearch = (gcnew System::Windows::Forms::Button());
			this->label_CPUTIME_BS = (gcnew System::Windows::Forms::Label());
			this->button_BubbleSort = (gcnew System::Windows::Forms::Button());
			this->listBox_BubbleSort = (gcnew System::Windows::Forms::ListBox());
			this->button_SelfCheck = (gcnew System::Windows::Forms::Button());
			this->label_error = (gcnew System::Windows::Forms::Label());
			this->checkBox_selfcheck = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_CPUTIME_SS = (gcnew System::Windows::Forms::Label());
			this->checkBox_PrintOutPut = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_range = (gcnew System::Windows::Forms::Label());
			this->textBox_range = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1164, 594);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label_BubbleSort);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox_BinarySearch);
			this->tabPage1->Controls->Add(this->listBox_BinarySearch);
			this->tabPage1->Controls->Add(this->button_BinarySearch);
			this->tabPage1->Controls->Add(this->label_CPUTIME_BS);
			this->tabPage1->Controls->Add(this->button_BubbleSort);
			this->tabPage1->Controls->Add(this->listBox_BubbleSort);
			this->tabPage1->Controls->Add(this->button_SelfCheck);
			this->tabPage1->Controls->Add(this->label_error);
			this->tabPage1->Controls->Add(this->checkBox_selfcheck);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label_CPUTIME_SS);
			this->tabPage1->Controls->Add(this->checkBox_PrintOutPut);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label_range);
			this->tabPage1->Controls->Add(this->textBox_range);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->listBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1156, 564);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// label_BubbleSort
			// 
			this->label_BubbleSort->AutoSize = true;
			this->label_BubbleSort->Location = System::Drawing::Point(710, 66);
			this->label_BubbleSort->Name = L"label_BubbleSort";
			this->label_BubbleSort->Size = System::Drawing::Size(77, 16);
			this->label_BubbleSort->TabIndex = 47;
			this->label_BubbleSort->Text = L"BubbleSort";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(869, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 16);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Target = ";
			// 
			// textBox_BinarySearch
			// 
			this->textBox_BinarySearch->Location = System::Drawing::Point(948, 66);
			this->textBox_BinarySearch->Name = L"textBox_BinarySearch";
			this->textBox_BinarySearch->Size = System::Drawing::Size(98, 27);
			this->textBox_BinarySearch->TabIndex = 45;
			// 
			// listBox_BinarySearch
			// 
			this->listBox_BinarySearch->FormattingEnabled = true;
			this->listBox_BinarySearch->ItemHeight = 16;
			this->listBox_BinarySearch->Location = System::Drawing::Point(862, 107);
			this->listBox_BinarySearch->Name = L"listBox_BinarySearch";
			this->listBox_BinarySearch->Size = System::Drawing::Size(230, 324);
			this->listBox_BinarySearch->TabIndex = 44;
			// 
			// button_BinarySearch
			// 
			this->button_BinarySearch->Enabled = false;
			this->button_BinarySearch->Location = System::Drawing::Point(862, 451);
			this->button_BinarySearch->Name = L"button_BinarySearch";
			this->button_BinarySearch->Size = System::Drawing::Size(230, 36);
			this->button_BinarySearch->TabIndex = 43;
			this->button_BinarySearch->Text = L"BinarySearch";
			this->button_BinarySearch->UseVisualStyleBackColor = true;
			// 
			// label_CPUTIME_BS
			// 
			this->label_CPUTIME_BS->AutoSize = true;
			this->label_CPUTIME_BS->Location = System::Drawing::Point(683, 513);
			this->label_CPUTIME_BS->Name = L"label_CPUTIME_BS";
			this->label_CPUTIME_BS->Size = System::Drawing::Size(83, 16);
			this->label_CPUTIME_BS->TabIndex = 42;
			this->label_CPUTIME_BS->Text = L"CPU time = ";
			// 
			// button_BubbleSort
			// 
			this->button_BubbleSort->Enabled = false;
			this->button_BubbleSort->Location = System::Drawing::Point(686, 451);
			this->button_BubbleSort->Name = L"button_BubbleSort";
			this->button_BubbleSort->Size = System::Drawing::Size(153, 39);
			this->button_BubbleSort->TabIndex = 41;
			this->button_BubbleSort->Text = L"BubbleSort";
			this->button_BubbleSort->UseVisualStyleBackColor = true;
			// 
			// listBox_BubbleSort
			// 
			this->listBox_BubbleSort->FormattingEnabled = true;
			this->listBox_BubbleSort->ItemHeight = 16;
			this->listBox_BubbleSort->Location = System::Drawing::Point(686, 107);
			this->listBox_BubbleSort->Name = L"listBox_BubbleSort";
			this->listBox_BubbleSort->Size = System::Drawing::Size(153, 324);
			this->listBox_BubbleSort->TabIndex = 40;
			// 
			// button_SelfCheck
			// 
			this->button_SelfCheck->Location = System::Drawing::Point(122, 107);
			this->button_SelfCheck->Name = L"button_SelfCheck";
			this->button_SelfCheck->Size = System::Drawing::Size(150, 39);
			this->button_SelfCheck->TabIndex = 39;
			this->button_SelfCheck->Text = L"SelfCheck";
			this->button_SelfCheck->UseVisualStyleBackColor = true;
			// 
			// label_error
			// 
			this->label_error->AutoSize = true;
			this->label_error->BackColor = System::Drawing::SystemColors::Control;
			this->label_error->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold));
			this->label_error->ForeColor = System::Drawing::Color::Red;
			this->label_error->Location = System::Drawing::Point(-13, 461);
			this->label_error->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_error->Name = L"label_error";
			this->label_error->Size = System::Drawing::Size(0, 16);
			this->label_error->TabIndex = 38;
			// 
			// checkBox_selfcheck
			// 
			this->checkBox_selfcheck->AutoSize = true;
			this->checkBox_selfcheck->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->checkBox_selfcheck->Location = System::Drawing::Point(149, 69);
			this->checkBox_selfcheck->Margin = System::Windows::Forms::Padding(5);
			this->checkBox_selfcheck->Name = L"checkBox_selfcheck";
			this->checkBox_selfcheck->Size = System::Drawing::Size(94, 20);
			this->checkBox_selfcheck->TabIndex = 37;
			this->checkBox_selfcheck->Text = L"Self Check";
			this->checkBox_selfcheck->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 10, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(518, 66);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 14);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Selectioin Sort ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 10, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(337, 66);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 14);
			this->label4->TabIndex = 35;
			this->label4->Text = L"隨機產生的數列";
			// 
			// label_CPUTIME_SS
			// 
			this->label_CPUTIME_SS->AutoSize = true;
			this->label_CPUTIME_SS->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Bold));
			this->label_CPUTIME_SS->Location = System::Drawing::Point(530, 514);
			this->label_CPUTIME_SS->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_CPUTIME_SS->Name = L"label_CPUTIME_SS";
			this->label_CPUTIME_SS->Size = System::Drawing::Size(76, 16);
			this->label_CPUTIME_SS->TabIndex = 34;
			this->label_CPUTIME_SS->Text = L"CPU time = ";
			// 
			// checkBox_PrintOutPut
			// 
			this->checkBox_PrintOutPut->AutoSize = true;
			this->checkBox_PrintOutPut->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->checkBox_PrintOutPut->Location = System::Drawing::Point(102, 341);
			this->checkBox_PrintOutPut->Margin = System::Windows::Forms::Padding(5);
			this->checkBox_PrintOutPut->Name = L"checkBox_PrintOutPut";
			this->checkBox_PrintOutPut->Size = System::Drawing::Size(102, 20);
			this->checkBox_PrintOutPut->TabIndex = 33;
			this->checkBox_PrintOutPut->Text = L"Print Output";
			this->checkBox_PrintOutPut->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(145, 182);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 32;
			this->label2->Text = L"參數設定";
			// 
			// label_range
			// 
			this->label_range->AutoSize = true;
			this->label_range->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label_range->Location = System::Drawing::Point(29, 285);
			this->label_range->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_range->Name = L"label_range";
			this->label_range->Size = System::Drawing::Size(63, 16);
			this->label_range->TabIndex = 31;
			this->label_range->Text = L"Range = ";
			// 
			// textBox_range
			// 
			this->textBox_range->Location = System::Drawing::Point(102, 285);
			this->textBox_range->Margin = System::Windows::Forms::Padding(5);
			this->textBox_range->Name = L"textBox_range";
			this->textBox_range->Size = System::Drawing::Size(188, 27);
			this->textBox_range->TabIndex = 30;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(501, 450);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 39);
			this->button2->TabIndex = 29;
			this->button2->Text = L"排序";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(501, 107);
			this->listBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(153, 324);
			this->listBox2->TabIndex = 28;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox1->Location = System::Drawing::Point(102, 243);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 27);
			this->textBox1->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(61, 246);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 16);
			this->label1->TabIndex = 26;
			this->label1->Text = L"n = ";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(323, 107);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(153, 324);
			this->listBox1->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(323, 450);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 39);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Data Generator";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1039, 502);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 598);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Form1";
			this->Text = L"Selection Sort v.s Bubble sort By Y.T Lin ver_0.2";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

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

			int i, j, bigger = list[0], tmp = list[0];

			for (int j = 0;j < n - 1;j++) {
				for (int i = 0; i < n - j - 1; i++) {
					if (list[i] > list[i + 1]) {

						bigger = list[i];
						list[i] = list[i + 1];
						list[i + 1] = bigger;

					}
				}
			}

		}
		//副程式(BinarySearch)
		int BinarySearch(int list[], int right,int target) {
			int left = 0, mid,i=0;

			while (left <= right) {
				listBox_BinarySearch->Items->Add("left = " + left  + ",right = " + right + ",迭代" + i + "次");
				mid = (left + right) / 2;//取中間位子當基準
				if (list[mid] == target) {

					return mid;//找到的index值
				}
				else {

					if (list[mid] < target) {//在右邊的數列

						left = mid + 1;
					}
					else {//在左邊的數列

						right = mid - 1;
					}
				}
				i++;
			}
			return -1;//找不到時
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

		button_BinarySearch->Enabled = true;
	}

	private: System::Void button_BinarySearch_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//清除error訊息
			listBox_BinarySearch->Items->Clear();
			label_error->Text = "";

			//check沒error
			int n = Int32::Parse(textBox1->Text);
			int target = Int32::Parse(textBox_BinarySearch->Text);
			if (BinarySearch(list_BubbleSort,n, target) == -1) {

				listBox_BinarySearch->Items->Add( "找不到"+ Convert::ToString(target) +"這個數字");
			}
			else {
				listBox_BinarySearch->Items->Add("data[" + Convert::ToString(BinarySearch(list_BubbleSort,n, target)) + "] =  " + Convert::ToString(target));
			}

		}
		catch(FormatException^){
			listBox_BinarySearch->Items->Clear();
			label_error->Text = "Target欄位請輸入整數!!";
			listBox_BinarySearch->Items->Add("ERROR Target欄位請輸入整數!!");

		}
	}

private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}