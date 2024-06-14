#pragma once

#include<stdlib.h>
#include <time.h> 
#include <string> 

int** G;
int* D;
int* found;
int* C;
int** A;
int** TC;

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
	private: System::Windows::Forms::Button^ button_GenerateGraph;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_n;
	private: System::Windows::Forms::TextBox^ textBox_range;
	private: System::Windows::Forms::TextBox^ textBox_maxRange;


	private: System::Windows::Forms::TextBox^ textBox_largeInt;
	private: System::Windows::Forms::TextBox^ textBox_Source;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button_SSAD;
	private: System::Windows::Forms::Button^ button_AASD;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	protected:

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
			this->button_GenerateGraph = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox_range = (gcnew System::Windows::Forms::TextBox());
			this->textBox_maxRange = (gcnew System::Windows::Forms::TextBox());
			this->textBox_largeInt = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Source = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button_SSAD = (gcnew System::Windows::Forms::Button());
			this->button_AASD = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// button_GenerateGraph
			// 
			this->button_GenerateGraph->Location = System::Drawing::Point(27, 373);
			this->button_GenerateGraph->Margin = System::Windows::Forms::Padding(4);
			this->button_GenerateGraph->Name = L"button_GenerateGraph";
			this->button_GenerateGraph->Size = System::Drawing::Size(186, 32);
			this->button_GenerateGraph->TabIndex = 0;
			this->button_GenerateGraph->Text = L"Generate graph";
			this->button_GenerateGraph->UseVisualStyleBackColor = true;
			this->button_GenerateGraph->Click += gcnew System::EventHandler(this, &Form1::button_GenerateGraph_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(248, 19);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(776, 390);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 30);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(768, 356);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Graph adjacent matrix";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(762, 360);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView5);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 30);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(768, 356);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"SSAD table";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(252, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->Size = System::Drawing::Size(135, 353);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Location = System::Drawing::Point(4, 30);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(768, 356);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"AASD";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(6, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 27;
			this->dataGridView3->Size = System::Drawing::Size(756, 347);
			this->dataGridView3->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView4);
			this->tabPage4->Location = System::Drawing::Point(4, 30);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(768, 356);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Transitive Closure";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(3, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 27;
			this->dataGridView4->Size = System::Drawing::Size(762, 347);
			this->dataGridView4->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n = ";
			// 
			// textBox_n
			// 
			this->textBox_n->Location = System::Drawing::Point(143, 102);
			this->textBox_n->Name = L"textBox_n";
			this->textBox_n->Size = System::Drawing::Size(70, 31);
			this->textBox_n->TabIndex = 3;
			this->textBox_n->Text = L"11";
			// 
			// textBox_range
			// 
			this->textBox_range->Location = System::Drawing::Point(143, 152);
			this->textBox_range->Name = L"textBox_range";
			this->textBox_range->Size = System::Drawing::Size(70, 31);
			this->textBox_range->TabIndex = 4;
			this->textBox_range->Text = L"1000";
			// 
			// textBox_maxRange
			// 
			this->textBox_maxRange->Location = System::Drawing::Point(143, 207);
			this->textBox_maxRange->Name = L"textBox_maxRange";
			this->textBox_maxRange->Size = System::Drawing::Size(70, 31);
			this->textBox_maxRange->TabIndex = 5;
			this->textBox_maxRange->Text = L"500";
			// 
			// textBox_largeInt
			// 
			this->textBox_largeInt->Location = System::Drawing::Point(143, 262);
			this->textBox_largeInt->Name = L"textBox_largeInt";
			this->textBox_largeInt->Size = System::Drawing::Size(70, 31);
			this->textBox_largeInt->TabIndex = 6;
			this->textBox_largeInt->Text = L"99999";
			// 
			// textBox_Source
			// 
			this->textBox_Source->Location = System::Drawing::Point(143, 316);
			this->textBox_Source->Name = L"textBox_Source";
			this->textBox_Source->Size = System::Drawing::Size(70, 31);
			this->textBox_Source->TabIndex = 7;
			this->textBox_Source->Text = L"5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"range =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"range(w(e)) =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"if w(e) >";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(67, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"w(e) =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 319);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Source no. =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(12, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(211, 37);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Graph Setting";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(252, 427);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(768, 184);
			this->listBox1->TabIndex = 13;
			// 
			// button_SSAD
			// 
			this->button_SSAD->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button_SSAD->Location = System::Drawing::Point(27, 427);
			this->button_SSAD->Name = L"button_SSAD";
			this->button_SSAD->Size = System::Drawing::Size(186, 41);
			this->button_SSAD->TabIndex = 14;
			this->button_SSAD->Text = L"Single Source All Destination";
			this->button_SSAD->UseVisualStyleBackColor = true;
			this->button_SSAD->Click += gcnew System::EventHandler(this, &Form1::button_SSAD_Click);
			// 
			// button_AASD
			// 
			this->button_AASD->Location = System::Drawing::Point(27, 494);
			this->button_AASD->Name = L"button_AASD";
			this->button_AASD->Size = System::Drawing::Size(186, 38);
			this->button_AASD->TabIndex = 15;
			this->button_AASD->Text = L"AASD and T.C";
			this->button_AASD->UseVisualStyleBackColor = true;
			this->button_AASD->Click += gcnew System::EventHandler(this, &Form1::button_AASD_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(7, 0);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 27;
			this->dataGridView5->Size = System::Drawing::Size(135, 356);
			this->dataGridView5->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 647);
			this->Controls->Add(this->button_AASD);
			this->Controls->Add(this->button_SSAD);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_Source);
			this->Controls->Add(this->textBox_largeInt);
			this->Controls->Add(this->textBox_maxRange);
			this->Controls->Add(this->textBox_range);
			this->Controls->Add(this->textBox_n);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button_GenerateGraph);
			this->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int CheckFoundEmpty(int n) { 
			
			for (int i = 0;i < n;i++) {
				if (found[i] == 0) {
					return 1;
				}			
			}
			return 0;
		}

		// min index in D
		int MinimizeD(int n ) {
			int min = 99999, index = 0;
			
			for (int i = 0; i < n; i++) {
				if ( (D[i] < min) && (found[i]==0) ) {
					min = D[i];
					index = i;
				}

			}
			return index;

		}

		void Dijkstra(int n) {
			int u = int::Parse(textBox_Source->Text); //source

			found = new int[n];
			for (int i = 0; i < n;i++) { 
				found[i] = 0;
			}
			found[u] = 1;

			C = new int[n];
			D = new int[n]; //最短距離存放矩陣 called D

			for (int v = 0;v < n;v++) {
				D[v] = G[u][v];
				C[v] = u;
			} 

			int j = 0;
			while ( CheckFoundEmpty(n) && j<n) {

				int k = MinimizeD(n);
				found[k] = 1;
				for (int i = 0;i < n;i++) {
					if ((!found[i]) && (D[k] + G[k][i] < D[i]) ) {
						D[i] = D[k] + G[k][i];
						C[i] = k;

					}
				}

				j++;
			}


			dataGridView2->RowCount = n;
			dataGridView2->ColumnCount = 1;

			dataGridView5->RowCount = n;
			dataGridView5->ColumnCount = 1;

			for (int i = 0; i < n; i++) {
				//dataGridView2->Rows[i]->Cells[0]->Value = D[i];
				dataGridView2->Rows[i]->Cells[0]->Value = C[i];
				dataGridView5->Rows[i]->Cells[0]->Value = D[i];
			}

			//delete[] found;
			//delete[] C;
			//delete[] D;

		}
		//amd transitive closure
		void AASD() {
			int n = int::Parse(textBox_n->Text);

			if (A != NULL) {
				for (int i = 0; i < n; i++) {
					delete[] A[i];
				}
				delete[] A;
			}

			if (TC != NULL) {
				for (int i = 0; i < n; i++) {
					delete[] TC[i];
				}
				delete[] TC;
			}

			A = new int* [n];
			TC = new int* [n];

			for (int i = 0; i < n; i++) {

				A[i] = new int[n];
				TC[i] = new int[n];

			}


			for (int i = 0;i < n;i++) {
				for (int j = 0;j < n;j++) {
					A[i][j] = G[i][j];
				}
			}

			for(int k =0; k<n;k++){
				for (int i = 0;i < n;i++) {
					for (int j = 0;j < n;j++) {
						A[i][j] = min( A[i][j] , A[i][k]+A[k][j] );
					}
				}
			}
			for (int i = 0;i < n;i++) {
				for (int j = 0;j < n;j++) {
					if (A[i][j] == 99999) {
						TC[i][j] = 0;
					}
					else {
						TC[i][j] = 1;
					}
				}
			}

			dataGridView3->RowCount = n;
			dataGridView3->ColumnCount = n;
			dataGridView3->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width

			for (int i = 0; i < n; i++) {

				dataGridView3->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
				dataGridView3->Columns[i]->HeaderCell->Value = i.ToString(); // Setting column headers text.
				for (int j = 0; j < n; j++) {

					dataGridView3->Rows[i]->Cells[j]->Value = A[i][j];

				}

			}

			dataGridView4->RowCount = n;
			dataGridView4->ColumnCount = n;
			dataGridView4->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width

			for (int i = 0; i < n; i++) {

				dataGridView4->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
				dataGridView4->Columns[i]->HeaderCell->Value = i.ToString(); // Setting column headers text.
				for (int j = 0; j < n; j++) {

					dataGridView4->Rows[i]->Cells[j]->Value = TC[i][j];

				}

			}

		}

		int min(int a ,int b) {
			if (a < b) return a;
			else return b;
		}

		void ShowPath() {
			int n = int::Parse(textBox_n->Text);          
			int u = int::Parse(textBox_Source->Text);     
			String^ r ="";
			int b;int a;
			for (int v = 0; v < n; v++) {
				r = "";
				if (v != u && C[v]!=99999) { //非source
					r = Convert::ToString(v); // Start from the destination node
					b = v;//distanation
					a = C[v];
					while(a != u) {
						r = Convert::ToString(a) + "--[" + Convert::ToString(G[a][b]) + "]" +r;
						b = a; //distanation
						a = C[b];
					}
					r = Convert::ToString(u) + "--[" + Convert::ToString(G[u][b]) + "]" + r;
					listBox1->Items->Add(r);
				}
			}
		}
