#pragma once
#include<stdlib.h>
#include <time.h> 
#include <string> 
#define MaxSize 21

int list_SelectionSort[10000000]; //全域變數
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
	private: System::Windows::Forms::TabControl^ tab1;
	protected:

	protected:

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

	private: System::Windows::Forms::Label^ label_error;
	private: System::Windows::Forms::CheckBox^ checkBox_SelfCheck;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label_CPUTIME_SS;
	private: System::Windows::Forms::CheckBox^ checkBox_PrintOutPut;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label_range;
	private: System::Windows::Forms::TextBox^ textBox_range;
	private: System::Windows::Forms::Button^ button_SelectionSort;
	private: System::Windows::Forms::ListBox^ listBox_SelectionSort;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button_DataGenerator;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button_Plot;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_Step;
	private: System::Windows::Forms::TextBox^ textBox_FirstPoint;
	private: System::Windows::Forms::TextBox^ textBox_StepTimes;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox_Test;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
































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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tab1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox_BubbleSort = (gcnew System::Windows::Forms::ListBox());
			this->listBox_SelectionSort = (gcnew System::Windows::Forms::ListBox());
			this->label_BubbleSort = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_BinarySearch = (gcnew System::Windows::Forms::TextBox());
			this->listBox_BinarySearch = (gcnew System::Windows::Forms::ListBox());
			this->button_BinarySearch = (gcnew System::Windows::Forms::Button());
			this->label_CPUTIME_BS = (gcnew System::Windows::Forms::Label());
			this->button_BubbleSort = (gcnew System::Windows::Forms::Button());
			this->label_error = (gcnew System::Windows::Forms::Label());
			this->checkBox_SelfCheck = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_CPUTIME_SS = (gcnew System::Windows::Forms::Label());
			this->checkBox_PrintOutPut = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_range = (gcnew System::Windows::Forms::Label());
			this->textBox_range = (gcnew System::Windows::Forms::TextBox());
			this->button_SelectionSort = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button_DataGenerator = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->listBox_Test = (gcnew System::Windows::Forms::ListBox());
			this->textBox_StepTimes = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_Step = (gcnew System::Windows::Forms::TextBox());
			this->textBox_FirstPoint = (gcnew System::Windows::Forms::TextBox());
			this->button_Plot = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tab1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// tab1
			// 
			this->tab1->Controls->Add(this->tabPage1);
			this->tab1->Controls->Add(this->tabPage2);
			this->tab1->Location = System::Drawing::Point(4, 2);
			this->tab1->Name = L"tab1";
			this->tab1->SelectedIndex = 0;
			this->tab1->ShowToolTips = true;
			this->tab1->Size = System::Drawing::Size(1291, 570);
			this->tab1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox_BubbleSort);
			this->tabPage1->Controls->Add(this->listBox_SelectionSort);
			this->tabPage1->Controls->Add(this->label_BubbleSort);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox_BinarySearch);
			this->tabPage1->Controls->Add(this->listBox_BinarySearch);
			this->tabPage1->Controls->Add(this->button_BinarySearch);
			this->tabPage1->Controls->Add(this->label_CPUTIME_BS);
			this->tabPage1->Controls->Add(this->button_BubbleSort);
			this->tabPage1->Controls->Add(this->label_error);
			this->tabPage1->Controls->Add(this->checkBox_SelfCheck);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label_CPUTIME_SS);
			this->tabPage1->Controls->Add(this->checkBox_PrintOutPut);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label_range);
			this->tabPage1->Controls->Add(this->textBox_range);
			this->tabPage1->Controls->Add(this->button_SelectionSort);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->button_DataGenerator);
			this->tabPage1->Location = System::Drawing::Point(4, 26);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1283, 540);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Main";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox_BubbleSort
			// 
			this->listBox_BubbleSort->FormattingEnabled = true;
			this->listBox_BubbleSort->ItemHeight = 16;
			this->listBox_BubbleSort->Location = System::Drawing::Point(790, 80);
			this->listBox_BubbleSort->Name = L"listBox_BubbleSort";
			this->listBox_BubbleSort->Size = System::Drawing::Size(232, 324);
			this->listBox_BubbleSort->TabIndex = 40;
			// 
			// listBox_SelectionSort
			// 
			this->listBox_SelectionSort->FormattingEnabled = true;
			this->listBox_SelectionSort->HorizontalScrollbar = true;
			this->listBox_SelectionSort->ItemHeight = 16;
			this->listBox_SelectionSort->Location = System::Drawing::Point(533, 80);
			this->listBox_SelectionSort->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listBox_SelectionSort->Name = L"listBox_SelectionSort";
			this->listBox_SelectionSort->Size = System::Drawing::Size(232, 324);
			this->listBox_SelectionSort->TabIndex = 28;
			// 
			// label_BubbleSort
			// 
			this->label_BubbleSort->AutoSize = true;
			this->label_BubbleSort->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_BubbleSort->Location = System::Drawing::Point(854, 39);
			this->label_BubbleSort->Name = L"label_BubbleSort";
			this->label_BubbleSort->Size = System::Drawing::Size(87, 16);
			this->label_BubbleSort->TabIndex = 47;
			this->label_BubbleSort->Text = L"BubbleSort";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1049, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 16);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Target = ";
			// 
			// textBox_BinarySearch
			// 
			this->textBox_BinarySearch->Location = System::Drawing::Point(1128, 39);
			this->textBox_BinarySearch->Name = L"textBox_BinarySearch";
			this->textBox_BinarySearch->Size = System::Drawing::Size(98, 27);
			this->textBox_BinarySearch->TabIndex = 45;
			// 
			// listBox_BinarySearch
			// 
			this->listBox_BinarySearch->FormattingEnabled = true;
			this->listBox_BinarySearch->ItemHeight = 16;
			this->listBox_BinarySearch->Location = System::Drawing::Point(1042, 80);
			this->listBox_BinarySearch->Name = L"listBox_BinarySearch";
			this->listBox_BinarySearch->Size = System::Drawing::Size(230, 324);
			this->listBox_BinarySearch->TabIndex = 44;
			// 
			// button_BinarySearch
			// 
			this->button_BinarySearch->Enabled = false;
			this->button_BinarySearch->Location = System::Drawing::Point(1042, 424);
			this->button_BinarySearch->Name = L"button_BinarySearch";
			this->button_BinarySearch->Size = System::Drawing::Size(230, 36);
			this->button_BinarySearch->TabIndex = 43;
			this->button_BinarySearch->Text = L"BinarySearch";
			this->button_BinarySearch->UseVisualStyleBackColor = true;
			this->button_BinarySearch->Click += gcnew System::EventHandler(this, &Form1::button_BinarySearch_Click_1);
			// 
			// label_CPUTIME_BS
			// 
			this->label_CPUTIME_BS->AutoSize = true;
			this->label_CPUTIME_BS->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_CPUTIME_BS->Location = System::Drawing::Point(786, 486);
			this->label_CPUTIME_BS->Name = L"label_CPUTIME_BS";
			this->label_CPUTIME_BS->Size = System::Drawing::Size(100, 20);
			this->label_CPUTIME_BS->TabIndex = 42;
			this->label_CPUTIME_BS->Text = L"CPU time = ";
			// 
			// button_BubbleSort
			// 
			this->button_BubbleSort->Enabled = false;
			this->button_BubbleSort->Location = System::Drawing::Point(790, 427);
			this->button_BubbleSort->Name = L"button_BubbleSort";
			this->button_BubbleSort->Size = System::Drawing::Size(232, 39);
			this->button_BubbleSort->TabIndex = 41;
			this->button_BubbleSort->Text = L"BubbleSort";
			this->button_BubbleSort->UseVisualStyleBackColor = true;
			this->button_BubbleSort->Click += gcnew System::EventHandler(this, &Form1::button_BubbleSort_Click);
			// 
			// label_error
			// 
			this->label_error->AutoSize = true;
			this->label_error->BackColor = System::Drawing::SystemColors::Control;
			this->label_error->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold));
			this->label_error->ForeColor = System::Drawing::Color::Red;
			this->label_error->Location = System::Drawing::Point(14, 437);
			this->label_error->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_error->Name = L"label_error";
			this->label_error->Size = System::Drawing::Size(0, 16);
			this->label_error->TabIndex = 38;
			// 
			// checkBox_SelfCheck
			// 
			this->checkBox_SelfCheck->AutoSize = true;
			this->checkBox_SelfCheck->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->checkBox_SelfCheck->Location = System::Drawing::Point(107, 355);
			this->checkBox_SelfCheck->Margin = System::Windows::Forms::Padding(5);
			this->checkBox_SelfCheck->Name = L"checkBox_SelfCheck";
			this->checkBox_SelfCheck->Size = System::Drawing::Size(94, 20);
			this->checkBox_SelfCheck->TabIndex = 37;
			this->checkBox_SelfCheck->Text = L"Self Check";
			this->checkBox_SelfCheck->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(588, 39);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 16);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Selectioin Sort ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 10, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(360, 39);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 14);
			this->label4->TabIndex = 35;
			this->label4->Text = L"隨機產生的數列";
			// 
			// label_CPUTIME_SS
			// 
			this->label_CPUTIME_SS->AutoSize = true;
			this->label_CPUTIME_SS->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label_CPUTIME_SS->Location = System::Drawing::Point(529, 486);
			this->label_CPUTIME_SS->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_CPUTIME_SS->Name = L"label_CPUTIME_SS";
			this->label_CPUTIME_SS->Size = System::Drawing::Size(100, 20);
			this->label_CPUTIME_SS->TabIndex = 34;
			this->label_CPUTIME_SS->Text = L"CPU time = ";
			// 
			// checkBox_PrintOutPut
			// 
			this->checkBox_PrintOutPut->AutoSize = true;
			this->checkBox_PrintOutPut->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->checkBox_PrintOutPut->Location = System::Drawing::Point(107, 310);
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
			this->label2->Location = System::Drawing::Point(154, 154);
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
			this->label_range->Location = System::Drawing::Point(14, 258);
			this->label_range->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_range->Name = L"label_range";
			this->label_range->Size = System::Drawing::Size(63, 16);
			this->label_range->TabIndex = 31;
			this->label_range->Text = L"Range = ";
			// 
			// textBox_range
			// 
			this->textBox_range->Location = System::Drawing::Point(107, 258);
			this->textBox_range->Margin = System::Windows::Forms::Padding(5);
			this->textBox_range->Name = L"textBox_range";
			this->textBox_range->Size = System::Drawing::Size(188, 27);
			this->textBox_range->TabIndex = 30;
			// 
			// button_SelectionSort
			// 
			this->button_SelectionSort->Enabled = false;
			this->button_SelectionSort->Location = System::Drawing::Point(533, 427);
			this->button_SelectionSort->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button_SelectionSort->Name = L"button_SelectionSort";
			this->button_SelectionSort->Size = System::Drawing::Size(220, 36);
			this->button_SelectionSort->TabIndex = 29;
			this->button_SelectionSort->Text = L"SelectionSort";
			this->button_SelectionSort->UseVisualStyleBackColor = true;
			this->button_SelectionSort->Click += gcnew System::EventHandler(this, &Form1::button_SelectionSort_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox1->Location = System::Drawing::Point(107, 213);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 27);
			this->textBox1->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(46, 219);
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
			this->listBox1->Location = System::Drawing::Point(346, 80);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(153, 324);
			this->listBox1->TabIndex = 25;
			// 
			// button_DataGenerator
			// 
			this->button_DataGenerator->Location = System::Drawing::Point(346, 423);
			this->button_DataGenerator->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button_DataGenerator->Name = L"button_DataGenerator";
			this->button_DataGenerator->Size = System::Drawing::Size(153, 40);
			this->button_DataGenerator->TabIndex = 24;
			this->button_DataGenerator->Text = L"Data Generator";
			this->button_DataGenerator->UseVisualStyleBackColor = true;
			this->button_DataGenerator->Click += gcnew System::EventHandler(this, &Form1::button_DataGenerator_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Controls->Add(this->listBox_Test);
			this->tabPage2->Controls->Add(this->textBox_StepTimes);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox_Step);
			this->tabPage2->Controls->Add(this->textBox_FirstPoint);
			this->tabPage2->Controls->Add(this->button_Plot);
			this->tabPage2->Controls->Add(this->chart1);
			this->tabPage2->Location = System::Drawing::Point(4, 26);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1283, 540);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Chart";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// chart2
			// 
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->Maximum = 70000;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisX->Title = L"SelectionSort CPU Time";
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(311, 277);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(728, 242);
			this->chart2->TabIndex = 10;
			this->chart2->Text = L"chart2";
			// 
			// listBox_Test
			// 
			this->listBox_Test->FormattingEnabled = true;
			this->listBox_Test->ItemHeight = 16;
			this->listBox_Test->Location = System::Drawing::Point(46, 391);
			this->listBox_Test->Name = L"listBox_Test";
			this->listBox_Test->Size = System::Drawing::Size(198, 116);
			this->listBox_Test->TabIndex = 9;
			// 
			// textBox_StepTimes
			// 
			this->textBox_StepTimes->Location = System::Drawing::Point(155, 229);
			this->textBox_StepTimes->Name = L"textBox_StepTimes";
			this->textBox_StepTimes->Size = System::Drawing::Size(89, 27);
			this->textBox_StepTimes->TabIndex = 7;
			this->textBox_StepTimes->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(53, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 16);
			this->label8->TabIndex = 6;
			this->label8->Text = L"repeatition =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(92, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 16);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Step =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(60, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 16);
			this->label6->TabIndex = 4;
			this->label6->Text = L"FirstPoint =";
			// 
			// textBox_Step
			// 
			this->textBox_Step->Location = System::Drawing::Point(155, 180);
			this->textBox_Step->Name = L"textBox_Step";
			this->textBox_Step->Size = System::Drawing::Size(89, 27);
			this->textBox_Step->TabIndex = 3;
			this->textBox_Step->Text = L"10000";
			// 
			// textBox_FirstPoint
			// 
			this->textBox_FirstPoint->Location = System::Drawing::Point(155, 134);
			this->textBox_FirstPoint->Name = L"textBox_FirstPoint";
			this->textBox_FirstPoint->Size = System::Drawing::Size(89, 27);
			this->textBox_FirstPoint->TabIndex = 2;
			this->textBox_FirstPoint->Text = L"5000";
			// 
			// button_Plot
			// 
			this->button_Plot->Location = System::Drawing::Point(59, 286);
			this->button_Plot->Name = L"button_Plot";
			this->button_Plot->Size = System::Drawing::Size(185, 42);
			this->button_Plot->TabIndex = 1;
			this->button_Plot->Text = L"Plot";
			this->button_Plot->UseVisualStyleBackColor = true;
			this->button_Plot->Click += gcnew System::EventHandler(this, &Form1::button_Plot_Click);
			// 
			// chart1
			// 
			chartArea2->AxisX->Maximum = 70000;
			chartArea2->AxisX->Minimum = 0;
			chartArea2->AxisX->Title = L"BubbleSort CPU Time";
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(311, 6);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(728, 239);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 572);
			this->Controls->Add(this->tab1);
			this->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Form1";
			this->Text = L"Selection Sort v.s Bubble sort By Y.T Lin ver_1.0";
			this->tab1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
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
				if ((checkBox_PrintOutPut->Checked)) {

					listBox_BinarySearch->Items->Add("left = " + left + ",right = " + right + ",迭代" + i + "次");

				}
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

		//副程式(複製矩陣)
		void CopyList(int list_1[], int list_2[],int n) {

			for (int i=0; i<n; i++) {

				list_1[i] = list_2[i];

			}

		}
		//副程式(自檢)
		int SelfCheck(int list[], int n) {

			for (int i = 0; i < n-1; i++) {

				if (list[i] > list[i+1]) {

					return -1;
				}
			}

			return 1;
		}
	

