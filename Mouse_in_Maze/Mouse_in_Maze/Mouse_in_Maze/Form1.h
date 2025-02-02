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




	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_Width);
			this->groupBox1->Controls->Add(this->textBox_Height);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(45, 162);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(25, 15);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// textBox_Width
			// 
			this->textBox_Width->Location = System::Drawing::Point(111, 105);
			this->textBox_Width->Name = L"textBox_Width";
			this->textBox_Width->Size = System::Drawing::Size(112, 29);
			this->textBox_Width->TabIndex = 3;
			this->textBox_Width->Text = L"10";
			// 
			// textBox_Height
			// 
			this->textBox_Height->Location = System::Drawing::Point(111, 46);
			this->textBox_Height->Name = L"textBox_Height";
			this->textBox_Height->Size = System::Drawing::Size(112, 29);
			this->textBox_Height->TabIndex = 2;
			this->textBox_Height->Text = L"10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Width =";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Height =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(58, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate Maze";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button_TxtRead
			// 
			this->button_TxtRead->Location = System::Drawing::Point(45, 123);
			this->button_TxtRead->Name = L"button_TxtRead";
			this->button_TxtRead->Size = System::Drawing::Size(13, 12);
			this->button_TxtRead->TabIndex = 2;
			this->button_TxtRead->Text = L"txt Read";
			this->button_TxtRead->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1142, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(10, 10);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Depth First Search";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1142, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(10, 10);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Maze To Txt";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox_ErrorBox);
			this->tabPage3->Location = System::Drawing::Point(4, 28);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(763, 625);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Process";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox_ErrorBox
			// 
			this->listBox_ErrorBox->FormattingEnabled = true;
			this->listBox_ErrorBox->ItemHeight = 18;
			this->listBox_ErrorBox->Location = System::Drawing::Point(6, 5);
			this->listBox_ErrorBox->Name = L"listBox_ErrorBox";
			this->listBox_ErrorBox->Size = System::Drawing::Size(752, 598);
			this->listBox_ErrorBox->TabIndex = 6;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(321, 39);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(771, 657);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView);
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(763, 625);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"GridView";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(0, 3);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 27;
			this->dataGridView->Size = System::Drawing::Size(767, 624);
			this->dataGridView->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(62, 146);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(205, 141);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 726);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button_TxtRead);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);

		}

		int IsFull() {

			if (top == maxsize - 1) return 1;
			else return 0;

		}
		int IsEmpty() {

			if (top == -1) return 1;
			else return 0;

		}
		// stack的操作
		void push(struct position element) {

			if (IsFull()) {
				//StackFull();
			}
			else {
				stack[++top] = element;
				//top++;
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
				listBox_ErrorBox->Items->Add("top_stack = " + top);
				return stack[top--];

			}

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
			//for (int i = 0;i < m;i++) {
			//	delete[] w[i];
			//}
			//delete[] w;
			
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
					data_str = Convert::ToString(mark[i][j]);

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
				ww = new int* [m];

				for (i = 0; i < m; i++) {

					ww[i] = new int[p];

				}

				for (int i = 0; i < m; i++) {

					for (int j = 0; j < p; j++) {

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
			for (int i =0 ;i < m;i++) {
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
			for (int i = 0; i < m; i++)

			{
				for (int j = 0; j < p; j++)

				{
					 ww[i][j] = w[i][j];

				}
			}
			//上色
			for (i = 0; i < m; i++){   

				for (j = 0; j < p; j++) {

					if (w[i][j] == 2) {

						dataGridView->Rows[i]->Cells[j]->Style->BackColor = Color::Olive; // Beige; //IndianRed;

					}
					else if(w[i][j] == 1) {

						// dataGridView1->Rows[i]->Cells[j]->Value =  maze[i][j];
						dataGridView->Rows[i]->Cells[j]->Style->BackColor = Color::DarkKhaki; //LightGray              else dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Ivory; //象牙色;

					}
				}

			}
			
		}
		void GoMaze() {
			struct offset move[possible_directions] = {
					{-1, 0},    // N 0
					{-1, 1},    // NE 1
					{0, 1},     // E 2
					{1, 1},     // SE 3
					{1, 0},     // S 4
					{1, -1},    // SW 5
					{0, -1},    // W 6
					{-1, -1}    // NW 7
			};

			int i, j, dir,status=0;
			int m = SizeR - 2, p = SizeC - 2; //出口
			step.x = 1;step.y = 1; //入口
			step.dir = directions(0);
			mark[step.x][step.y] = 1;
			push(step);
			listBox_ErrorBox->Items->Add("m,p = " + m + "," + p);
			while (top != -1) {

				step = pop();
				
				i = step.x; j = step.y; dir = step.dir;
				dir = 0;

				listBox_ErrorBox->Items->Add("top = " + top);
				listBox_ErrorBox->Items->Add("pop = (" + Convert::ToString(i) + "," + Convert::ToString(j) + "," + Convert::ToString(dir) + ")");
				
				while (dir <= 7) {
					listBox_ErrorBox->Items->Add("dir = " + dir);
					int u = i+ move[dir].dx;
					int v = j+ move[dir].dy;
					listBox_ErrorBox->Items->Add(u + "," + v);
					if (u < 0 || v < 0) {

						dir++;
						continue;

					}
					if (ww[u][v] == 0 && mark[u][v] == 0) {
						//如果到出口了

						if ((u == m) && (v == p)) {

							mark[u][v] = 1;
							listBox_ErrorBox->Items->Add("出口找到了");
							status = 1;
							
							break;
						}

						mark[u][v] = 1;
						step.x = u; step.y = v;
						//step.dir = static_cast<directions>(dir);
						step.dir = directions(dir);
						i = u;j = v;
						listBox_ErrorBox->Items->Add("step = (" + Convert::ToString(step.x) + "," + Convert::ToString(step.y) + "," + Convert::ToString(dir) + ")");
						listBox_ErrorBox->Items->Add("------------------------");
						push(step);
						dir = 0;
						continue;

					}
					else dir++;

				}
				//break;

				if (status == 1) break; {

				}
			}
			if (status == 0)  listBox_ErrorBox->Items->Add("迷宮無解"); 
			
			//上色mark
			for (int a = 0; a < SizeR; a++) {

				for (int b = 0; b < SizeC; b++) {

					if (mark[a][b] == 1) {

						dataGridView->Rows[a]->Cells[b]->Style->BackColor = Color::Cyan;

					}
				}

			}
			PrintMatrixText(m+2, p+2);
			
			for (int i = 0; i < SizeR; i++) {

				delete mark[i];
				delete ww[i];

			}
			delete[] mark;
			delete[] ww;
		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	int p;
	int m;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		m = int::Parse(textBox_Height->Text);
		p = int::Parse(textBox_Width->Text);
		ReadTxt();
		GoMaze();

	}
};
}
