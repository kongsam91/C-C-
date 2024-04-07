#pragma once

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <fstream>



#pragma hdrstop
#define maxsize 1000
using namespace std;
//路徑向量化宣告
#define possible_directions 8


enum directions { //enum 用來定義列舉 ;
	N = 0
	, NE = 1
	, E = 2
	, SE = 3
	, S = 4
	, SW = 5
	, W = 6
	, NW = 7
};

struct offset {	//struct 自定義offset 這個datatype 輸出的東西是2個int，用來定義位移表的
	int dx, dy;
};

//賦予實體空間
struct offset move[possible_directions] = {
		{-1, 0},    // N
		{-1, 1},    // NE
		{0, 1},     // E
		{1, 1},     // SE
		{1, 0},     // S
		{1, -1},    // SW
		{0, -1},    // W
		{-1, -1}    // NW
};

//position 自定義data type
struct position {
	int x, y;
	directions dir;
};

struct offset f1[4] = {
	{0, 1},    //E
	{-1, 0},	//N
	{0, -1},	//W
	{1, 0}	//S
};
struct offset f2[4] = {
	{0, 2},    //E
	{-2, 0},
	{0, -2},
	{2, 0}
};

struct position size,step, nextt, stack[8000];

int** w;
int** ww;
int** mark;
void initiation(int m , int p) {

	//拜託不要int ** w = new int* [m]; 他馬卡超久...
	w = new int* [m];
	for (int i = 0; i < m; i++) {

		w[i] = new int[p];

	}

	struct offset f1[4] = {
		{0, 1},    //E
		{-1, 0},
		{0, -1},
		{1, 0}
	};
	struct offset f2[4] = {
		{0, 2},    //E
		{-2, 0},
		{0, -2},
		{2, 0}
	};

	//產生迷宮外邊界
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < p; j++) {

			if (i == 0 || j == 0 || i == m - 1 || j == p - 1) {
				w[i][j] = 2;
			}
			else {
				w[i][j] = 1;
				//mainMaze[i][j] = 0;
			}

		}
	}

}
//stack用的東西 
int top = -1;
int d,SizeR,SizeC;


namespace CppCLRWinFormsProject {
	using namespace System::Runtime::InteropServices;

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_Width;

