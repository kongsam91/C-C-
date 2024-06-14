#pragma once
#include <iostream>
#include <string>
#define maxsize 1000

//ref class YourClassName {
//public:
//	static array<String^>^ stack1 = gcnew array<String^>(maxsize);
//	static array<String^>^ stack2 = gcnew array<String^>(maxsize);
//
//	static String^ str;
//	static const char* charStr;
//	static int top;
//
//	// 构造函数中初始化静态成员
//	YourClassName() {
//		top = -1;
//	}
//};

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
	private: System::Windows::Forms::Button^ button_Infix2Prefix;
	private: System::Windows::Forms::Button^ button_Infix2Postfix;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox_Input;
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
			this->button_Infix2Prefix = (gcnew System::Windows::Forms::Button());
			this->button_Infix2Postfix = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox_Input = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_Infix2Prefix
			// 
			this->button_Infix2Prefix->Location = System::Drawing::Point(60, 151);
			this->button_Infix2Prefix->Name = L"button_Infix2Prefix";
			this->button_Infix2Prefix->Size = System::Drawing::Size(200, 51);
			this->button_Infix2Prefix->TabIndex = 0;
			this->button_Infix2Prefix->Text = L"Infix2Prefix";
			this->button_Infix2Prefix->UseVisualStyleBackColor = true;
			this->button_Infix2Prefix->Click += gcnew System::EventHandler(this, &Form1::button_Infix2Prefix_Click);
			// 
			// button_Infix2Postfix
			// 
			this->button_Infix2Postfix->Location = System::Drawing::Point(60, 269);
			this->button_Infix2Postfix->Name = L"button_Infix2Postfix";
			this->button_Infix2Postfix->Size = System::Drawing::Size(200, 51);
			this->button_Infix2Postfix->TabIndex = 1;
			this->button_Infix2Postfix->Text = L"Infix2Postfix";
			this->button_Infix2Postfix->UseVisualStyleBackColor = true;
			this->button_Infix2Postfix->Click += gcnew System::EventHandler(this, &Form1::button_Infix2Postfix_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(362, 133);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(554, 328);
			this->listBox1->TabIndex = 2;
			// 
			// textBox_Input
			// 
			this->textBox_Input->Font = (gcnew System::Drawing::Font(L"新細明體", 18));
			this->textBox_Input->Location = System::Drawing::Point(362, 31);
			this->textBox_Input->Name = L"textBox_Input";
			this->textBox_Input->Size = System::Drawing::Size(554, 51);
			this->textBox_Input->TabIndex = 3;
			this->textBox_Input->Text = L"A/B-(C+D)*E+A*C";
			this->textBox_Input->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_Input_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 486);
			this->Controls->Add(this->textBox_Input);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button_Infix2Postfix);
			this->Controls->Add(this->button_Infix2Prefix);
			this->Name = L"Form1";
			this->Text = L"Infix2Prefix author:YiTIng Lin 20240410 ver0.9";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int IsFull(int a) {

			//if (top == maxsize - 1) return 1;
			if (a == 1) if (top == maxsize - 1) return 1;
			if (a == 2) if (top_2 == maxsize - 1) return 1;
			if (a == 3) if (top_3 == maxsize - 1) return 1;
			return 0;

		}
		int IsEmpty(int a) {
			
			//if (top == -1) return 1;
			if (a == 1) if (top == -1) return 1;
			if (a == 2) {
				if (top_2 == -1) {return 1;}
			}
			else if (a == 3) {
				if (top_3 == -1) {
					return 1;
				}
			}
			//if (a == 3) if (top_3 == -1) return 1;
			return 0;

		}
		void push(int a ,String ^ element) {

			if (IsFull(a)) {
				//StackFull();
			}
			else {

				if (a == 1)stack1[++top] = element;
				if (a == 2) stack2[++top_2] = element;
				else if (a == 3) stack3[++top_3] = element;
			}
		}
		String^ pop(int a) {

			if (IsEmpty(a)) {

				return  "NULL"; //定義pop() 回傳-1 表示stack已是空
			}
			else {
				if(a == 1 ) return stack1[top--];
				if(a == 2 ) return stack2[top_2--];
				if(a == 3 ) return stack3[top_3--];
			}

		}
		//處理中序轉後續
		String^ Infix2Postfix(String^ infix) {

			String^ s, ^ x, ^ y;
			String^ postfix;
			//listBox1->Items->Add(infix);
			push(2, "#");


			//拆開印每個字元(for System::String^ s )
			for (int i = 0; i < infix->Length; ++i) {
				s = "";
				s = s + infix[i]; //對於每個字元

				if (IsOperand(s)) { postfix += s; }
				else if (s == ")") {
					while ((x = pop(2)) != "(") postfix += x;
					//MessageBox::Show(s);
				}
				else {
					listBox1->Items->Add("s =" + s);
					//新讀到運算子優先順序(s)<= 前一個運算子優先順序(y)，則y應先pop輸出
					while ((p(s) <= q(y = pop(2)))) {

						postfix += y;
					}
					listBox1->Items->Add("y = " + y);
					push(2, y);
					push(2, s);
				}
				//listBox1->Items->Add(infix->Substring(i, 1));
			}

			while ((s = pop(2)) != "#") {

				postfix += s;

			}
			return postfix;
			//掃描每個字元
			//for (int i = 0; i < s->Length; ++i) {
			//	s = s->Substring(i, 1);
			//	listBox1->Items->Add(s);
			//	
			//}

		};
			
		String^ Infix2Prefix(String^ infix){
			String^ s,^ x,^ y;
			String^ prefix;
			push(1, "#");
			for (int i = 0; i < infix->Length; ++i) {
				s = "";
				s = s + infix[i]; //對於每個字元

				if (IsOperand(s)) { push(3,s); }
				else if (s == ")") {

						while ((x = pop(1)) != "(") push(3, get_prefix(x));

				}else {
					listBox1->Items->Add("s =" + s);
					//新讀到運算子優先順序(s)<= 前一個運算子優先順序(y)，則y應先pop輸出
					while ((p(s) <= q(stack1[top]))) {
						x = pop(1);
						push(3,get_prefix(x));
						//push(1, s);

					}
					listBox1->Items->Add("y = " + y);
					push(1, s);
					//push(2, y);
					//push(2, s);
				}

			}
			while ( (x = pop(1)) !="#") push(3,get_prefix(x));

			return pop(3);
		}
		String^ get_prefix(String^ x)
		{
			String^ a = pop(3);
			return x + pop(3) + a;
		}

		int q(String^ op) {
			if (op == "+" || op == "-") return 3;else
			if (op == "*" || op == "/") return 4;else
			if (op == "^" || op == "&") return 5;else
			if (op == "(") return 1;else
			if (op == "#" ) return 0;
		}
		int p(String^ op) {
			if (op == "+" || op == "-") return 3;else
			if (op == "*" || op == "/") return 4;else
			if (op == "^" || op == "&") return 5;else
			if (op == "(") return 8;else
			if (op == "#" ) return 0;
		}
		bool IsOperand(String^ s) {
			if ((s != "+") && (s != "-") && (s != "*") && (s != "/")
				&& (s != "^") && (s != "&") && (s != "(") && (s != ")") && (s != "#"))
				return true;
			else return false;
			
		}
		void PrintString(String^ str) {
			listBox1->Items->Add(str);
			//掃描每個字元
			//for (int i = 0; i < str->Length; ++i) {
			//	str = str->Substring(i, 1);
			//	listBox1->Items->Add(str);
			//
			//}
		}
#pragma endregion
		static array<String^>^ stack1 = gcnew array<String^>(1000);
		static array<String^>^ stack2 = gcnew array<String^>(1000);
		static array<String^>^ stack3 = gcnew array<String^>(1000);
		static int top = -1;
		static int top_2 = -1;
		static int top_3 = -1;
	private: System::Void button_Infix2Prefix_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ infix = textBox_Input->Text;
		String^ prefix = Infix2Prefix(infix);
		PrintString(prefix);

		listBox1->Items->Add(prefix);
	}
	private: System::Void button_Infix2Postfix_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ infix = textBox_Input->Text;
		String^ postfix = Infix2Postfix(infix);
		PrintString(postfix);
	}
	private: System::Void textBox_Input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
