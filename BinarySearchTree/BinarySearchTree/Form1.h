#pragma once

#include <cstdlib>
#include<time.h>
#include <math.h>
#pragma hdrstop
#include "stdlib.h"

struct BSTreeNode {
	struct BSTreeNode* leftchild;
	//union {
	//	int data;
	//	struct BSTreeNode *Tlink;
	//} node;
	int data;
	struct BSTreeNode* rightchild;

};

struct BSTreeNode* root;

struct StackNode {
	struct BSTreeNode* treenode;
	struct StackNode* next;

};

struct QNode {
	struct BSTreeNode* treenode;
	struct QNode* next;

};

struct BSTreeCNode {
	struct BSTreeCNode* leftchild;
	char* data;
	struct BSTreeCNode* rightchild;

};

struct DrawTreeNode {

	struct DrawTreeNode* leftchild;
	int data;
	int index;
	// int x;
	// int y;
	struct DrawTreeNode* rightchild;

};

struct BSTreeCNode* Croot;

struct StackNode* top;
struct DrawTreeNode* DrawRoot;
int* X;
int* Y;



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
	private: System::Windows::Forms::TextBox^ textBox_Insert;
	protected:

	protected:




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_RangeShow;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label_NumberInteger;
	private: System::Windows::Forms::TextBox^ textBox_Delete;


	private: System::Windows::Forms::Button^ button_RandomInteger;


	private: System::Windows::Forms::Button^ button_InsertBST;

	private: System::Windows::Forms::Button^ button_DelBST;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Button^ button_Search;
	private: System::Windows::Forms::TextBox^ textBox_Search;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton_post;

	private: System::Windows::Forms::RadioButton^ radioButton_in;

	private: System::Windows::Forms::RadioButton^ radioButton_pre;
	private: System::Windows::Forms::Button^ button_Print;
	private: System::Windows::Forms::RadioButton^ radioButton_Level;





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
			this->textBox_Insert = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_RangeShow = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label_NumberInteger = (gcnew System::Windows::Forms::Label());
			this->textBox_Delete = (gcnew System::Windows::Forms::TextBox());
			this->button_RandomInteger = (gcnew System::Windows::Forms::Button());
			this->button_InsertBST = (gcnew System::Windows::Forms::Button());
			this->button_DelBST = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->button_Search = (gcnew System::Windows::Forms::Button());
			this->textBox_Search = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_post = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_in = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_pre = (gcnew System::Windows::Forms::RadioButton());
			this->button_Print = (gcnew System::Windows::Forms::Button());
			this->radioButton_Level = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_Insert
			// 
			this->textBox_Insert->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox_Insert->Location = System::Drawing::Point(251, 74);
			this->textBox_Insert->Name = L"textBox_Insert";
			this->textBox_Insert->Size = System::Drawing::Size(100, 36);
			this->textBox_Insert->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(135, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(294, 35);
			this->label2->TabIndex = 2;
			this->label2->Text = L"HW6 Binary Search Tree";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(55, 307);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(369, 69);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->Value = 50;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label3->Location = System::Drawing::Point(51, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(207, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Randon range(0~100)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 358);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(392, 358);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"100";
			// 
			// label_RangeShow
			// 
			this->label_RangeShow->AutoSize = true;
			this->label_RangeShow->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label_RangeShow->Location = System::Drawing::Point(461, 318);
			this->label_RangeShow->Name = L"label_RangeShow";
			this->label_RangeShow->Size = System::Drawing::Size(32, 24);
			this->label_RangeShow->TabIndex = 6;
			this->label_RangeShow->Text = L"50";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(55, 452);
			this->trackBar2->Maximum = 25;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(369, 69);
			this->trackBar2->TabIndex = 7;
			this->trackBar2->Value = 15;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(67, 503);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 18);
			this->label6->TabIndex = 8;
			this->label6->Text = L"5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(392, 503);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 18);
			this->label7->TabIndex = 9;
			this->label7->Text = L"25";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label8->Location = System::Drawing::Point(51, 403);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(238, 24);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Number of integer(5~30)";
			// 
			// label_NumberInteger
			// 
			this->label_NumberInteger->AutoSize = true;
			this->label_NumberInteger->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label_NumberInteger->Location = System::Drawing::Point(461, 461);
			this->label_NumberInteger->Name = L"label_NumberInteger";
			this->label_NumberInteger->Size = System::Drawing::Size(32, 24);
			this->label_NumberInteger->TabIndex = 11;
			this->label_NumberInteger->Text = L"15";
			// 
			// textBox_Delete
			// 
			this->textBox_Delete->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox_Delete->Location = System::Drawing::Point(251, 130);
			this->textBox_Delete->Name = L"textBox_Delete";
			this->textBox_Delete->Size = System::Drawing::Size(100, 36);
			this->textBox_Delete->TabIndex = 13;
			this->textBox_Delete->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button_RandomInteger
			// 
			this->button_RandomInteger->Font = (gcnew System::Drawing::Font(L"新細明體", 14));
			this->button_RandomInteger->Location = System::Drawing::Point(55, 552);
			this->button_RandomInteger->Name = L"button_RandomInteger";
			this->button_RandomInteger->Size = System::Drawing::Size(361, 60);
			this->button_RandomInteger->TabIndex = 14;
			this->button_RandomInteger->Text = L"Random Integers";
			this->button_RandomInteger->UseVisualStyleBackColor = true;
			this->button_RandomInteger->Click += gcnew System::EventHandler(this, &Form1::button_RandomInteger_Click);
			// 
			// button_InsertBST
			// 
			this->button_InsertBST->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button_InsertBST->Location = System::Drawing::Point(55, 74);
			this->button_InsertBST->Name = L"button_InsertBST";
			this->button_InsertBST->Size = System::Drawing::Size(174, 36);
			this->button_InsertBST->TabIndex = 15;
			this->button_InsertBST->Text = L"Insert number :";
			this->button_InsertBST->UseVisualStyleBackColor = true;
			this->button_InsertBST->Click += gcnew System::EventHandler(this, &Form1::button_InsertBST_Click);
			// 
			// button_DelBST
			// 
			this->button_DelBST->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button_DelBST->Location = System::Drawing::Point(55, 130);
			this->button_DelBST->Name = L"button_DelBST";
			this->button_DelBST->Size = System::Drawing::Size(174, 36);
			this->button_DelBST->TabIndex = 16;
			this->button_DelBST->Text = L"Delete number :";
			this->button_DelBST->UseVisualStyleBackColor = true;
			this->button_DelBST->Click += gcnew System::EventHandler(this, &Form1::button_DelBST_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(854, 590);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Inorder sequence of BST";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(6, 6);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(833, 580);
			this->listBox1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(541, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(862, 622);
			this->tabControl1->TabIndex = 0;
			// 
			// button_Search
			// 
			this->button_Search->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->button_Search->Location = System::Drawing::Point(55, 186);
			this->button_Search->Name = L"button_Search";
			this->button_Search->Size = System::Drawing::Size(174, 36);
			this->button_Search->TabIndex = 18;
			this->button_Search->Text = L"Search number :";
			this->button_Search->UseVisualStyleBackColor = true;
			this->button_Search->Click += gcnew System::EventHandler(this, &Form1::button_Search_Click);
			// 
			// textBox_Search
			// 
			this->textBox_Search->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->textBox_Search->Location = System::Drawing::Point(251, 186);
			this->textBox_Search->Name = L"textBox_Search";
			this->textBox_Search->Size = System::Drawing::Size(100, 36);
			this->textBox_Search->TabIndex = 17;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton_Level);
			this->groupBox1->Controls->Add(this->radioButton_post);
			this->groupBox1->Controls->Add(this->radioButton_in);
			this->groupBox1->Controls->Add(this->radioButton_pre);
			this->groupBox1->Location = System::Drawing::Point(382, 65);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(153, 178);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton_post
			// 
			this->radioButton_post->AutoSize = true;
			this->radioButton_post->Location = System::Drawing::Point(14, 112);
			this->radioButton_post->Name = L"radioButton_post";
			this->radioButton_post->Size = System::Drawing::Size(97, 22);
			this->radioButton_post->TabIndex = 22;
			this->radioButton_post->Text = L"postorder";
			this->radioButton_post->UseVisualStyleBackColor = true;
			// 
			// radioButton_in
			// 
			this->radioButton_in->AutoSize = true;
			this->radioButton_in->Checked = true;
			this->radioButton_in->Location = System::Drawing::Point(13, 70);
			this->radioButton_in->Name = L"radioButton_in";
			this->radioButton_in->Size = System::Drawing::Size(82, 22);
			this->radioButton_in->TabIndex = 21;
			this->radioButton_in->TabStop = true;
			this->radioButton_in->Text = L"inorder";
			this->radioButton_in->UseVisualStyleBackColor = true;
			this->radioButton_in->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton_pre
			// 
			this->radioButton_pre->AutoSize = true;
			this->radioButton_pre->Location = System::Drawing::Point(13, 28);
			this->radioButton_pre->Name = L"radioButton_pre";
			this->radioButton_pre->Size = System::Drawing::Size(91, 22);
			this->radioButton_pre->TabIndex = 20;
			this->radioButton_pre->Text = L"preorder";
			this->radioButton_pre->UseVisualStyleBackColor = true;
			// 
			// button_Print
			// 
			this->button_Print->Location = System::Drawing::Point(382, 255);
			this->button_Print->Name = L"button_Print";
			this->button_Print->Size = System::Drawing::Size(153, 40);
			this->button_Print->TabIndex = 20;
			this->button_Print->Text = L"Print";
			this->button_Print->UseVisualStyleBackColor = true;
			this->button_Print->Click += gcnew System::EventHandler(this, &Form1::button_Print_Click);
			// 
			// radioButton_Level
			// 
			this->radioButton_Level->AutoSize = true;
			this->radioButton_Level->Location = System::Drawing::Point(13, 156);
			this->radioButton_Level->Name = L"radioButton_Level";
			this->radioButton_Level->Size = System::Drawing::Size(108, 22);
			this->radioButton_Level->TabIndex = 23;
			this->radioButton_Level->TabStop = true;
			this->radioButton_Level->Text = L"level order";
			this->radioButton_Level->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1424, 646);
			this->Controls->Add(this->button_Print);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_Search);
			this->Controls->Add(this->textBox_Search);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button_DelBST);
			this->Controls->Add(this->button_InsertBST);
			this->Controls->Add(this->button_RandomInteger);
			this->Controls->Add(this->textBox_Delete);
			this->Controls->Add(this->label_NumberInteger);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->label_RangeShow);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_Insert);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Recursive
		void Inorder(struct BSTreeNode* node) { //LVR

			if (node != NULL) {

				Inorder(node->leftchild);  //L
				tree += Convert::ToString(node->data) + "_";    //V
				Inorder(node->rightchild);  //R

			}

		}
		//requirement 1
		int InsertBST(int x) {
			struct BSTreeNode* p, * q;

			p = root; q = NULL;

			while (p != NULL) {

				q = p;

				// if (x == p->data) return 0;
				if (x < p->data) {

					p = p->leftchild;

				}
				else {

					p = p->rightchild;

				}		


			}

			// p = (struct BSTreeNode *) malloc (sizeof(BSTreeNode));
			p = new struct BSTreeNode;
			p->data = x;
			p->leftchild = p->rightchild = NULL;

			if (root == NULL)	{

				root = p;
				count_node++;

			}

			else if (x < q->data) {

				q->leftchild = p;
				count_node++;

			}else {

				q->rightchild = p;
				count_node++;

			}

			return 1;

		}
		//requirement 1
		void print_BSTree(struct BSTreeNode* node) { //LVR 

			if (node != NULL) {

				print_BSTree(node->leftchild);  //L
				tree += node->data.ToString() + "_";  //V
				print_BSTree(node->rightchild);    //R

			}

		}
		void print_BSTree_preorder(struct BSTreeNode* node)

		{
			if (node != NULL)

			{
				tree += node->data + "+";
				print_BSTree_preorder(node->leftchild);
				print_BSTree_preorder(node->rightchild);

			}

		}
		void Postorder(struct BSTreeNode* node) {//LRV

			if (node != NULL) {

				Postorder(node->leftchild);//L
				Postorder(node->rightchild);//R
				tree += node->data.ToString() + "_";//V

			}

		}

		//requirement 4
		struct BSTreeNode* SearchBST(struct BSTreeNode* tree, int x) {//尋找target

			if (tree == NULL)  return NULL;         //樹為空 回傳NULL

			if (x == tree->data)   return tree;     //找到target

			if (x < tree->data){

				return SearchBST(tree->leftchild, x);   //target小於data則往左

			}
			return SearchBST(tree->rightchild, x);      //target大於data則往右

		}

		//requirement 3
		int DeleteBSTree(int x) {

			struct BSTreeNode* p, * father, * k, * f;
			p = root; father = NULL;

			while (p != NULL) 

				if (x == p->data) { // 找到 x 所在的節點 p 了

					if ((p->leftchild == NULL) && (p->rightchild == NULL)) {

						k = NULL; // p 為樹葉節點

					} 
					else if (p->leftchild != NULL) { // p 含有左子樹
					
						f = p; // 找出 p 左子樹的最右樹葉
						k = p->leftchild;

						while (k->rightchild != NULL) {

							f = k;
							k = k->rightchild;

						}  // k 即為 p 左子樹的最右樹葉

						if (p == f) {     // k 即為 p 的左兒子

							f->leftchild = k->leftchild;

						}
						else {

							f->rightchild = k->leftchild;

						}
					}

					else { // p 無左子樹, 檢查右子樹

						f = p; //找出 p 右子樹的最左樹葉
						k = p->rightchild;

						while (k->leftchild != NULL) {

							f = k;
							k = k->leftchild;

						}  // k 即為 p 右子樹的最左樹葉

						if (p == f) {  // k 即為 p 的右兒子

							f->rightchild = k->rightchild;

						}
						else {

							f->leftchild = k->rightchild;

						}
					}

					if (k != NULL) {  // k 挪至原 p 處, 繼承 p 的左右指標

						k->leftchild = p->leftchild;
						k->rightchild = p->rightchild;

					}

					if (father == NULL) root = k;

					else {

						if (x < father->data) { //決定k是father的左或右兒子

							father->leftchild = k;

						}
						else {

							father->rightchild = k;

						}

					}

					//free(p);
					return 1; //成功地刪除 x，於此傳回1返回呼叫處

				}

				else {//尚未找到x，繼續往下一階層找

					father = p;
					if (x < p->data) {

						p = p->leftchild;

					}
					else {

						p = p->rightchild;

					}
				}

			return 0; //未找到x，傳回0

		}

		void PrintSelect() {

			tree = "";

			if (radioButton_in->Checked) { 

				print_BSTree(root); 
				listBox1->Items->Add("Inorder (recursively):      " + tree);

			}
			else if (radioButton_pre->Checked) { 

				print_BSTree_preorder(root); 
				listBox1->Items->Add("preorder (recursively):      " + tree);

			}
			else if (radioButton_post->Checked) { 

				Postorder(root);
				listBox1->Items->Add("postorder (recursively):      " + tree);

			}
			
		}
		void Levelorder(struct BSTreeNode* node) {

			AddQueue(node); //先將節點放入Queue

			while (front != NULL) {

				node = DeleteQueue();
				tree += node->data.ToString() + "_";//先印左右子樹的共同父代
				if (node->leftchild != NULL) {

					AddQueue(node->leftchild);   //往左
				}

				if (node->rightchild != NULL) {

					AddQueue(node->rightchild);  //往右

				}
			}

		}