	private: System::Windows::Forms::TextBox^ textBox_Height;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_TxtRead;
	private: System::Windows::Forms::Button^ button2;






	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::ListBox^ listBox_ErrorBox;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;





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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_Width = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Height = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_TxtRead = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox_ErrorBox = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_Width);
			this->groupBox1->Controls->Add(this->textBox_Height);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(30, 108);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(164, 105);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// textBox_Width
			// 
			this->textBox_Width->Location = System::Drawing::Point(74, 70);
			this->textBox_Width->Margin = System::Windows::Forms::Padding(2);
			this->textBox_Width->Name = L"textBox_Width";
			this->textBox_Width->Size = System::Drawing::Size(76, 22);
			this->textBox_Width->TabIndex = 3;
			this->textBox_Width->Text = L"10";
			// 
			// textBox_Height
			// 
			this->textBox_Height->Location = System::Drawing::Point(74, 31);
			this->textBox_Height->Margin = System::Windows::Forms::Padding(2);
			this->textBox_Height->Name = L"textBox_Height";
			this->textBox_Height->Size = System::Drawing::Size(76, 22);
			this->textBox_Height->TabIndex = 2;
			this->textBox_Height->Text = L"10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 72);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Width =";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Height =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 234);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate Maze";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button_TxtRead
			// 
			this->button_TxtRead->Location = System::Drawing::Point(30, 82);
			this->button_TxtRead->Margin = System::Windows::Forms::Padding(2);
			this->button_TxtRead->Name = L"button_TxtRead";
			this->button_TxtRead->Size = System::Drawing::Size(77, 21);
			this->button_TxtRead->TabIndex = 2;
			this->button_TxtRead->Text = L"txt Read";
			this->button_TxtRead->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(39, 317);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Depth First Search";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(39, 279);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 26);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Maze To Txt";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox_ErrorBox);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(506, 412);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox_ErrorBox
			// 
			this->listBox_ErrorBox->FormattingEnabled = true;
			this->listBox_ErrorBox->ItemHeight = 12;
			this->listBox_ErrorBox->Location = System::Drawing::Point(4, 2);
			this->listBox_ErrorBox->Margin = System::Windows::Forms::Padding(2);
			this->listBox_ErrorBox->Name = L"listBox_ErrorBox";
			this->listBox_ErrorBox->Size = System::Drawing::Size(503, 412);
			this->listBox_ErrorBox->TabIndex = 6;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(506, 412);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(4, 6);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(503, 412);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(506, 412);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(2, 0);
			this->dataGridView->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 27;
			this->dataGridView->Size = System::Drawing::Size(509, 418);
			this->dataGridView->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(214, 26);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(514, 438);
			this->tabControl1->TabIndex = 4;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->richTextBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(506, 412);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(7, 9);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(480, 335);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 484);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button_TxtRead);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		// stack的操作
		void push(struct position element) {

			if (IsFull()) {
				//StackFull();
			}
			else {
				stack[++top] = element;
			}
		}
		// stack的操作
		struct position pop() {

			if (IsEmpty()) {
				//StackEmpty();
				position emptypostion;
				emptypostion.x = -1;
				emptypostion.y = -1;

				return  emptypostion; //定義pop() 回傳-1 表示stack已是空
			}
			else {
				return stack[top--];
			}

		}

		int IsFull() {

			if (top == maxsize - 1) return 1;
			else return 0;

		}
		int IsEmpty() {

			if (top == -1) return 1;
			else return 0;

		}

		void GenerateMaze(int m,int p) {
			m = m + 2;
			p = p + 2;
			initiation(m,p);
		
			step.x = 1;
			step.y = 1;
			nextt.x = 0;
			nextt.y = 0;
			w[step.x][step.y] = 0;

			int i = 0;
			int j = 0;
			int count = 0;
			srand(time(NULL));
			listBox_ErrorBox->Items->Add(Convert::ToString(step.x) +"," + Convert::ToString(step.y));
			push((step));

			while (top != -1 && j < 1000) {
				pop();
				listBox_ErrorBox->Items->Add("pop = (" + Convert::ToString(step.x) + "," + Convert::ToString(step.y) + ")");
				while (NextMove(step) && i<1000) {

					listBox_ErrorBox->Items->Add("---------------");
					d = rand()%4; //rand在0~3
					nextt.x = f2[d].dx;
					nextt.y = f2[d].dy;
					if (step.x == stack[top-1].x && step.y == stack[top-1].y) {
						d--;
					}
					listBox_ErrorBox->Items->Add("next.x =" + Convert::ToString(nextt.x));
					listBox_ErrorBox->Items->Add("next.y =" + Convert::ToString(nextt.y));
					//bug!!!!
					if (count == 10) {
						listBox_ErrorBox->Items->Add("1010 d =" + Convert::ToString(d));
						break;
					}
					if ( (step.x + f2[d].dx < 0) || (step.y + f2[d].dy < 0) || (( (step.x + f2[d].dx) > m) || ((step.y + f2[d].dy) > p))) {
						listBox_ErrorBox->Items->Add("(step + next.x < 0) || (step + next.y < 0) IS TRUE");
						listBox_ErrorBox->Items->Add("fail postion");
						listBox_ErrorBox->Items->Add(Convert::ToString((step.x + f2[d].dx))+","+Convert::ToString((step.y + f2[d].dy)) );
;
						count++;
						continue;

					} else {
							if(w[step.x + nextt.x][step.y + nextt.y] == 1){
								listBox_ErrorBox->Items->Add("positioin = (" + Convert::ToString(step.x + f2[d].dx) + "," + Convert::ToString(step.y + f2[d].dy) + ")" );
								w[step.x + f1[d].dx][step.y+ f1[d].dy] = 0;
								step.x = step.x + f2[d].dx;
								step.y = step.y + f2[d].dy;

								//連敲2格
								w[step.x ][step.y ] = 0;

								push(step);
 
							}
							else {
								listBox_ErrorBox->Items->Add("w[step.x + next.x][step.y + next.y] = " + Convert::ToString(w[step.x + nextt.x][step.y + nextt.y]) + "So Continue!");

								continue;
							}
					}
					
					i++;
					
				}
				j++;
			}

			//pirnt 矩陣use text
			PrintMatrixText(m, p);
			PrintMatrixGrid(m, p);
			//release動態矩陣記憶體
			for (int i = 0;i < m;i++) {
				delete[] w[i];
			}
			delete[] w;
			
		}
		//print Maze use text
		void PrintMatrixText(int m, int p) {

			for (int i = 0; i < m; i++) {
				String^ s;
				String^ data_str = "";
				s = ""; // 清空字串 s
				int block_len = Convert::ToString(m * p)->Length + 5;
				int blank_len = 0;

				for (int j = 0; j < p; j++) {
					data_str = Convert::ToString(w[i][j]);

					blank_len = block_len - data_str->Length;

					for (int k = 0; k < blank_len; k++)
						s += " "; // 在 s 字串前先預放 blank_len 偌多的空格

					s += data_str; // 將代表數字的字串, 接在 s 字串之後
				}

				listBox_ErrorBox->Items->Add(s);
			}
		}

		void PrintMatrixGrid(int n, int p) {

			dataGridView->RowCount = n; dataGridView->ColumnCount = p;

			int rowheight = dataGridView->Height / (dataGridView->RowCount);
			dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::None;
			dataGridView->ColumnHeadersVisible = false;
			dataGridView->RowHeadersVisible = false;
			for (int i;i < n;i++) {
				dataGridView->Rows[i]->Height = rowheight;
			}

			for (int i = 0; i < n; i++)

			{
				for (int j = 0; j < p; j++)

				{
					dataGridView->Rows[i]->Cells[j]->Value = w[i][j];

				}
			}

		}

		//int NextMove(struct position step,int ** mainMaze) {
		int NextMove(struct position step) {
			for (int i = 0;i < 4;i++) {
				//listBox_ErrorBox->Items->Add("next possible positoin:"+ Convert::ToString(step.x + f2[i].dx) + "," + Convert::ToString(step.y + f2[i].dy));
				if ((step.x + f2[i].dx < 0) || (step.y + f2[i].dy < 0) || ((step.x + f2[i].dx > m)|| (step.y + f2[i].dy > m))) {
					//listBox_ErrorBox->Items->Add("continue");
					continue; 
				}
				//MessageBox::Show(Convert::ToString(step.x + f2[i].dx));
				//MessageBox::Show(Convert::ToString(step.x + f2[i].dx));
				if (w[step.x + f2[i].dx][step.y + f2[i].dy] = 1) {
					listBox_ErrorBox->Items->Add("Can NextMove");
					return 1;
				}
				else { continue; }
			}
			
			listBox_ErrorBox->Items->Add("NO NextMove");
			return 0;
			
		}
		
		void ReadTxt() {
			String^ a;
			String^ b;
			String^ S;
			int m, p;
			char* fname;
			int i=0, j=0, p1, p2, len;

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) // 順利開啟檔案才繼續往下做

			{
				richTextBox1->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);

				S = richTextBox1->Lines[0];

				p1 = S->IndexOf(" ");

				m = int::Parse(S->Substring(0, p1));

				p = int::Parse(S->Substring(p1 + 1, S->Length - p1 - 1));

				m=m+2;p=p+2;

				w = new int* [m];

				for (i = 0; i < m; i++)

				{
					w[i] = new int[p];

				}
				
				//產生記錄走過的
				mark = new int* [m];
				for (i = 0; i < m; i++){

					mark[i] = new int[p];

				}

				for (i = 0; i < m; i++) {

					for (j = 0; i < p; i++) {

						mark[i][j] = 0;

					}

				}
				
				//邊界圍牆
				for (int i = 0; i < m; i++) {

					for (int j = 0; j < p; j++) {

						if (i == 0 || j == 0 || i == m - 1 || j == p - 1) {
							w[i][j] = 1;
						}

					}
				}
				//迷宮移到圍牆裡面
				for (i = 1; i <= m-2; i++)

				{
					S = richTextBox1->Lines[i];

					for (j = 0; j < p-2; j++)

						w[i ][j +1] = int::Parse(S->Substring(2 * j, 1));

				}

			}
			dataGridView->RowCount = m;                // Define the size of dataGridView1
			SizeR = m;
			dataGridView->ColumnCount = p;
			SizeC = p;
			dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::None;
			dataGridView->ColumnHeadersVisible = false;
			dataGridView->RowHeadersVisible = false;
			int rowheight = dataGridView->Height / (dataGridView->RowCount);

			//調整欄高
			for (int i;i < m;i++) {
				dataGridView->Rows[i]->Height = rowheight;
			}
			//值到表格
			for (int i = 0; i < m; i++)

			{
				for (int j = 0; j < p; j++)

				{
					dataGridView->Rows[i]->Cells[j]->Value = w[i][j];

				}
			}

			//上色
			for (i = 0; i < m; i++){   

				for (j = 0; j < p; j++)

				{
					if (w[i][j] == 2)

						dataGridView->Rows[i]->Cells[j]->Style->BackColor = Color::Olive; // Beige; //IndianRed;

					else

						// dataGridView1->Rows[i]->Cells[j]->Value =  maze[i][j];

						if (w[i][j] == 1)

							dataGridView->Rows[i]->Cells[j]->Style->BackColor = Color::DarkKhaki; //LightGray              else dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Ivory; //象牙色;

				}

			}

			//回收動態矩陣
			for (i = 0; i < m; i++)

			{
				delete w[i];

			}

			delete [] w ;

		}
		void GoMaze() {
			struct offset move[possible_directions] = {
					{-1, 0},    // N
					{-1, 1},    // NE
					{0, 1},     // E
					{1, 1},     // SE
					{1, 0},     // S
					{1, -1},    // SW
					{0, -1},    // W
					{-1, -1}    // NW
			};
			int i, j, dir;
			int m = SizeR, p=SizeC;
			step.x = 1;step.y = 1;step.dir = E;

			push(step);
			while (top != -1) {
				pop();
				i = step.x; j = step.y; dir = step.dir;

				while (dir <= 7) {
					int u = step.x + move[d].dx;int v = step.y + move[d].dy;
						if (w[u][v] == 0 && mark[u][v] ) {

					}

				}

				
			}
		
		};

#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	int p;
	int m;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		m = int::Parse(textBox_Height->Text);
		p = int::Parse(textBox_Width->Text);
		//listBox_ErrorBox->Items->Add(Convert::ToString(m) + "," + Convert::ToString(p));
		//GenerateMaze(m,p);
		ReadTxt();
		GoMaze();
	}
};
}
