#pragma once
#include "DB.h"

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
	public ref class todolist : public System::Windows::Forms::Form
	{
	public:
		todolist(void)
		{
			InitializeComponent();

			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~todolist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label_form;
	private: System::Windows::Forms::Label^ label_login;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textbox_task;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button_add_task;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox;
	private: System::Windows::Forms::Button^ button_del;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox_edit;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_edit_task;


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
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label_form = (gcnew System::Windows::Forms::Label());
			this->label_login = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textbox_task = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button_add_task = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_edit = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_edit_task = (gcnew System::Windows::Forms::Button());
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
			this->button_exit->Location = System::Drawing::Point(319, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(46, 35);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"x";
			this->button_exit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &todolist::button_exit_Click);
			// 
			// label_form
			// 
			this->label_form->AutoSize = true;
			this->label_form->BackColor = System::Drawing::Color::Transparent;
			this->label_form->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label_form->ForeColor = System::Drawing::Color::Orange;
			this->label_form->Location = System::Drawing::Point(21, 33);
			this->label_form->Name = L"label_form";
			this->label_form->Size = System::Drawing::Size(136, 51);
			this->label_form->TabIndex = 1;
			this->label_form->Text = L"To do";
			// 
			// label_login
			// 
			this->label_login->AutoSize = true;
			this->label_login->BackColor = System::Drawing::Color::Transparent;
			this->label_login->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label_login->ForeColor = System::Drawing::Color::Orange;
			this->label_login->Location = System::Drawing::Point(30, 138);
			this->label_login->Name = L"label_login";
			this->label_login->Size = System::Drawing::Size(195, 31);
			this->label_login->TabIndex = 2;
			this->label_login->Text = L"Add something";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(32, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"To do list";
			// 
			// textbox_task
			// 
			this->textbox_task->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->textbox_task->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textbox_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textbox_task->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textbox_task->Location = System::Drawing::Point(19, 10);
			this->textbox_task->Name = L"textbox_task";
			this->textbox_task->Size = System::Drawing::Size(274, 29);
			this->textbox_task->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel2->Controls->Add(this->textbox_task);
			this->panel2->Location = System::Drawing::Point(36, 172);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(313, 49);
			this->panel2->TabIndex = 8;
			// 
			// button_add_task
			// 
			this->button_add_task->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_add_task->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_add_task->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button_add_task->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_add_task->Location = System::Drawing::Point(36, 249);
			this->button_add_task->Name = L"button_add_task";
			this->button_add_task->Size = System::Drawing::Size(150, 48);
			this->button_add_task->TabIndex = 10;
			this->button_add_task->Text = L"Add";
			this->button_add_task->UseVisualStyleBackColor = false;
			this->button_add_task->Click += gcnew System::EventHandler(this, &todolist::button_add_task_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label2->ForeColor = System::Drawing::Color::Orange;
			this->label2->Location = System::Drawing::Point(30, 327);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 31);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Your tasks";
			// 
			// comboBox
			// 
			this->comboBox->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->comboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->comboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Location = System::Drawing::Point(36, 367);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(313, 37);
			this->comboBox->TabIndex = 12;
			this->comboBox->Click += gcnew System::EventHandler(this, &todolist::comboBox_Click);
			// 
			// button_del
			// 
			this->button_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_del->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button_del->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_del->Location = System::Drawing::Point(199, 249);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(150, 48);
			this->button_del->TabIndex = 13;
			this->button_del->Text = L"Delete";
			this->button_del->UseVisualStyleBackColor = false;
			this->button_del->Click += gcnew System::EventHandler(this, &todolist::button_del_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel1->Controls->Add(this->textBox_edit);
			this->panel1->Location = System::Drawing::Point(36, 473);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(313, 37);
			this->panel1->TabIndex = 9;
			// 
			// textBox_edit
			// 
			this->textBox_edit->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->textBox_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBox_edit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox_edit->Location = System::Drawing::Point(20, 8);
			this->textBox_edit->Name = L"textBox_edit";
			this->textBox_edit->Size = System::Drawing::Size(274, 23);
			this->textBox_edit->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label3->ForeColor = System::Drawing::Color::Orange;
			this->label3->Location = System::Drawing::Point(30, 444);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 26);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Edit task";
			// 
			// button_edit_task
			// 
			this->button_edit_task->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_edit_task->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_edit_task->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->button_edit_task->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_edit_task->Location = System::Drawing::Point(35, 535);
			this->button_edit_task->Name = L"button_edit_task";
			this->button_edit_task->Size = System::Drawing::Size(138, 35);
			this->button_edit_task->TabIndex = 12;
			this->button_edit_task->Text = L"Edit";
			this->button_edit_task->UseVisualStyleBackColor = false;
			this->button_edit_task->Click += gcnew System::EventHandler(this, &todolist::button_edit_task_Click);
			// 
			// todolist
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(377, 430);
			this->Controls->Add(this->button_edit_task);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button_del);
			this->Controls->Add(this->comboBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_add_task);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_login);
			this->Controls->Add(this->label_form);
			this->Controls->Add(this->button_exit);
			this->Name = L"todolist";
			this->Text = L"Authorization";
			this->Load += gcnew System::EventHandler(this, &todolist::RegistrationForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &todolist::RegistrationForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &todolist::RegistrationForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &todolist::RegistrationForm_MouseUp);
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

	


	private: System::Void button_add_task_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ task = textbox_task->Text->Trim();

		if (task->Equals(""))
		{
			MessageBox::Show(this, "Line is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		DB* db = new DB;
		db->add_task(task);
		comboBox->DataSource = db->get_tasks();
		delete db;


		textbox_task->Text = "";
		button_add_task->Text = "Successfully";
	}
	private: System::Void comboBox_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Height += 154;
		if (comboBox->Items->Count > 0)
			return;

		DB* db = new DB;
		comboBox->DataSource = db->get_tasks();
		delete db;

	}

private: System::Void button_del_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (comboBox->SelectedItem == nullptr)
		return;

	String^ task_to_del = comboBox->GetItemText(comboBox->SelectedValue);

	DB* db = new DB;
	db->delete_task(task_to_del);
	db->get_tasks();
	comboBox->DataSource = db->get_tasks();
	delete db;
}

private: System::Void button_edit_task_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (comboBox->SelectedItem == nullptr)
		return;

	String^ task_to_up = comboBox->GetItemText(comboBox->SelectedValue);

	DB* db = new DB;
	db->update_task(task_to_up, textBox_edit->Text->Trim());
	db->get_tasks();
	comboBox->DataSource = db->get_tasks();
	textBox_edit->Text = "";
	delete db;
	this->Height -= 154;
}

};
}
