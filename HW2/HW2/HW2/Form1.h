#pragma once
#include<stdlib.h>
#include <time.h> 
#include <string> 


#define max_size 22
int	square[max_size][max_size];
int position_up = 1;


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





	private: System::Windows::Forms::ListBox^ listBox_Error;

	private: System::Windows::Forms::RadioButton^ radioButton_up;
	private: System::Windows::Forms::RadioButton^ radioButton_Down;
	private: System::Windows::Forms::RadioButton^ radioButton_Left;
	private: System::Windows::Forms::RadioButton^ radioButton_Right;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ListBox^ listBox_Up;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


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
			this->listBox_Error = (gcnew System::Windows::Forms::ListBox());
			this->radioButton_up = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Down = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Left = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Right = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox_Up = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->tabControl1->SuspendLayout();
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
			this->textBox_size->Text = L"5";
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
			this->button_MagicSquare->Location = System::Drawing::Point(43, 329);
			this->button_MagicSquare->Name = L"button_MagicSquare";
			this->button_MagicSquare->Size = System::Drawing::Size(101, 24);
			this->button_MagicSquare->TabIndex = 3;
			this->button_MagicSquare->Text = L"Magic square";
			this->button_MagicSquare->UseVisualStyleBackColor = true;
			this->button_MagicSquare->Click += gcnew System::EventHandler(this, &Form1::button_MagicSquare_Click);
			// 
			// listBox_Error
			// 
			this->listBox_Error->FormattingEnabled = true;
			this->listBox_Error->ItemHeight = 12;
			this->listBox_Error->Location = System::Drawing::Point(33, 377);
			this->listBox_Error->Name = L"listBox_Error";
			this->listBox_Error->Size = System::Drawing::Size(142, 172);
			this->listBox_Error->TabIndex = 5;
			// 
			// radioButton_up
			// 
			this->radioButton_up->AutoSize = true;
			this->radioButton_up->Checked = true;
			this->radioButton_up->Location = System::Drawing::Point(27, 16);
			this->radioButton_up->Name = L"radioButton_up";
			this->radioButton_up->Size = System::Drawing::Size(37, 16);
			this->radioButton_up->TabIndex = 6;
			this->radioButton_up->TabStop = true;
			this->radioButton_up->Text = L"Up";
			this->radioButton_up->UseVisualStyleBackColor = true;
			// 
			// radioButton_Down
			// 
			this->radioButton_Down->AutoSize = true;
			this->radioButton_Down->Location = System::Drawing::Point(27, 38);
			this->radioButton_Down->Name = L"radioButton_Down";
			this->radioButton_Down->Size = System::Drawing::Size(51, 16);
			this->radioButton_Down->TabIndex = 7;
			this->radioButton_Down->Text = L"Down";
			this->radioButton_Down->UseVisualStyleBackColor = true;
			// 
			// radioButton_Left
			// 
			this->radioButton_Left->AutoSize = true;
			this->radioButton_Left->Location = System::Drawing::Point(27, 61);
			this->radioButton_Left->Name = L"radioButton_Left";
			this->radioButton_Left->Size = System::Drawing::Size(42, 16);
			this->radioButton_Left->TabIndex = 8;
			this->radioButton_Left->Text = L"Left";
			this->radioButton_Left->UseVisualStyleBackColor = true;
			// 
			// radioButton_Right
			// 
			this->radioButton_Right->AutoSize = true;
			this->radioButton_Right->Location = System::Drawing::Point(27, 84);
			this->radioButton_Right->Name = L"radioButton_Right";
			this->radioButton_Right->Size = System::Drawing::Size(49, 16);
			this->radioButton_Right->TabIndex = 9;
			this->radioButton_Right->Text = L"Right";
			this->radioButton_Right->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton_Right);
			this->groupBox1->Controls->Add(this->radioButton_Left);
			this->groupBox1->Controls->Add(this->radioButton_Down);
			this->groupBox1->Controls->Add(this->radioButton_up);
			this->groupBox1->Location = System::Drawing::Point(33, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(147, 111);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"起始點";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox_Up);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(719, 475);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Text Output";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox_Up
			// 
			this->listBox_Up->FormattingEnabled = true;
			this->listBox_Up->ItemHeight = 12;
			this->listBox_Up->Location = System::Drawing::Point(6, 5);
			this->listBox_Up->Name = L"listBox_Up";
			this->listBox_Up->Size = System::Drawing::Size(707, 460);
			this->listBox_Up->TabIndex = 6;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(719, 475);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"DataGridView Output";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(3, 3);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(713, 469);
			this->dataGridView->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(196, 53);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(727, 501);
			this->tabControl1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 12);
			this->label3->TabIndex = 11;
			this->label3->Text = L"所有偶數的沒有做";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 12);
			this->label4->TabIndex = 12;
			this->label4->Text = L"奇數的各方向跟4n單一方向有做";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 594);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBox_Error);
			this->Controls->Add(this->button_MagicSquare);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_size);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Magic Square bu YiTing Lin 20240322 ver 0.1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void MagicSquare_4n(int size) {
			int number, n, i, j;

			//初始化矩陣 都設為0
			for (int ii = 0; ii < size; ii++) {

				for (int jj = 0; jj < size; jj++) {

					square[ii][jj] = 0;

				}
			}

			//MagicSquare_4n演算法
			for (j = 0; j < size; j++) {
				for (i = 0; i < size; i++) {
					if ((j + 1) % 4 == (i + 1) % 4 || ((j + 1) % 4 + (i + 1)) % 4 == 1)
						square[i][j] = (size - i) * size - j;
					else
						square[i][j] = i * size + j + 1;
				}
			}
			listBox_Error->Items->Add("4n魔術方陣完成");
			return;
		}


		void MagicSquare(int size) {
			int number,n,i, j, k, l, data;
			int tmp_i, tmp_j;

			//檢查input
			if ((size > 21) || size<5) {

				listBox_Error->Items->Add("輸入範圍請注意");
				return;

			}else if((size % 4) == 0 ) {

				MagicSquare_4n(size);
				listBox_Error->Items->Add("輸出為4n魔術方陣");
				return;
			}
			else if ((size % 2) == 0 && (size % 4)!=0) {
				listBox_Error->Items->Add("4n倍數的偶數才可以");
				return;
			}
			//初始化矩陣 都設為0
			for (int ii = 0; ii < size; ii++) {

				for (int jj = 0; jj < size; jj++) {

					square[ii][jj] = 0;

				}
			}

			//MagicSquare演算法
			data = size * size;

			//在Up的起始座標
			if (radioButton_up->Checked) {
		
				i = 0, j = size / 2;
				listBox_Error->Items->Add("U");
				for (number = 1; number <= data;number++) {

					while (square[i][j] > 0 && k < 100) {
						j = tmp_j;
						i = tmp_i + 1;

						k++;
					}


					square[i][j] = number;
					tmp_i = i;tmp_j = j;
					i = i - 1;
					j = j - 1;

					if (i < 0) {
						i = i + (size);
					}
					if (j < 0) {
						j = j + (size);
					}

				}
			}
			//Down
			if (radioButton_Down->Checked) {

				i = (size - 1), j = size / 2;
				listBox_Error->Items->Add("D");
				for (number = 1; number <= data;number++) {

					while (square[i][j] > 0 && k < 100) {
						j = tmp_j;
						i = tmp_i - 1;

						k++;
					}
					square[i][j] = number;
					tmp_i = i;tmp_j = j;
					i = i + 1;
					j = j + 1;

					if (i == size) {
						i = i - (size);
					}
					if (j == size) {
						j = j - (size);
					}

				}
			}
			//Left
			if (radioButton_Left->Checked) {

				i = size / 2, j = 0;
				listBox_Error->Items->Add("L");
				for (number = 1; number <= data;number++) {

					while (square[i][j] > 0 && k < 100) {
						j = tmp_j+1;
						i = tmp_i;
						k++;
					}
					square[i][j] = number;
					tmp_i = i;tmp_j = j;
					i = i + 1;
					j = j - 1;

					if (i == size) {
						i = i - (size);
					}
					if (j < 0) {
						j = j + (size);
					}

				}
			}
			//Right
			if (radioButton_Right->Checked) {

				i = size / 2, j = (size - 1);
				listBox_Error->Items->Add("R");
				for (number = 1; number <= data;number++) {

					while (square[i][j] > 0 ) {
						j = tmp_j-1;
						i = tmp_i;
						
					}
					square[i][j] = number;
					tmp_i = i;tmp_j = j;
					i = i - 1;
					j = j + 1;

					if (i < 0) {
						i = i + (size);
					}
					if (j == size) {
						j = j - (size);
					}

				}
			}
			listBox_Error->Items->Add("odd魔術方陣完成");
		}

	//print matrix with Text
		void PrintMatrix(int n ) {
			listBox_Up->Items->Clear();

			String^ data_str = "";

			int block_len = Convert::ToString(n * n)->Length + 5;

			// block_len 即存放那"固定欄寬"的長度, 目前設為比 n*n 數字的位數多2
			int blank_len = 0;

			int i, j, k; 
			String^ s; 

			for (i = 0; i < n; i++) {
				s = ""; // 清空字串 s

				for (j = 0; j < n; j++) {
					data_str = Convert::ToString(square[i][j]);

					// square 為魔術方塊矩陣; square[i][j] 是該魔術數字

					blank_len = block_len - data_str->Length;

					// 數字前的空格數 = 欄寬 - 數字的字元數

					for (k = 0; k < blank_len; k++)
						s += " "; // 在 s 字串前先預放 blank_len 偌多的空格

					s += data_str; // 將代表數字的字串, 接在 s 字串之後
				}

				listBox_Up->Items->Add(s);
			}
		}

	//用表格呈現矩陣
		void PrintMatrixGrid(int n) {
			
			dataGridView->RowCount = n;

			dataGridView->ColumnCount = n;

			for (int i = 0; i < n; i++)

			{
				for (int j = 0; j < n; j++)

				{
					dataGridView->Rows[i]->Cells[j]->Value = square[i][j];

				}
			}   
		}
		void Check(int size) {
			
			//每行橫的加起來
			for (int i =0;i < size;i++) {
				int row_count = 0;
				for (int j = 0; j < size ;j++) {
					row_count = row_count + square[i][j];
				}
				square[i][size] = row_count;

			}
			//每行直的加起來
			for (int j = 0;j < size;j++) {
				int col_count = 0;
				for (int i = 0; i < size;i++) {
					col_count = col_count + square[i][j];
				}
				square[size][j] = col_count;

			}
			//斜的加起來
			int slope_count = 0;
			for (int k = 0;k < size;k++) {
				
				slope_count = slope_count + square[k][k];
			}
			square[size][size] = slope_count;
		}

		
#pragma endregion

			

	// 按下MagicSquare按鈕
	private: System::Void button_MagicSquare_Click(System::Object^ sender, System::EventArgs^ e) {

		int size = int::Parse(textBox_size->Text);
		//執行產生magicsquare矩陣的函式
		MagicSquare(size);
		Check(size);
		PrintMatrix(size + 1);
		PrintMatrixGrid(size + 1);
	}
};

}
