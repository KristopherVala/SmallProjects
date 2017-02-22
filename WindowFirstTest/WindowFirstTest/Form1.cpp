#include "Form1.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WindowFirstTest::MyForm form;

	Application::Run(%form);

}

void WindowFirstTest::MyForm::dump()
{
	label1->Visible = true; label2->Visible = true; label3->Visible = true; label8->Visible = true;


	
	String^ tempname = gcnew String(load->getName().c_str());
	String^ tempbalance = gcnew String(load->getBalance().c_str());
	String^ tempage = gcnew String(load->getAge().c_str());
	String^ tempbank = gcnew String(load->getBank().c_str());



	label1->Text = tempname;
	label2->Text = tempbalance;
	label3->Text = tempage;
	label8->Text = tempbank;
	

	//throw gcnew System::NotImplementedException();
}

std::string WindowFirstTest::MyForm::getName(Loader l)
{
	return l.getName();
}

int WindowFirstTest::MyForm::getInt(Loader l)
{
	return NULL;
}

void WindowFirstTest::MyForm::newUser()
{
	button1->Visible = false;
	button2->Visible = false;
	button3->Visible = true;
	NameBox->Visible = true; // Display the input fields
	BankBox->Visible = true;
	BalanceBox->Visible = true;
	AgeBox->Visible = true;
	labelName->Visible = true;
	labelBank->Visible = true;
	labelBal->Visible = true;
	labelAge->Visible = true;




}