#pragma endregion
	private: System::Void button_DataGenerator_Click_1(System::Object^ sender, System::EventArgs^ e){
		listBox1->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉

		try
		{
			int n = Int32::Parse(textBox1->Text); 
			int range = Int32::Parse(textBox_range->Text);
			label_error->Text = "";
			// 如果程式碼能執行到這裡，表示輸入是個整數
			srand(time(NULL));
			for (int i = 0;i < n;i++)
			{
				list_SelectionSort[i] = rand() % range + 1; //產生範圍從0到range到數列
				list_BubbleSort[i] = list_SelectionSort[i]; //複製產生的亂數矩陣給BubbleSort用

				if (checkBox_PrintOutPut->Checked) {

					listBox1->Items->Add("data[" + Convert::ToString(i) + "] = " + list_SelectionSort[i]);
				}
			}
			listBox1->Items->Add("成功產生亂數矩陣!!");
			//沒有數列前不能按排序Button
			button_SelectionSort->Enabled = true;
			button_BubbleSort->Enabled = true; 

		}
		catch (FormatException^)
		{
			// 如果無法將文字轉換成整數，跳Error
			button_SelectionSort->Enabled = false;
			button_BubbleSort->Enabled = false;
			label_error->Text = "ERROR 出現錯誤 請輸入整數";
			label_error->ForeColor = Color::Red;

		}
	}
	private: System::Void button_SelectionSort_Click_1(System::Object^ sender, System::EventArgs^ e) {
		listBox_SelectionSort->Items->Clear();//每次產生新一輪變數時，會把上次結果清掉
		clock_t t_begin, t_end;
		t_begin = clock();
		SelectionSort(list_SelectionSort, int::Parse(textBox1->Text));
		t_end = clock();
		label_CPUTIME_SS->Text = "CPU time = " + (float)(t_end - t_begin) / CLOCKS_PER_SEC;

		for (int i = 0;i < int::Parse(textBox1->Text);i++)
		{	

			if (checkBox_PrintOutPut->Checked) {
				listBox_SelectionSort->Items->Add("data[" + Convert::ToString(i) + "] = " + list_SelectionSort[i]);
			}

		}

		listBox_SelectionSort->Items->Add("SelectionSort完成!!");

		//自我檢查排序
		if (checkBox_SelfCheck->Checked) {

			int n = int::Parse(textBox1->Text);

			if ( SelfCheck(list_SelectionSort, n ) == -1 ) {

				listBox_SelectionSort->Items->Add("SelfCheek F4IL!!");
			}
			else {
				listBox_SelectionSort->Items->Add("SelfCheek Success!!");
			}

		}
	}


	private: System::Void button_BubbleSort_Click(System::Object^ sender, System::EventArgs^ e) {
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

		listBox_BubbleSort->Items->Add("成功BubbleSortSort!!!");

		//自檢
		if (checkBox_SelfCheck->Checked) {

			int n = int::Parse(textBox1->Text);

			if (SelfCheck(list_BubbleSort, n) == -1) {

				listBox_BubbleSort->Items->Add("SelfCheek F4IL!!");
			}
			else {

				listBox_BubbleSort->Items->Add("SelfCheek Success!!");

			}

		}

		button_BinarySearch->Enabled = true;
	}

	private: System::Void button_BinarySearch_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void button_Plot_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {


			int n, step, start_point;
			n = Int32::Parse(textBox_StepTimes->Text);
			step = Int32::Parse(textBox_Step->Text);
			start_point = Int32::Parse(textBox_FirstPoint->Text);

			float Y1[100], Y2[100];
			int X[100];
			int list_Plot[100000],list_Plot_Copy[100000];

			clock_t t_begin_BS, t_end_BS; //for BubbleSort
			clock_t t_begin_SS, t_end_SS; //for SelectionSort

			String^ name1 = "BubbleSort"; 
			chart1->Series->Clear();
			chart1->Series->Add(name1);

			String^ name2 = "Selection"; 
			chart2->Series->Clear();
			chart2->Series->Add(name2);

			for (int i=0; i < n; i++) {

				X[i] = start_point + i * step; //每一輪的矩陣長度

				//產生一個從大排到小的矩陣,讓每個數字都需要排
				for (int j = 0; j < X[i]; j++) {

					list_Plot[j] = X[i] - j;
					
				}

				CopyList(list_Plot, list_Plot_Copy, 100000);
				
				t_begin_BS = clock();
				BubbleSort(list_Plot, X[i]);
				t_end_BS = clock();

				t_begin_SS = clock();
				SelectionSort(list_Plot_Copy, X[i]);
				t_end_SS = clock();

				Y1[i] = (float)(t_end_BS - t_begin_BS) / CLOCKS_PER_SEC;
				Y2[i] = (float)(t_end_SS - t_begin_SS) / CLOCKS_PER_SEC;

				
				listBox_BubbleSort->Items->Add("n = "+ X[i] +"BubbleSort takes" + Y1[i]);
				listBox_SelectionSort->Items->Add("n = " + X[i] + "SelectionSort takes" + Y2[i]);
				listBox1->Items->Add("n = " + X[i]);

				chart1->Series[name1]->Points->AddXY(X[i], Y1[i]);
				chart1->ChartAreas[0]->AxisX->Minimum = 0; //設定X軸最小值
				chart2->Series[name2]->Points->AddXY(X[i], Y2[i]);
				chart2->ChartAreas[0]->AxisX->Minimum = 0; //設定X軸最小值

			}

		}
		catch (FormatException^) {

			listBox_Test->Items->Add("Error 請輸入正整數!!!");

		}
	}


};
}