#pragma endregion

	private: System::Void button_GenerateGraph_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox_n->Text);
		int range = int::Parse(textBox_range->Text);
		int maxRange = int::Parse(textBox_maxRange->Text);
		int largeInt = int::Parse(textBox_largeInt->Text);
		srand(time(NULL));

		
		// delete 上次的
		if (G != NULL) {
			for (int i = 0; i < n; i++) {
				delete[] G[i];
			}
			delete[] G;
		}


		G = new int* [n];
		for (int i = 0; i < n; i++) {

			G[i] = new int[n];

		}

		// Filling G with random values within maxRange
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int k = rand() % (range + 1);
				if (k < maxRange) {
					G[i][j] = k;
				}
				else {
					G[i][j] = largeInt; 
				}
				G[j][i] = G[i][j];
			}
			G[i][i] = 0; //自己到自己
		}

		//老畫圖寶了
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = n;
		dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width

		for (int i = 0; i < n; i++) {

			dataGridView1->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
			dataGridView1->Columns[i]->HeaderCell->Value = i.ToString(); // Setting column headers text.
			for (int j = 0; j < n; j++) {

				dataGridView1->Rows[i]->Cells[j]->Value = G[i][j];

			}

		}
	}
	//SSAD
	private: System::Void button_SSAD_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox_n->Text);
		Dijkstra(n);
	}
	private: System::Void button_AASD_Click(System::Object^ sender, System::EventArgs^ e) {
		AASD();
		ShowPath();

	}
};
}
