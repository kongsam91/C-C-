#pragma once
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

struct Node {
	int element;
	struct Node *next;
};
struct Node* first = new struct Node;

struct Node* last = first;

// For linked stack

struct Node* top = new struct Node;

// For linked queue

struct Node* head = new struct Node;



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
			first->element = -1;

			first->next = first;

			top->element = -1;

			top->next = NULL;

			head->element = -1;

			head->next = NULL;
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
	private: System::Windows::Forms::TextBox^ textBox_target;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_First;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button_Delete;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button_Print;
	private: System::Windows::Forms::TextBox^ textBox_N;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_range;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ button_insertQ;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button_deleteQ;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button_Reverse;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox_range = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_N = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_Print = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button_Delete = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_First = (gcnew System::Windows::Forms::Button());
			this->textBox_target = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button_deleteQ = (gcnew System::Windows::Forms::Button());
			this->button_insertQ = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button_Reverse = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1346, 614);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button_Reverse);
			this->tabPage1->Controls->Add(this->textBox_range);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox_N);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button_Print);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button_Delete);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->button_First);
			this->tabPage1->Controls->Add(this->textBox_target);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage1->Size = System::Drawing::Size(1338, 582);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Singly circular list";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox_range
			// 
			this->textBox_range->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox_range->Location = System::Drawing::Point(874, 254);
			this->textBox_range->Name = L"textBox_range";
			this->textBox_range->Size = System::Drawing::Size(100, 36);
			this->textBox_range->TabIndex = 19;
			this->textBox_range->Text = L"100";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label4->Location = System::Drawing::Point(783, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 24);
			this->label4->TabIndex = 18;
			this->label4->Text = L"range = ";
			// 
			// textBox_N
			// 
			this->textBox_N->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox_N->Location = System::Drawing::Point(874, 194);
			this->textBox_N->Name = L"textBox_N";
			this->textBox_N->Size = System::Drawing::Size(100, 36);
			this->textBox_N->TabIndex = 17;
			this->textBox_N->Text = L"5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label3->Location = System::Drawing::Point(822, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 24);
			this->label3->TabIndex = 16;
			this->label3->Text = L"n = ";
			// 
			// button_Print
			// 
			this->button_Print->Location = System::Drawing::Point(529, 200);
			this->button_Print->Name = L"button_Print";
			this->button_Print->Size = System::Drawing::Size(192, 60);
			this->button_Print->TabIndex = 15;
			this->button_Print->Text = L"Print list";
			this->button_Print->UseVisualStyleBackColor = true;
			this->button_Print->Click += gcnew System::EventHandler(this, &Form1::button_Print_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(8, 382);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1324, 198);
			this->richTextBox1->TabIndex = 14;
			this->richTextBox1->Text = L"";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(529, 297);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(797, 68);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Clear all";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1020, 200);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(306, 60);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Randomly insert n element";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button_Delete
			// 
			this->button_Delete->Location = System::Drawing::Point(748, 134);
			this->button_Delete->Name = L"button_Delete";
			this->button_Delete->Size = System::Drawing::Size(192, 34);
			this->button_Delete->TabIndex = 11;
			this->button_Delete->Text = L"Delete target";
			this->button_Delete->UseVisualStyleBackColor = true;
			this->button_Delete->Click += gcnew System::EventHandler(this, &Form1::button_Delete_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(986, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(328, 34);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Find target and insert element before target";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(986, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(328, 36);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Find target and insert element after target";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(748, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 36);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Find Target";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(268, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 36);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Insert \"Element\" as last";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button_First
			// 
			this->button_First->Location = System::Drawing::Point(268, 50);
			this->button_First->Name = L"button_First";
			this->button_First->Size = System::Drawing::Size(224, 36);
			this->button_First->TabIndex = 6;
			this->button_First->Text = L"Insert \"Element\" as first";
			this->button_First->UseVisualStyleBackColor = true;
			this->button_First->Click += gcnew System::EventHandler(this, &Form1::button_First_Click);
			// 
			// textBox_target
			// 
			this->textBox_target->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox_target->Location = System::Drawing::Point(621, 48);
			this->textBox_target->Name = L"textBox_target";
			this->textBox_target->Size = System::Drawing::Size(100, 36);
			this->textBox_target->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox1->Location = System::Drawing::Point(152, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 36);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label2->Location = System::Drawing::Point(525, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Target :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(40, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Element :";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(8, 216);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(244, 148);
			this->listBox1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage2->Size = System::Drawing::Size(1338, 582);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Linked Stack";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label6->Location = System::Drawing::Point(322, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"POP :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label8->Location = System::Drawing::Point(404, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 24);
			this->label8->TabIndex = 5;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(20, 208);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(1298, 348);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox2->Location = System::Drawing::Point(153, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 36);
			this->textBox2->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label5->Location = System::Drawing::Point(39, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Element :";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(326, 102);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(194, 56);
			this->button8->TabIndex = 1;
			this->button8->Text = L"pop";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(44, 102);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(210, 56);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Push";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->button_deleteQ);
			this->tabPage3->Controls->Add(this->button_insertQ);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->richTextBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 28);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage3->Size = System::Drawing::Size(1338, 582);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Linked Queue";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label9->Location = System::Drawing::Point(500, 212);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(157, 24);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Delete element :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label11->Location = System::Drawing::Point(680, 212);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 24);
			this->label11->TabIndex = 5;
			// 
			// button_deleteQ
			// 
			this->button_deleteQ->Location = System::Drawing::Point(502, 76);
			this->button_deleteQ->Name = L"button_deleteQ";
			this->button_deleteQ->Size = System::Drawing::Size(160, 63);
			this->button_deleteQ->TabIndex = 4;
			this->button_deleteQ->Text = L"deleteQ";
			this->button_deleteQ->UseVisualStyleBackColor = true;
			this->button_deleteQ->Click += gcnew System::EventHandler(this, &Form1::button_deleteQ_Click);
			// 
			// button_insertQ
			// 
			this->button_insertQ->Location = System::Drawing::Point(304, 76);
			this->button_insertQ->Name = L"button_insertQ";
			this->button_insertQ->Size = System::Drawing::Size(160, 63);
			this->button_insertQ->TabIndex = 3;
			this->button_insertQ->Text = L"insertQ";
			this->button_insertQ->UseVisualStyleBackColor = true;
			this->button_insertQ->Click += gcnew System::EventHandler(this, &Form1::button_insertQ_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox3->Location = System::Drawing::Point(154, 92);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 36);
			this->textBox3->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label7->Location = System::Drawing::Point(48, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 24);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Element:";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(8, 288);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(1318, 264);
			this->richTextBox3->TabIndex = 0;
			this->richTextBox3->Text = L"";
			// 
			// button_Reverse
			// 
			this->button_Reverse->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button_Reverse->Location = System::Drawing::Point(268, 297);
			this->button_Reverse->Name = L"button_Reverse";
			this->button_Reverse->Size = System::Drawing::Size(224, 68);
			this->button_Reverse->TabIndex = 1;
			this->button_Reverse->Text = L"Reverse List";
			this->button_Reverse->UseVisualStyleBackColor = true;
			this->button_Reverse->Click += gcnew System::EventHandler(this, &Form1::button_Reverse_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1342, 615);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}

		//requirement (2.1)
		//在環狀串列中新增最前節點
		void InsertFirst(int element) {
			
			struct Node* newNode = new struct Node;
			newNode->element = element;
			newNode->next = first->next;
			first->next = newNode;

			if (last == first) { // 如果是第一個加入的節點

				last = newNode;

			}
		}
		//requirement (2.2)
		//在環狀串列中新增最後節點
		void InsertLast(int element) {
			struct Node* N = new struct Node;
			N->element = element;
			N->next = first;
			last->next = N;
			last = N;
		
		}
		
		//requirement 1
		void PrintList(){
			struct Node* current = first->next;
			
			if (current== first) {
				richTextBox1->Text += "the list is empty!!!\n";
			}
			while (current != first) {

				richTextBox1->Text += current->element.ToString() + "->";
				current = current->next;
			
			}

			richTextBox1->Text += "\n";
		}

		//void FindTarget(int target,int mode) {

		//	struct Node* cur = first->next;
		//	struct Node* pre = first;

		//	int data = Int32::Parse(textBox1->Text);
		//	struct Node* newNode = new struct Node;

		//	while (cur != first) {
		//		//listBox1->Items->Add(target + "," + mode);
		//		//處理只單純做Find target
		//		if (cur->element == target && (mode == 0))  {
		//			
		//			richTextBox1->Text +="Success find target : '" + target + "' in the list\n";
		//			listBox1->Items->Add(first->next->element);
		//			break;
		//			
		//		}
		//		//處理Insert在target之前
		//		else if (cur->element == target && (mode == -1)) {

		//			newNode->element = data;
		//			newNode->next = cur;
		//			pre->next = newNode;
		//			richTextBox1->Text += "Success find " + target + "  ,and Insert " + data + " before target\n";
		//			PrintList();
		//			return;
		//		}
		//		//處理Insert在target之後
		//		else if (cur->element == target && (mode == 1)) {
		//			newNode->next = cur->next;
		//			cur->next = newNode;
		//			newNode->element = data;
		//			richTextBox1->Text += "Success find " + target + "  ,and Insert " + data + " after target\n";
		//			PrintList();
		//			return;
		//			
		//		}
		//		//處理刪除target
		//		//else if (cur->element == target && (mode == 2)) {
		//		//	if (cur != head) {
		//		//		pre->next = cur->next;
		//		//		free(cur);
		//		//		richtextbox1->text += "success delete " + target + "\n";
		//		//		printlist();
		//		//		return;
		//		//	}else if (cur == head) {
		//		//		richtextbox1->text += "nothing can delete!\n";
		//		//		return;
		//		//	}

		//		//}
		//		
		//		pre->next = cur;
		//		cur = cur->next;

		//	}
		//	
		//	richTextBox1->Text += "\n";
		//	richTextBox1->Text += "NOT Find target :" + target +"\n";

		//}
		bool Find(int target) {

			struct Node* cur = first->next;

			while (cur != first) {

				if (cur->element == target) {

					return true;

				}

				cur = cur->next;

			}
			
			return false;

		}
		void InsertBeforeTarget(int target,int data) {

			if (Find(target) == true) {
				struct Node* cur = first->next;
				struct Node* pre = first;
				
				struct Node* newNode = new struct Node;

				while (cur != first) {

					if (cur->element == target) {
					
						newNode->element = data;
						newNode->next = cur;
						pre->next = newNode;
						richTextBox1->Text += "Success find " + target + "  ,and Insert " + data + " before target\n";
						break;
					}

					pre = cur;
					cur = cur->next;

				}

				PrintList();

			}
			else {
				richTextBox1->Text += "NOT Find target :" + target + "\n";
			}


		}
		
		void InsertAfterTarget(int target, int  data) {

			if (Find(target) == true) {
				struct Node* cur = first->next;
				struct Node* newNode = new struct Node;

				while (cur != first) {

					if (cur->element == target) {

						newNode->element = data;
						newNode->next = cur->next;
						cur->next = newNode;
						
						richTextBox1->Text += "Success find " + target + "  ,and Insert " + data + " After target\n";
						break;
					}

					
					cur = cur->next;

				}

				PrintList();

			}
			else {
				richTextBox1->Text += "NOT Find target :" + target + "\n";
			}

		}

		void DeleteTarget(int target) {
			if (Find(target) == true) {
				struct Node* cur = first->next;
				struct Node* pre = first;



				while (cur != first) {

					if (cur->element == target) {

						pre->next = cur->next;
						free(cur);
						
						richTextBox1->Text += "Success Delete " + target + "  \n";
						break;
					}

					pre = cur;
					cur = cur->next;

				}

				PrintList();

			}
			else {
				richTextBox1->Text += "NOT Find target :" + target + "\n";
			}


		}
		
		void printStack() {

			struct Node* cur = top->next;
			while (cur != NULL) {

				richTextBox2->Text += cur->element + "\n";
				cur = cur->next;

			}

			richTextBox2->Text += "==================\n";

		}
		void push(int element) {

			struct Node* newNode = new struct Node;
			newNode->element = element;
			newNode->next = top->next;
			top->next = newNode;

		}
		void pop() {

			if (top->next != NULL) {

				struct Node* popNode = top->next;
				int popElement = popNode->element;
				top->next = popNode->next;
				delete popNode;
				label8->Text = popElement.ToString();
				printStack();

			}

			else {

				label8->Text = "";
				richTextBox2->Text += "Stack empty.\n";
				richTextBox2->Text += "==================\n";

			}

		}
		void printQueue() {

			struct Node* cur = head->next;
			while (cur != NULL) {

				richTextBox3->Text += cur->element + "->";
				cur = cur->next;

			}

			richTextBox3->Text += "\n";
			richTextBox3->Text += "==================\n";

		}
		void insertQ(int element) {

			struct Node* newNode = new struct Node;
			struct Node* cur = head;

			newNode->element = element;
			newNode->next = NULL;

			while (cur->next != NULL) {

				cur = cur->next;

			}

			cur->next = newNode;

		}
		void deleteQ() {

			if (head->next != NULL) {

				struct Node* cur = head->next;
				head->next = cur->next;
				label11->Text = cur->element.ToString();
				printQueue();
				delete cur;

			}

			else {

				label11->Text = "";
				richTextBox3->Text += "Queue empty.\n";
				richTextBox3->Text += "==================\n";

			}

		}
		void ReverseList() {
			struct Node *r, *s,*t;
			r = first;
			s = NULL;
			while (r != NULL) {
				t = s;
				s = r;
				r = r->next;
				s->next = t;
			}
			first = s;

		}

#pragma endregion
	private: System::Void button_First_Click(System::Object^ sender, System::EventArgs^ e) {

		int insertdata;
		insertdata = Int32::Parse(textBox1->Text);
		InsertFirst(insertdata);
		PrintList();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int insertdata;
		insertdata = Int32::Parse(textBox1->Text);
		InsertLast(insertdata);
		PrintList();

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int target;
		target = Int32::Parse(textBox_target->Text);
		if (Find(target) != true) {
		
			richTextBox1->Text += "NOT Find target :" + target + "\n";

		}
		else {

			richTextBox1->Text += "Success find target : '" + target + "' in the list\n";

		};

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		int target, element;
		target = Int32::Parse(textBox_target->Text);
		element = Int32::Parse(textBox1->Text);
		InsertBeforeTarget(target,element);


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		int target,element;
		target = Int32::Parse(textBox_target->Text);
		element = Int32::Parse(textBox1->Text);
		InsertAfterTarget(target,element);

	}

	private: System::Void button_Delete_Click(System::Object^ sender, System::EventArgs^ e) {

		int target;
		target = Int32::Parse(textBox_target->Text);
		DeleteTarget(target);

	}
	private: System::Void button_Print_Click(System::Object^ sender, System::EventArgs^ e) {

		PrintList();

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		int n = Int32::Parse(textBox_N->Text);
		int range = int::Parse(textBox_range->Text);
		int element;
		srand(time(NULL));
		for (int i = 0; i < n;i++) {
			element = rand() % range + 1;
			InsertLast(element);
		}
		PrintList();

	}

	//singly link clear all
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		struct Node* cur = first->next;
		struct Node* del;

		while (cur != first) {

			del = cur;
			cur = cur->next;
			delete del;

		}

		last = first;
		first->next = first;
		richTextBox1->Text += "Success Clear All!!\n";

	}

	//link stack push
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		int element = int::Parse(textBox2->Text);
		push(element);
		printStack();
	}

	//link stack pop
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		pop();

	}
	// Insert Queue
	private: System::Void button_insertQ_Click(System::Object^ sender, System::EventArgs^ e) {

		int element = int::Parse(textBox3->Text);
		insertQ(element);
		printQueue();

	}
	// Delete Queue
	private: System::Void button_deleteQ_Click(System::Object^ sender, System::EventArgs^ e) {

		deleteQ();

	}
	private: System::Void button_Reverse_Click(System::Object^ sender, System::EventArgs^ e) {
		
		ReverseList();
		PrintList();
	}
};
}
