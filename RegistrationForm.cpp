#include "RegistrationForm.h"
#include "AuthForm.h"
#include "todolist.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace registreationplatform;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	RegistrationForm form;
	Application::Run(% form);
}
System::Void RegistrationForm::link_auth_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	this->Hide();
	AuthForm^ form = gcnew AuthForm(this);
	form->ShowDialog();
	this->Close();
}