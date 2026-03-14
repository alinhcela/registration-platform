#pragma once
#include "DB.h"
#include "todolist.h"

namespace registreationplatform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegistrationForm
	/// </summary>
	public ref class AuthForm : public System::Windows::Forms::Form
	{
	private: Form^ obj;
	public:
		AuthForm(void)
		{
			InitializeComponent();
		    
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		}

		AuthForm(Form^ obj)
		{
			InitializeComponent();
			this->obj = obj;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AuthForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label_form;
	private: System::Windows::Forms::Label^ label_login;
	private: System::Windows::Forms::Label^ label_pass;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textbox_login;




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textbox_password;


	private: System::Windows::Forms::Button^ button_register;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ link_reg;
	private: System::Windows::Forms::Button^ button_show_pass;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AuthForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label_form = (gcnew System::Windows::Forms::Label());
			this->label_login = (gcnew System::Windows::Forms::Label());
			this->label_pass = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textbox_login = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textbox_password = (gcnew System::Windows::Forms::TextBox());
			this->button_register = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->link_reg = (gcnew System::Windows::Forms::LinkLabel());
			this->button_show_pass = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"MS PGothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button_exit->Location = System::Drawing::Point(768, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(46, 35);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"x";
			this->button_exit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &AuthForm::button_exit_Click);
			// 
			// label_form
			// 
			this->label_form->AutoSize = true;
			this->label_form->BackColor = System::Drawing::Color::Transparent;
			this->label_form->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label_form->ForeColor = System::Drawing::Color::Orange;
			this->label_form->Location = System::Drawing::Point(56, 46);
			this->label_form->Name = L"label_form";
			this->label_form->Size = System::Drawing::Size(409, 51);
			this->label_form->TabIndex = 1;
			this->label_form->Text = L"Make authorization";
			// 
			// label_login
			// 
			this->label_login->AutoSize = true;
			this->label_login->BackColor = System::Drawing::Color::Transparent;
			this->label_login->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label_login->ForeColor = System::Drawing::Color::White;
			this->label_login->Location = System::Drawing::Point(81, 151);
			this->label_login->Name = L"label_login";
			this->label_login->Size = System::Drawing::Size(86, 31);
			this->label_login->TabIndex = 2;
			this->label_login->Text = L"Login";
			// 
			// label_pass
			// 
			this->label_pass->AutoSize = true;
			this->label_pass->BackColor = System::Drawing::Color::Transparent;
			this->label_pass->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label_pass->ForeColor = System::Drawing::Color::White;
			this->label_pass->Location = System::Drawing::Point(81, 267);
			this->label_pass->Name = L"label_pass";
			this->label_pass->Size = System::Drawing::Size(127, 31);
			this->label_pass->TabIndex = 3;
			this->label_pass->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(67, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Authorization";
			// 
			// textbox_login
			// 
			this->textbox_login->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->textbox_login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textbox_login->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textbox_login->Location = System::Drawing::Point(18, 13);
			this->textbox_login->Name = L"textbox_login";
			this->textbox_login->Size = System::Drawing::Size(260, 29);
			this->textbox_login->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel2->Controls->Add(this->textbox_login);
			this->panel2->Location = System::Drawing::Point(87, 185);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(294, 54);
			this->panel2->TabIndex = 8;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel1->Controls->Add(this->textbox_password);
			this->panel1->Location = System::Drawing::Point(87, 301);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(294, 54);
			this->panel1->TabIndex = 9;
			// 
			// textbox_password
			// 
			this->textbox_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textbox_password->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->textbox_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textbox_password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textbox_password->Location = System::Drawing::Point(18, 13);
			this->textbox_password->Name = L"textbox_password";
			this->textbox_password->Size = System::Drawing::Size(260, 29);
			this->textbox_password->TabIndex = 10;
			this->textbox_password->UseSystemPasswordChar = true;
			// 
			// button_register
			// 
			this->button_register->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_register->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button_register->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_register->Location = System::Drawing::Point(87, 381);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(202, 48);
			this->button_register->TabIndex = 10;
			this->button_register->Text = L"Enter";
			this->button_register->UseVisualStyleBackColor = false;
			this->button_register->Click += gcnew System::EventHandler(this, &AuthForm::button_register_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(83, 433);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Account doesn\'t exist\?";
			// 
			// link_reg
			// 
			this->link_reg->AutoSize = true;
			this->link_reg->BackColor = System::Drawing::Color::Transparent;
			this->link_reg->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->link_reg->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->link_reg->Location = System::Drawing::Point(211, 432);
			this->link_reg->Name = L"link_reg";
			this->link_reg->Size = System::Drawing::Size(61, 20);
			this->link_reg->TabIndex = 12;
			this->link_reg->TabStop = true;
			this->link_reg->Text = L"Sign up";
			this->link_reg->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->link_reg->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AuthForm::link_reg_LinkClicked);
			// 
			// button_show_pass
			// 
			this->button_show_pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_show_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_show_pass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button_show_pass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_show_pass->Location = System::Drawing::Point(387, 301);
			this->button_show_pass->Name = L"button_show_pass";
			this->button_show_pass->Size = System::Drawing::Size(89, 54);
			this->button_show_pass->TabIndex = 15;
			this->button_show_pass->Text = L"Show";
			this->button_show_pass->UseVisualStyleBackColor = false;
			this->button_show_pass->Click += gcnew System::EventHandler(this, &AuthForm::button_show_pass_Click);
			// 
			// AuthForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(826, 497);
			this->Controls->Add(this->button_show_pass);
			this->Controls->Add(this->link_reg);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_register);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_pass);
			this->Controls->Add(this->label_login);
			this->Controls->Add(this->label_form);
			this->Controls->Add(this->button_exit);
			this->Name = L"AuthForm";
			this->Text = L"Authorization";
			this->Load += gcnew System::EventHandler(this, &AuthForm::RegistrationForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AuthForm::RegistrationForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AuthForm::RegistrationForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AuthForm::RegistrationForm_MouseUp);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Point pos;
		bool is_drag;

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit(); // для виходу із програми
	}


	private: System::Void RegistrationForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		is_drag = true;
		pos.X = e->X;
		pos.Y = e->Y;
	}

	private: System::Void RegistrationForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (is_drag)
		{
			Point currentPos = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentPos.X - pos.X, currentPos.Y - pos.Y);
		}
	}

	private: System::Void RegistrationForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		is_drag = false;
	}

	private: System::Void RegistrationForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->ActiveControl = label_form;
	}

	private: System::Void link_reg_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
	{ 
		this->Hide();
		obj->ShowDialog();
		this->Close();
	}

		   private: 
			   static int attempt = 3;

		   private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   String^ login = textbox_login->Text->Trim();
			   String^ password = textbox_password->Text->Trim();

			   if (login->Equals(""))
			   {
				   MessageBox::Show(this, "Login is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }

			   if (password->Equals(""))
			   {
				   MessageBox::Show(this, "Password is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }

			   DB* db = new DB;
			   bool result = db->auth_user(login, password);

			   if (result)
			   {
				   textbox_login->Text = "";
				   textbox_password->Text = "";
				   button_register->Text = "Successful entering";
				   attempt = 3;
				   button_register->Width = 150;

				   this->Hide();
				   todolist^ form = gcnew todolist;
				   form->ShowDialog();
				   this->Close();
			   }
			   else
			   {
				   attempt--;
				   if (attempt > 0)
				   {
					   MessageBox::Show(this, "Incorrect password. Yuo have attempts: " + attempt, "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   }
				   else
				   {
					   db->delete_user(login);
					   MessageBox::Show("User doesn't exist");
				   }
			   }

			   delete db;
			   
		   }

private: System::Void button_show_pass_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textbox_password->UseSystemPasswordChar)
	{
		textbox_password->UseSystemPasswordChar = false; //якщо прихований - показати
		button_show_pass->Text = "Hide";
	}
	else
	{
		textbox_password->UseSystemPasswordChar = true; // якщо видно то сховати
		button_show_pass->Text = "Show";
	}
}

};
}
