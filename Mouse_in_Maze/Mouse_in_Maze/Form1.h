#pragma once

#include<stdio.h>
#include<stdlib.h>
#include <time.h> 
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
struct position step, next, stack[8000];

#define S 4


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
int** w;
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
	//for (int i = 0; i < m; i++) {

	//	for (int j = 0; j < p; j++) {
	//		
	//		w[i][j] = 1;

	//	}
	//}
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
int d;


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
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_Width);
			this->groupBox1->Controls->Add(this->textBox_Height);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(40, 135);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(218, 131);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// textBox_Width
			// 
			this->textBox_Width->Location = System::Drawing::Point(98, 88);
			this->textBox_Width->Name = L"textBox_Width";
			this->textBox_Width->Size = System::Drawing::Size(100, 25);
			this->textBox_Width->TabIndex = 3;
			this->textBox_Width->Text = L"10";
			// 
			// textBox_Height
			// 
			this->textBox_Height->Location = System::Drawing::Point(99, 39);
			this->textBox_Height->Name = L"textBox_Height";
			this->textBox_Height->Size = System::Drawing::Size(100, 25);
			this->textBox_Height->TabIndex = 2;
			this->textBox_Height->Text = L"10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Width =";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Height =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Generate Maze";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button_TxtRead
			// 
			this->button_TxtRead->Location = System::Drawing::Point(40, 103);
			this->button_TxtRead->Name = L"button_TxtRead";
			this->button_TxtRead->Size = System::Drawing::Size(103, 26);
			this->button_TxtRead->TabIndex = 2;
			this->button_TxtRead->Text = L"txt Read";
			this->button_TxtRead->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(52, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Depth First Search";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(52, 349);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 32);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Maze To Txt";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox_ErrorBox);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(678, 519);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox_ErrorBox
			// 
			this->listBox_ErrorBox->FormattingEnabled = true;
			this->listBox_ErrorBox->ItemHeight = 15;
			this->listBox_ErrorBox->Location = System::Drawing::Point(6, 3);
			this->listBox_ErrorBox->Name = L"listBox_ErrorBox";
			this->listBox_ErrorBox->Size = System::Drawing::Size(669, 514);
			this->listBox_ErrorBox->TabIndex = 6;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(678, 519);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(6, 7);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(669, 514);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(678, 519);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(3, 0);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 27;
			this->dataGridView->Size = System::Drawing::Size(679, 523);
			this->dataGridView->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(285, 33);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(686, 548);
			this->tabControl1->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 593);
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
			this->tabPage2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->tabControl1->ResumeLayout(false);
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

			//listBox_ErrorBox->Items->Add(Convert::ToString(f2[0].dx) + "," + Convert::ToString(step.y + f2[0].dy));
			//listBox_ErrorBox->Items->Add(Convert::ToString(f2[1].dx) + "," + Convert::ToString(step.y + f2[1].dy));
			//listBox_ErrorBox->Items->Add(Convert::ToString(f2[2].dx) + "," + Convert::ToString(step.y + f2[2].dy));
			//listBox_ErrorBox->Items->Add(Convert::ToString(f2[3].dx) + "," + Convert::ToString(step.y + f2[3].dy));
			
			step.x = 1;
			step.y = 1;
			next.x = 0;
			next.y = 0;
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
					next.x = f2[d].dx;
					next.y = f2[d].dy;
					if (step.x == stack[top-1].x && step.y == stack[top-1].y) {
						d--;
					}
					listBox_ErrorBox->Items->Add("next.x =" + Convert::ToString(next.x));
					listBox_ErrorBox->Items->Add("next.y =" + Convert::ToString(next.y));
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
							if(w[step.x + next.x][step.y + next.y] == 1){
								listBox_ErrorBox->Items->Add("positioin = (" + Convert::ToString(step.x + f2[d].dx) + "," + Convert::ToString(step.y + f2[d].dy) + ")" );
								w[step.x + f1[d].dx][step.y+ f1[d].dy] = 0;
								step.x = step.x + f2[d].dx;
								step.y = step.y + f2[d].dy;

								//連敲2格
								w[step.x ][step.y ] = 0;

								push(step);
 
							}
							else {
								listBox_ErrorBox->Items->Add("w[step.x + next.x][step.y + next.y] = " + Convert::ToString(w[step.x + next.x][step.y + next.y]) + "So Continue!");

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


		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	int p;
	int m;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		m = int::Parse(textBox_Height->Text);
		p = int::Parse(textBox_Width->Text);
		listBox_ErrorBox->Items->Add(Convert::ToString(m) + "," + Convert::ToString(p));
		//GenerateMaze(m,p);
		ReadTxt();
	}
};
}
