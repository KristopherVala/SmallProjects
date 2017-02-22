#pragma once
#include <string>
#include "Loader.h"
#include <msclr/marshal_cppstd.h>
namespace WindowFirstTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		bool clicked = false;
		
	public:
		MyForm()
		{
			InitializeComponent();
			
		}
		void dump();
		std::string getName(Loader);
		int getInt(Loader);

		void newUser();
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: Loader* load; ////////////////////////////////////////////////
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  NameBox;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  BalanceBox;
	private: System::Windows::Forms::TextBox^  AgeBox;
	private: System::Windows::Forms::TextBox^  BankBox;
	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::Label^  labelBal;
	private: System::Windows::Forms::Label^  labelAge;



	private: System::Windows::Forms::Label^  labelBank;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label3;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BalanceBox = (gcnew System::Windows::Forms::TextBox());
			this->AgeBox = (gcnew System::Windows::Forms::TextBox());
			this->BankBox = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelBal = (gcnew System::Windows::Forms::Label());
			this->labelAge = (gcnew System::Windows::Forms::Label());
			this->labelBank = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"New User";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(353, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Load ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// NameBox
			// 
			this->NameBox->Location = System::Drawing::Point(127, 170);
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(222, 20);
			this->NameBox->TabIndex = 2;
			this->NameBox->Visible = false;
			this->NameBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"--";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(397, 341);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Submit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"--";
			this->label2->Visible = false;
			// 
			// BalanceBox
			// 
			this->BalanceBox->Location = System::Drawing::Point(127, 216);
			this->BalanceBox->Name = L"BalanceBox";
			this->BalanceBox->Size = System::Drawing::Size(222, 20);
			this->BalanceBox->TabIndex = 7;
			this->BalanceBox->Visible = false;
			// 
			// AgeBox
			// 
			this->AgeBox->Location = System::Drawing::Point(127, 263);
			this->AgeBox->Name = L"AgeBox";
			this->AgeBox->Size = System::Drawing::Size(222, 20);
			this->AgeBox->TabIndex = 8;
			this->AgeBox->Visible = false;
			// 
			// BankBox
			// 
			this->BankBox->Location = System::Drawing::Point(127, 309);
			this->BankBox->Name = L"BankBox";
			this->BankBox->Size = System::Drawing::Size(222, 20);
			this->BankBox->TabIndex = 9;
			this->BankBox->Visible = false;
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(368, 176);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(35, 13);
			this->labelName->TabIndex = 10;
			this->labelName->Text = L"Name";
			this->labelName->Visible = false;
			// 
			// labelBal
			// 
			this->labelBal->AutoSize = true;
			this->labelBal->Location = System::Drawing::Point(371, 222);
			this->labelBal->Name = L"labelBal";
			this->labelBal->Size = System::Drawing::Size(123, 13);
			this->labelBal->TabIndex = 11;
			this->labelBal->Text = L"Balance(Whole Number)";
			this->labelBal->Visible = false;
			// 
			// labelAge
			// 
			this->labelAge->AutoSize = true;
			this->labelAge->Location = System::Drawing::Point(368, 270);
			this->labelAge->Name = L"labelAge";
			this->labelAge->Size = System::Drawing::Size(103, 13);
			this->labelAge->TabIndex = 12;
			this->labelAge->Text = L"Age(Whole Number)";
			this->labelAge->Visible = false;
			// 
			// labelBank
			// 
			this->labelBank->AutoSize = true;
			this->labelBank->Location = System::Drawing::Point(368, 316);
			this->labelBank->Name = L"labelBank";
			this->labelBank->Size = System::Drawing::Size(32, 13);
			this->labelBank->TabIndex = 13;
			this->labelBank->Text = L"Bank";
			this->labelBank->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"--";
			this->label8->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"--";
			this->label3->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(592, 494);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->labelBank);
			this->Controls->Add(this->labelAge);
			this->Controls->Add(this->labelBal);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->BankBox);
			this->Controls->Add(this->AgeBox);
			this->Controls->Add(this->BalanceBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Test!";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { newUser();	
	}
	
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		


	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
			 
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) { // display loaded values
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { //submit

	System::String^ tempname; 
	System::String^ tempbank;
	System::String^ tempbalance;
	System::String^ tempage;

	tempname = NameBox->Text; // Read from textline
	tempbank = BankBox->Text; 
	tempbalance = BalanceBox->Text;
	tempage = AgeBox->Text;

	std::string pname = msclr::interop::marshal_as< std::string >(tempname); // converts from System string to string
	std::string pbank = msclr::interop::marshal_as< std::string >(tempbank);  
	int pbalance = Int32::Parse(tempbalance); // converts from System string to int
	int page = Int32::Parse(tempage);

	load = new Loader(pname,pbalance,page,pbank); // new loader 

	NameBox->Text=""; // Clear text
	AgeBox->Text = "";
	BankBox->Text = ""; 
	BalanceBox->Text = ""; 


	NameBox->Visible = false; // Hide the input fields
	BankBox->Visible = false; 
	BalanceBox->Visible = false; 
	AgeBox->Visible = false; 
	labelName->Visible = false;
	labelBank->Visible = false;
	labelBal->Visible = false;
	labelAge->Visible = false;
	button3->Visible = false;

	dump();
}

};
}