#pragma endregion
		static String^ tree;
		static int count_node;

	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {

		label_NumberInteger->Text = Convert::ToString(trackBar2->Value);
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {

		label_RangeShow->Text = Convert::ToString(trackBar1->Value);

	}
	
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_RandomInteger_Click(System::Object^ sender, System::EventArgs^ e) {
		//requirement 2
		int n = trackBar2->Value;
		int* data = new int[n];
		String^ inp = "";
		srand((unsigned)time(NULL));
		int range_max = trackBar1->Value;

		for (int i = 0; i < n; i++) {

			data[i] = rand() % range_max + 1;
			int success = InsertBST(data[i]);
			inp += Convert::ToString(data[i]) + "-";
		}

		listBox1->Items->Add(inp);
		tree = "";
		print_BSTree(root);
		listBox1->Items->Add("Inorder (recursively):      " + tree);
	}

	private: System::Void button_InsertBST_Click(System::Object^ sender, System::EventArgs^ e) {
		int insert = Int32::Parse(textBox_Insert->Text);
		InsertBST(insert);
		PrintSelect();

	}

	private: System::Void button_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		int search = Int32::Parse(textBox_Search->Text);
		if (SearchBST(root, search)) {

			listBox1->Items->Add(search + " is inside the tree!!!");

		}
		else { listBox1->Items->Add(search + " doesn`t Find QQ"); }

	}
	private: System::Void button_DelBST_Click(System::Object^ sender, System::EventArgs^ e) {
		int del = Int32::Parse(textBox_Delete->Text);
		if (DeleteBSTree(del)) {

			listBox1->Items->Add(del + " has deleted!!");
			PrintSelect();

		}
		else { listBox1->Items->Add(del + " doesn`t Find QQ"); }
		
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void button_Print_Click(System::Object^ sender, System::EventArgs^ e) {
		PrintSelect();
	}
};
}
