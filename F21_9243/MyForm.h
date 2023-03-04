#pragma once
#include <iostream>
#include "Teacher.h"
#include "Student.h"

Teacher teacher;
Student student;
bool teacher_status;
bool student_status;

static std::string toStandardString(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);
	return returnString;
}

namespace F219243 {

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
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ login_panel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ home_panel;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Panel^ teacher_panel;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:

	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox8;










	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ add_new_teacher_panel;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;




	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BlGroup;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Panel^ student_home_panel;

private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::Panel^ add_new_student_panel;


private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::PictureBox^ pictureBox30;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->login_panel = (gcnew System::Windows::Forms::Panel());
			this->home_panel = (gcnew System::Windows::Forms::Panel());
			this->teacher_panel = (gcnew System::Windows::Forms::Panel());
			this->add_new_teacher_panel = (gcnew System::Windows::Forms::Panel());
			this->student_home_panel = (gcnew System::Windows::Forms::Panel());
			this->add_new_student_panel = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BlGroup = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->login_panel->SuspendLayout();
			this->home_panel->SuspendLayout();
			this->teacher_panel->SuspendLayout();
			this->add_new_teacher_panel->SuspendLayout();
			this->student_home_panel->SuspendLayout();
			this->add_new_student_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// login_panel
			// 
			this->login_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->login_panel->Controls->Add(this->home_panel);
			this->login_panel->Controls->Add(this->label2);
			this->login_panel->Controls->Add(this->button1);
			this->login_panel->Controls->Add(this->textBox2);
			this->login_panel->Controls->Add(this->textBox1);
			this->login_panel->Controls->Add(this->pictureBox3);
			this->login_panel->Controls->Add(this->pictureBox2);
			this->login_panel->Controls->Add(this->label1);
			this->login_panel->Controls->Add(this->pictureBox1);
			this->login_panel->Location = System::Drawing::Point(-1, 0);
			this->login_panel->Name = L"login_panel";
			this->login_panel->Size = System::Drawing::Size(1015, 587);
			this->login_panel->TabIndex = 0;
			// 
			// home_panel
			// 
			this->home_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->home_panel->Controls->Add(this->teacher_panel);
			this->home_panel->Controls->Add(this->pictureBox5);
			this->home_panel->Controls->Add(this->pictureBox4);
			this->home_panel->Controls->Add(this->button3);
			this->home_panel->Controls->Add(this->pictureBox7);
			this->home_panel->Controls->Add(this->button2);
			this->home_panel->Controls->Add(this->label4);
			this->home_panel->Controls->Add(this->pictureBox6);
			this->home_panel->Location = System::Drawing::Point(0, 0);
			this->home_panel->Name = L"home_panel";
			this->home_panel->Size = System::Drawing::Size(1015, 587);
			this->home_panel->TabIndex = 8;
			// 
			// teacher_panel
			// 
			this->teacher_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->teacher_panel->Controls->Add(this->add_new_teacher_panel);
			this->teacher_panel->Controls->Add(this->pictureBox12);
			this->teacher_panel->Controls->Add(this->button5);
			this->teacher_panel->Controls->Add(this->pictureBox9);
			this->teacher_panel->Controls->Add(this->button4);
			this->teacher_panel->Controls->Add(this->pictureBox8);
			this->teacher_panel->Controls->Add(this->dataGridView1);
			this->teacher_panel->Controls->Add(this->pictureBox10);
			this->teacher_panel->Controls->Add(this->label3);
			this->teacher_panel->Controls->Add(this->pictureBox11);
			this->teacher_panel->Location = System::Drawing::Point(0, 0);
			this->teacher_panel->Name = L"teacher_panel";
			this->teacher_panel->Size = System::Drawing::Size(1015, 587);
			this->teacher_panel->TabIndex = 12;
			// 
			// add_new_teacher_panel
			// 
			this->add_new_teacher_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->add_new_teacher_panel->Controls->Add(this->student_home_panel);
			this->add_new_teacher_panel->Controls->Add(this->label28);
			this->add_new_teacher_panel->Controls->Add(this->textBox12);
			this->add_new_teacher_panel->Controls->Add(this->label29);
			this->add_new_teacher_panel->Controls->Add(this->label26);
			this->add_new_teacher_panel->Controls->Add(this->textBox11);
			this->add_new_teacher_panel->Controls->Add(this->label27);
			this->add_new_teacher_panel->Controls->Add(this->label24);
			this->add_new_teacher_panel->Controls->Add(this->textBox10);
			this->add_new_teacher_panel->Controls->Add(this->label25);
			this->add_new_teacher_panel->Controls->Add(this->label23);
			this->add_new_teacher_panel->Controls->Add(this->label22);
			this->add_new_teacher_panel->Controls->Add(this->label20);
			this->add_new_teacher_panel->Controls->Add(this->label19);
			this->add_new_teacher_panel->Controls->Add(this->label18);
			this->add_new_teacher_panel->Controls->Add(this->label17);
			this->add_new_teacher_panel->Controls->Add(this->label16);
			this->add_new_teacher_panel->Controls->Add(this->label15);
			this->add_new_teacher_panel->Controls->Add(this->comboBox1);
			this->add_new_teacher_panel->Controls->Add(this->label14);
			this->add_new_teacher_panel->Controls->Add(this->textBox8);
			this->add_new_teacher_panel->Controls->Add(this->label13);
			this->add_new_teacher_panel->Controls->Add(this->textBox9);
			this->add_new_teacher_panel->Controls->Add(this->label12);
			this->add_new_teacher_panel->Controls->Add(this->textBox5);
			this->add_new_teacher_panel->Controls->Add(this->textBox6);
			this->add_new_teacher_panel->Controls->Add(this->label9);
			this->add_new_teacher_panel->Controls->Add(this->label10);
			this->add_new_teacher_panel->Controls->Add(this->label8);
			this->add_new_teacher_panel->Controls->Add(this->radioButton2);
			this->add_new_teacher_panel->Controls->Add(this->radioButton1);
			this->add_new_teacher_panel->Controls->Add(this->textBox4);
			this->add_new_teacher_panel->Controls->Add(this->textBox3);
			this->add_new_teacher_panel->Controls->Add(this->label7);
			this->add_new_teacher_panel->Controls->Add(this->label6);
			this->add_new_teacher_panel->Controls->Add(this->pictureBox14);
			this->add_new_teacher_panel->Controls->Add(this->button7);
			this->add_new_teacher_panel->Controls->Add(this->pictureBox15);
			this->add_new_teacher_panel->Controls->Add(this->pictureBox16);
			this->add_new_teacher_panel->Controls->Add(this->label5);
			this->add_new_teacher_panel->Controls->Add(this->pictureBox17);
			this->add_new_teacher_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->add_new_teacher_panel->Location = System::Drawing::Point(0, 0);
			this->add_new_teacher_panel->Name = L"add_new_teacher_panel";
			this->add_new_teacher_panel->Size = System::Drawing::Size(1015, 587);
			this->add_new_teacher_panel->TabIndex = 15;
			// 
			// student_home_panel
			// 
			this->student_home_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->student_home_panel->Controls->Add(this->add_new_student_panel);
			this->student_home_panel->Controls->Add(this->pictureBox21);
			this->student_home_panel->Controls->Add(this->button8);
			this->student_home_panel->Controls->Add(this->pictureBox22);
			this->student_home_panel->Controls->Add(this->button9);
			this->student_home_panel->Controls->Add(this->pictureBox23);
			this->student_home_panel->Controls->Add(this->dataGridView2);
			this->student_home_panel->Controls->Add(this->pictureBox24);
			this->student_home_panel->Controls->Add(this->label51);
			this->student_home_panel->Controls->Add(this->pictureBox25);
			this->student_home_panel->Location = System::Drawing::Point(0, 0);
			this->student_home_panel->Name = L"student_home_panel";
			this->student_home_panel->Size = System::Drawing::Size(1015, 587);
			this->student_home_panel->TabIndex = 53;
			// 
			// add_new_student_panel
			// 
			this->add_new_student_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->add_new_student_panel->Controls->Add(this->label11);
			this->add_new_student_panel->Controls->Add(this->comboBox3);
			this->add_new_student_panel->Controls->Add(this->label53);
			this->add_new_student_panel->Controls->Add(this->label21);
			this->add_new_student_panel->Controls->Add(this->textBox7);
			this->add_new_student_panel->Controls->Add(this->label30);
			this->add_new_student_panel->Controls->Add(this->label31);
			this->add_new_student_panel->Controls->Add(this->textBox13);
			this->add_new_student_panel->Controls->Add(this->label32);
			this->add_new_student_panel->Controls->Add(this->label33);
			this->add_new_student_panel->Controls->Add(this->textBox14);
			this->add_new_student_panel->Controls->Add(this->label34);
			this->add_new_student_panel->Controls->Add(this->label35);
			this->add_new_student_panel->Controls->Add(this->label36);
			this->add_new_student_panel->Controls->Add(this->label37);
			this->add_new_student_panel->Controls->Add(this->label38);
			this->add_new_student_panel->Controls->Add(this->label39);
			this->add_new_student_panel->Controls->Add(this->label40);
			this->add_new_student_panel->Controls->Add(this->label41);
			this->add_new_student_panel->Controls->Add(this->label42);
			this->add_new_student_panel->Controls->Add(this->comboBox2);
			this->add_new_student_panel->Controls->Add(this->label43);
			this->add_new_student_panel->Controls->Add(this->textBox15);
			this->add_new_student_panel->Controls->Add(this->label44);
			this->add_new_student_panel->Controls->Add(this->textBox16);
			this->add_new_student_panel->Controls->Add(this->label45);
			this->add_new_student_panel->Controls->Add(this->textBox17);
			this->add_new_student_panel->Controls->Add(this->textBox18);
			this->add_new_student_panel->Controls->Add(this->label46);
			this->add_new_student_panel->Controls->Add(this->label47);
			this->add_new_student_panel->Controls->Add(this->label48);
			this->add_new_student_panel->Controls->Add(this->radioButton3);
			this->add_new_student_panel->Controls->Add(this->radioButton4);
			this->add_new_student_panel->Controls->Add(this->textBox19);
			this->add_new_student_panel->Controls->Add(this->textBox20);
			this->add_new_student_panel->Controls->Add(this->label49);
			this->add_new_student_panel->Controls->Add(this->label50);
			this->add_new_student_panel->Controls->Add(this->pictureBox27);
			this->add_new_student_panel->Controls->Add(this->button11);
			this->add_new_student_panel->Controls->Add(this->pictureBox28);
			this->add_new_student_panel->Controls->Add(this->pictureBox29);
			this->add_new_student_panel->Controls->Add(this->label52);
			this->add_new_student_panel->Controls->Add(this->pictureBox30);
			this->add_new_student_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->add_new_student_panel->Location = System::Drawing::Point(0, 0);
			this->add_new_student_panel->Name = L"add_new_student_panel";
			this->add_new_student_panel->Size = System::Drawing::Size(1015, 587);
			this->add_new_student_panel->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Crimson;
			this->label11->Location = System::Drawing::Point(418, 318);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 24);
			this->label11->TabIndex = 55;
			this->label11->Text = L"*";
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Paid", L"Unpaid" });
			this->comboBox3->Location = System::Drawing::Point(441, 319);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(65, 26);
			this->comboBox3->Sorted = true;
			this->comboBox3->TabIndex = 54;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label53->Location = System::Drawing::Point(378, 319);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(44, 24);
			this->label53->TabIndex = 53;
			this->label53->Text = L"Fee";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Crimson;
			this->label21->Location = System::Drawing::Point(919, 324);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 24);
			this->label21->TabIndex = 52;
			this->label21->Text = L"*";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox7->Location = System::Drawing::Point(942, 319);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(49, 29);
			this->textBox7->TabIndex = 51;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label30->Location = System::Drawing::Point(872, 323);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(49, 24);
			this->label30->TabIndex = 50;
			this->label30->Text = L"Year";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Crimson;
			this->label31->Location = System::Drawing::Point(769, 324);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(17, 24);
			this->label31->TabIndex = 49;
			this->label31->Text = L"*";
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox13->Location = System::Drawing::Point(795, 318);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(49, 29);
			this->textBox13->TabIndex = 48;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label32->Location = System::Drawing::Point(710, 323);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(63, 24);
			this->label32->TabIndex = 47;
			this->label32->Text = L"Month";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::Crimson;
			this->label33->Location = System::Drawing::Point(599, 325);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(17, 24);
			this->label33->TabIndex = 46;
			this->label33->Text = L"*";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox14->Location = System::Drawing::Point(622, 319);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(49, 29);
			this->textBox14->TabIndex = 45;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label34->Location = System::Drawing::Point(557, 324);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(48, 24);
			this->label34->TabIndex = 44;
			this->label34->Text = L"Date";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::Crimson;
			this->label35->Location = System::Drawing::Point(90, 415);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(17, 24);
			this->label35->TabIndex = 43;
			this->label35->Text = L"*";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::Crimson;
			this->label36->Location = System::Drawing::Point(845, 240);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(17, 24);
			this->label36->TabIndex = 42;
			this->label36->Text = L"*";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::Crimson;
			this->label37->Location = System::Drawing::Point(111, 321);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(17, 24);
			this->label37->TabIndex = 40;
			this->label37->Text = L"*";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::Crimson;
			this->label38->Location = System::Drawing::Point(430, 236);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(17, 24);
			this->label38->TabIndex = 39;
			this->label38->Text = L"*";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::Crimson;
			this->label39->Location = System::Drawing::Point(104, 237);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(17, 24);
			this->label39->TabIndex = 38;
			this->label39->Text = L"*";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::Crimson;
			this->label40->Location = System::Drawing::Point(797, 150);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(17, 24);
			this->label40->TabIndex = 37;
			this->label40->Text = L"*";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::Crimson;
			this->label41->Location = System::Drawing::Point(471, 157);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(17, 24);
			this->label41->TabIndex = 36;
			this->label41->Text = L"*";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::Crimson;
			this->label42->Location = System::Drawing::Point(107, 150);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(17, 24);
			this->label42->TabIndex = 35;
			this->label42->Text = L"*";
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A-", L"A+", L"AB-", L"AB+", L"B-", L"B+", L"O-",
					L"O+"
			});
			this->comboBox2->Location = System::Drawing::Point(873, 235);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 26);
			this->comboBox2->Sorted = true;
			this->comboBox2->TabIndex = 34;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label43->Location = System::Drawing::Point(735, 240);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(117, 24);
			this->label43->TabIndex = 33;
			this->label43->Text = L"Blood Group";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox15->Location = System::Drawing::Point(130, 318);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(200, 29);
			this->textBox15->TabIndex = 32;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label44->Location = System::Drawing::Point(13, 415);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(80, 24);
			this->label44->TabIndex = 31;
			this->label44->Text = L"Address";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox16->Location = System::Drawing::Point(130, 412);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(864, 29);
			this->textBox16->TabIndex = 30;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label45->Location = System::Drawing::Point(13, 321);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(103, 24);
			this->label45->TabIndex = 25;
			this->label45->Text = L"Contact No";
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox17->Location = System::Drawing::Point(494, 238);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(200, 29);
			this->textBox17->TabIndex = 23;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox18->Location = System::Drawing::Point(130, 234);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(119, 29);
			this->textBox18->TabIndex = 22;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label46->Location = System::Drawing::Point(378, 238);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(57, 24);
			this->label46->TabIndex = 21;
			this->label46->Text = L"Email";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label47->Location = System::Drawing::Point(13, 234);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(97, 24);
			this->label47->TabIndex = 20;
			this->label47->Text = L"Username";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label48->Location = System::Drawing::Point(728, 150);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(74, 24);
			this->label48->TabIndex = 19;
			this->label48->Text = L"Gender";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->radioButton3->Location = System::Drawing::Point(919, 152);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(75, 22);
			this->radioButton3->TabIndex = 18;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Female";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->radioButton4->Location = System::Drawing::Point(843, 152);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(58, 22);
			this->radioButton4->TabIndex = 17;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Male";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox19->Location = System::Drawing::Point(494, 154);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(119, 29);
			this->textBox19->TabIndex = 16;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox20->Location = System::Drawing::Point(130, 150);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(119, 29);
			this->textBox20->TabIndex = 15;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label49->Location = System::Drawing::Point(378, 154);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(99, 24);
			this->label49->TabIndex = 14;
			this->label49->Text = L"Last Name";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label50->Location = System::Drawing::Point(13, 150);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(101, 24);
			this->label50->TabIndex = 13;
			this->label50->Text = L"First Name";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(13, 539);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(34, 33);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 12;
			this->pictureBox27->TabStop = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(53, 539);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(119, 37);
			this->button11->TabIndex = 11;
			this->button11->Text = L"Done";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(17, 38);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(44, 40);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 10;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &MyForm::pictureBox28_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(954, 38);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(40, 40);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 8;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label52->Location = System::Drawing::Point(358, 38);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(395, 33);
			this->label52->TabIndex = 1;
			this->label52->Text = L"Learning Managment System";
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(290, 27);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(60, 60);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 0;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(191, 539);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(34, 33);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 14;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(231, 539);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(119, 37);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Add new";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(13, 539);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(34, 33);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 12;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(53, 539);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(119, 37);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Edit";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(17, 38);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(44, 40);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 10;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MyForm::pictureBox23_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->ColumnHeadersHeight = 35;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->Fee, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->Location = System::Drawing::Point(13, 115);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 4;
			this->dataGridView2->RowTemplate->Height = 30;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(990, 391);
			this->dataGridView2->TabIndex = 9;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"F.Name";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 94;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"L.Name";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 95;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Username";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 95;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Email";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 130;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"R.Date";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 95;
			// 
			// Fee
			// 
			this->Fee->HeaderText = L"Fee";
			this->Fee->Name = L"Fee";
			this->Fee->ReadOnly = true;
			this->Fee->Width = 50;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Gender";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 80;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Bl.Group";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 95;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Number";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 130;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Address";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 143;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(954, 38);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(40, 40);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 8;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label51->Location = System::Drawing::Point(358, 38);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(395, 33);
			this->label51->TabIndex = 1;
			this->label51->Text = L"Learning Managment System";
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(290, 27);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(60, 60);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 0;
			this->pictureBox25->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Crimson;
			this->label28->Location = System::Drawing::Point(919, 324);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(17, 24);
			this->label28->TabIndex = 52;
			this->label28->Text = L"*";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox12->Location = System::Drawing::Point(942, 319);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(49, 29);
			this->textBox12->TabIndex = 51;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label29->Location = System::Drawing::Point(872, 323);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(49, 24);
			this->label29->TabIndex = 50;
			this->label29->Text = L"Year";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Crimson;
			this->label26->Location = System::Drawing::Point(769, 324);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(17, 24);
			this->label26->TabIndex = 49;
			this->label26->Text = L"*";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox11->Location = System::Drawing::Point(795, 318);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(49, 29);
			this->textBox11->TabIndex = 48;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label27->Location = System::Drawing::Point(710, 323);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(63, 24);
			this->label27->TabIndex = 47;
			this->label27->Text = L"Month";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Crimson;
			this->label24->Location = System::Drawing::Point(599, 325);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(17, 24);
			this->label24->TabIndex = 46;
			this->label24->Text = L"*";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox10->Location = System::Drawing::Point(622, 319);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(49, 29);
			this->textBox10->TabIndex = 45;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label25->Location = System::Drawing::Point(557, 324);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(48, 24);
			this->label25->TabIndex = 44;
			this->label25->Text = L"Date";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Crimson;
			this->label23->Location = System::Drawing::Point(90, 415);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(17, 24);
			this->label23->TabIndex = 43;
			this->label23->Text = L"*";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Crimson;
			this->label22->Location = System::Drawing::Point(845, 240);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(17, 24);
			this->label22->TabIndex = 42;
			this->label22->Text = L"*";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Crimson;
			this->label20->Location = System::Drawing::Point(111, 321);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(17, 24);
			this->label20->TabIndex = 40;
			this->label20->Text = L"*";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Crimson;
			this->label19->Location = System::Drawing::Point(430, 236);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 24);
			this->label19->TabIndex = 39;
			this->label19->Text = L"*";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Crimson;
			this->label18->Location = System::Drawing::Point(104, 237);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(17, 24);
			this->label18->TabIndex = 38;
			this->label18->Text = L"*";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Crimson;
			this->label17->Location = System::Drawing::Point(797, 150);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(17, 24);
			this->label17->TabIndex = 37;
			this->label17->Text = L"*";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Crimson;
			this->label16->Location = System::Drawing::Point(471, 157);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(17, 24);
			this->label16->TabIndex = 36;
			this->label16->Text = L"*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Crimson;
			this->label15->Location = System::Drawing::Point(107, 150);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(17, 24);
			this->label15->TabIndex = 35;
			this->label15->Text = L"*";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A-", L"A+", L"AB-", L"AB+", L"B-", L"B+", L"O-",
					L"O+"
			});
			this->comboBox1->Location = System::Drawing::Point(873, 235);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 34;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label14->Location = System::Drawing::Point(735, 240);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(117, 24);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Blood Group";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox8->Location = System::Drawing::Point(130, 318);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(200, 29);
			this->textBox8->TabIndex = 32;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label13->Location = System::Drawing::Point(13, 415);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(80, 24);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Address";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox9->Location = System::Drawing::Point(130, 412);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(864, 29);
			this->textBox9->TabIndex = 30;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label12->Location = System::Drawing::Point(13, 321);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(103, 24);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Contact No";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox5->Location = System::Drawing::Point(494, 238);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 29);
			this->textBox5->TabIndex = 23;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox6->Location = System::Drawing::Point(130, 234);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(119, 29);
			this->textBox6->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Location = System::Drawing::Point(378, 238);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 24);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Email";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label10->Location = System::Drawing::Point(13, 234);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 24);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Username";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label8->Location = System::Drawing::Point(728, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 24);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Gender";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->radioButton2->Location = System::Drawing::Point(919, 152);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(75, 22);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->radioButton1->Location = System::Drawing::Point(843, 152);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(58, 22);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox4->Location = System::Drawing::Point(494, 154);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(119, 29);
			this->textBox4->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox3->Location = System::Drawing::Point(130, 150);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(119, 29);
			this->textBox3->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->Location = System::Drawing::Point(378, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 24);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Last Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label6->Location = System::Drawing::Point(13, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"First Name";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(13, 539);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(34, 33);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 12;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(53, 539);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(119, 37);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Done";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(17, 38);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(44, 40);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 10;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(954, 38);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(40, 40);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 8;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Location = System::Drawing::Point(358, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(395, 33);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Learning Managment System";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(290, 27);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(60, 60);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 0;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(191, 539);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(34, 33);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(231, 539);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 37);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Add new";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(13, 539);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(34, 33);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 12;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(53, 539);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 37);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Edit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(17, 38);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(44, 40);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->ColumnHeadersHeight = 35;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Id, this->FName,
					this->LName, this->Username, this->Email, this->RDate, this->Gender, this->BlGroup, this->Number, this->Address
			});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->Location = System::Drawing::Point(13, 115);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(990, 391);
			this->dataGridView1->TabIndex = 9;
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->Width = 30;
			// 
			// FName
			// 
			this->FName->HeaderText = L"F.Name";
			this->FName->Name = L"FName";
			this->FName->Width = 94;
			// 
			// LName
			// 
			this->LName->HeaderText = L"L.Name";
			this->LName->Name = L"LName";
			this->LName->Width = 95;
			// 
			// Username
			// 
			this->Username->HeaderText = L"Username";
			this->Username->Name = L"Username";
			this->Username->Width = 95;
			// 
			// Email
			// 
			this->Email->HeaderText = L"Email";
			this->Email->Name = L"Email";
			this->Email->Width = 130;
			// 
			// RDate
			// 
			this->RDate->HeaderText = L"R.Date";
			this->RDate->Name = L"RDate";
			this->RDate->Width = 95;
			// 
			// Gender
			// 
			this->Gender->HeaderText = L"Gender";
			this->Gender->Name = L"Gender";
			this->Gender->Width = 80;
			// 
			// BlGroup
			// 
			this->BlGroup->HeaderText = L"Bl.Group";
			this->BlGroup->Name = L"BlGroup";
			this->BlGroup->Width = 95;
			// 
			// Number
			// 
			this->Number->HeaderText = L"Number";
			this->Number->Name = L"Number";
			this->Number->Width = 130;
			// 
			// Address
			// 
			this->Address->HeaderText = L"Address";
			this->Address->Name = L"Address";
			this->Address->Width = 143;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(954, 38);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 40);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 8;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(358, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(395, 33);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Learning Managment System";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(290, 27);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(60, 60);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(307, 349);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(52, 55);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(302, 252);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(65, 51);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(390, 349);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(371, 55);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Manage Student";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(45, 47);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 40);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(390, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(371, 55);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Manage Teacher";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(393, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(395, 33);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Learning Managment System";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(290, 29);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 80);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(13, 540);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(397, 31);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Username: bilal Password: tariq";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(463, 447);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 41);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(418, 360);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(296, 31);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Password";
			this->textBox2->Enter += gcnew System::EventHandler(this, &MyForm::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox1->Location = System::Drawing::Point(418, 308);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(296, 31);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Username";
			this->textBox1->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(365, 359);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(26, 32);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(365, 309);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(343, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(395, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Learning Managment System";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(463, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 145);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1014, 586);
			this->Controls->Add(this->login_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1030, 625);
			this->MinimumSize = System::Drawing::Size(1030, 625);
			this->Name = L"MyForm";
			this->Text = L"LMS";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->login_panel->ResumeLayout(false);
			this->login_panel->PerformLayout();
			this->home_panel->ResumeLayout(false);
			this->home_panel->PerformLayout();
			this->teacher_panel->ResumeLayout(false);
			this->teacher_panel->PerformLayout();
			this->add_new_teacher_panel->ResumeLayout(false);
			this->add_new_teacher_panel->PerformLayout();
			this->student_home_panel->ResumeLayout(false);
			this->student_home_panel->PerformLayout();
			this->add_new_student_panel->ResumeLayout(false);
			this->add_new_student_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		home_panel->Visible = false;
		teacher_panel->Visible = false;
		student_home_panel->Visible = false;
		add_new_student_panel->Visible = false;
		add_new_teacher_panel->Visible = false;
		teacher.load_teacher();
		student.load_student();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "bilal" && textBox2->Text == "tariq") {
			home_panel->Visible = true;
		}
		else {
			MessageBox::Show("Wrong username or password", "Message", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
		}
	}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "Username";
	textBox1->ForeColor = System::Drawing::Color::DarkGray;
	textBox2->Text = "Password";
	textBox2->ForeColor = System::Drawing::Color::DarkGray;
	textBox2->PasswordChar = false;
	home_panel->Visible = false;
}
private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Username") {
		textBox1->Text = "";
		textBox1->ForeColor = System::Drawing::Color::Black;
	}
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		textBox1->Text = "Username";
		textBox1->ForeColor = System::Drawing::Color::DarkGray;
	}
}
	   private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		   if (textBox2->Text == "Password") {
			   textBox2->Text = "";
			   textBox2->ForeColor = System::Drawing::Color::Black;
		   }
		   textBox2->PasswordChar = '*';
	   }
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "") {
		textBox2->Text = "Password";
		textBox2->ForeColor = System::Drawing::Color::DarkGray;
	}
	if (textBox2->Text == "Password")
		textBox2->PasswordChar = false;
	else
		textBox2->PasswordChar = '*';
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	teacher_panel->Visible = true;
	dataGridView1->Rows->Clear();
	TeacherNode* tNode = teacher.get_head();

	while (tNode) {
		if (tNode->id != 0) {
			String^ id = gcnew String(tNode->id.ToString());
			String^ firstName = gcnew String(tNode->firstName.c_str());
			String^ lastName = gcnew String(tNode->lastName.c_str());
			String^ userName = gcnew String(tNode->userName.c_str());
			String^ email = gcnew String(tNode->email.c_str());
			String^ day = gcnew String(tNode->registrationDate.day.ToString());
			String^ month = gcnew String(tNode->registrationDate.month.ToString());
			String^ year = gcnew String(tNode->registrationDate.year.ToString());
			String^ gender = gcnew String(tNode->gender.c_str());
			String^ bloodGroup = gcnew String(tNode->bloodGroup.c_str());
			String^ number = gcnew String(tNode->contactNo.c_str());
			String^ address = gcnew String(tNode->address.c_str());
			dataGridView1->Rows->Add(id, firstName, lastName, userName, email, day + " / " + month + " / " + year, gender, bloodGroup, number, address);
		}

		tNode = tNode->next;
	}

	delete tNode;
	tNode = NULL;
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	teacher_panel->Visible = false;
	add_new_teacher_panel->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	add_new_teacher_panel->Visible = true;
	radioButton1->Checked = true;
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->textBox8->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox9->Text = "";
	this->comboBox1->Text = "";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "" && textBox11->Text != "" && textBox12->Text != "") {
		add_new_teacher_panel->Visible = false;

		string gender = "Male";
		if (radioButton2->Checked == true) {
			gender = "Female";
		}
		Date date;
		date.day = stoi(toStandardString(textBox10->Text));
		date.month = stoi(toStandardString(textBox11->Text));
		date.year = stoi(toStandardString(textBox12->Text));

		if (teacher_status) {
			TeacherNode* edit = teacher.edit_teacher(dataGridView1->CurrentCell->RowIndex);
			edit->firstName = toStandardString(this->textBox3->Text);
			edit->lastName = toStandardString(this->textBox4->Text);
			edit->userName = toStandardString(this->textBox6->Text);
			edit->email = toStandardString(this->textBox5->Text);
			edit->contactNo = toStandardString(this->textBox8->Text);
			edit->registrationDate.day = stoi(toStandardString(this->textBox10->Text));
			edit->registrationDate.month = stoi(toStandardString(this->textBox11->Text));
			edit->registrationDate.year = stoi(toStandardString(this->textBox12->Text));
			edit->address = toStandardString(this->textBox9->Text);
			if (this->radioButton1->Checked)
				edit->gender = "Male";
			else
				edit->gender = "Female";
			edit->bloodGroup = toStandardString(this->comboBox1->Text);
			teacher_status = false;

			teacher.save_teacher();

			dataGridView1->Rows->Clear();

			TeacherNode* tNode = teacher.get_head();

			while (tNode) {
				if (tNode->id != 0) {
					String^ id = gcnew String(tNode->id.ToString());
					String^ firstName = gcnew String(tNode->firstName.c_str());
					String^ lastName = gcnew String(tNode->lastName.c_str());
					String^ userName = gcnew String(tNode->userName.c_str());
					String^ email = gcnew String(tNode->email.c_str());
					String^ day = gcnew String(tNode->registrationDate.day.ToString());
					String^ month = gcnew String(tNode->registrationDate.month.ToString());
					String^ year = gcnew String(tNode->registrationDate.year.ToString());
					String^ gender = gcnew String(tNode->gender.c_str());
					String^ bloodGroup = gcnew String(tNode->bloodGroup.c_str());
					String^ number = gcnew String(tNode->contactNo.c_str());
					String^ address = gcnew String(tNode->address.c_str());
					dataGridView1->Rows->Add(id, firstName, lastName, userName, email, day + "/" + month + "/" + year, gender, bloodGroup, number, address);
				}

				tNode = tNode->next;
			}

			delete tNode;
			tNode = NULL;

			return;
		}

		teacher.add_new_teacher(toStandardString(textBox3->Text), toStandardString(textBox4->Text), toStandardString(textBox6->Text), toStandardString(textBox5->Text), date, gender, toStandardString(textBox8->Text), toStandardString(comboBox1->Text), toStandardString(textBox9->Text));
		
		teacher.save_teacher();

		dataGridView1->Rows->Clear();

		TeacherNode* tNode = teacher.get_head();

		while (tNode) {
			if (tNode->id != 0) {
				String^ id = gcnew String(tNode->id.ToString());
				String^ firstName = gcnew String(tNode->firstName.c_str());
				String^ lastName = gcnew String(tNode->lastName.c_str());
				String^ userName = gcnew String(tNode->userName.c_str());
				String^ email = gcnew String(tNode->email.c_str());
				String^ day = gcnew String(tNode->registrationDate.day.ToString());
				String^ month = gcnew String(tNode->registrationDate.month.ToString());
				String^ year = gcnew String(tNode->registrationDate.year.ToString());
				String^ gender = gcnew String(tNode->gender.c_str());
				String^ bloodGroup = gcnew String(tNode->bloodGroup.c_str());
				String^ number = gcnew String(tNode->contactNo.c_str());
				String^ address = gcnew String(tNode->address.c_str());
				dataGridView1->Rows->Add(id, firstName, lastName, userName, email, day + "/" + month + "/" + year, gender, bloodGroup, number, address);
			}

			tNode = tNode->next;
		}

		delete tNode;
		tNode = NULL;
	}
	else {
		MessageBox::Show("Fill all the information", "Message", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	add_new_teacher_panel->Visible = true;
	TeacherNode* tNode = teacher.edit_teacher(dataGridView1->CurrentCell->RowIndex);
	String^ id = gcnew String(tNode->id.ToString());
	String^ firstName = gcnew String(tNode->firstName.c_str());
	String^ lastName = gcnew String(tNode->lastName.c_str());
	String^ userName = gcnew String(tNode->userName.c_str());
	String^ email = gcnew String(tNode->email.c_str());
	String^ day = gcnew String(tNode->registrationDate.day.ToString());
	String^ month = gcnew String(tNode->registrationDate.month.ToString());
	String^ year = gcnew String(tNode->registrationDate.year.ToString());
	String^ gender = gcnew String(tNode->gender.c_str());
	String^ bloodGroup = gcnew String(tNode->bloodGroup.c_str());
	String^ number = gcnew String(tNode->contactNo.c_str());
	String^ address = gcnew String(tNode->address.c_str());

	textBox3->Text = firstName;
	textBox4->Text = lastName;
	textBox5->Text = email;
	textBox6->Text = userName;
	textBox8->Text = number;
	textBox9->Text = address;
	textBox10->Text = day;
	textBox11->Text = month;
	textBox12->Text = year;
	comboBox1->Text = bloodGroup;

	if (tNode->gender == "Male")
		radioButton1->Checked = true;
	else
		radioButton2->Checked = true;

	teacher_status = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	teacher_panel->Visible = true;
	add_new_teacher_panel->Visible = true;
	student_home_panel->Visible = true;

	dataGridView2->Rows->Clear();

	StudentNode* sNode = student.get_head();

	while (sNode) {
		if (sNode->id != 0) {
			String^ id = gcnew String(sNode->id.ToString());
			String^ firstName = gcnew String(sNode->firstName.c_str());
			String^ lastName = gcnew String(sNode->lastName.c_str());
			String^ userName = gcnew String(sNode->userName.c_str());
			String^ email = gcnew String(sNode->email.c_str());
			String^ day = gcnew String(sNode->registrationDate.day.ToString());
			String^ month = gcnew String(sNode->registrationDate.month.ToString());
			String^ year = gcnew String(sNode->registrationDate.year.ToString());
			String^ gender = gcnew String(sNode->gender.c_str());
			String^ bloodGroup = gcnew String(sNode->bloodGroup.c_str());
			String^ number = gcnew String(sNode->contactNo.c_str());
			String^ address = gcnew String(sNode->address.c_str());
			String^ fee;
			if (sNode->feeStatus)
				fee = gcnew String("Paid");
			else
				fee = gcnew String("Unpaid");
			dataGridView2->Rows->Add(id, "Ali", lastName, userName, email, day + "/" + month + "/" + year, fee, gender, bloodGroup, number, address);
		}

		sNode = sNode->next;
	}

	delete sNode;
	sNode = NULL;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	add_new_student_panel->Visible = true;
	radioButton4->Checked = true;
	this->textBox20->Text = "";
	this->textBox19->Text = "";
	this->textBox18->Text = "";
	this->textBox17->Text = "";
	this->textBox15->Text = "";
	this->textBox14->Text = "";
	this->textBox13->Text = "";
	this->textBox7->Text = "";
	this->textBox16->Text = "";
	this->comboBox2->Text = "";
	this->comboBox3->Text = "";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox20->Text != "" && textBox19->Text != "" && textBox18->Text != "" && textBox15->Text != "" && textBox17->Text != "" && textBox7->Text != "" && textBox13->Text != "" && textBox14->Text != "" && textBox16->Text != "") {
		add_new_student_panel->Visible = false;

		if (student_status) {
			StudentNode* edit = student.edit_student(dataGridView2->CurrentCell->RowIndex);
			edit->firstName = toStandardString(this->textBox20->Text);
			edit->lastName = toStandardString(this->textBox19->Text);
			edit->userName = toStandardString(this->textBox18->Text);
			edit->email = toStandardString(this->textBox17->Text);
			edit->contactNo = toStandardString(this->textBox15->Text);
			edit->registrationDate.day = stoi(toStandardString(this->textBox14->Text));
			edit->registrationDate.month = stoi(toStandardString(this->textBox13->Text));
			edit->registrationDate.year = stoi(toStandardString(this->textBox7->Text));
			edit->address = toStandardString(this->textBox16->Text);
			if (comboBox3->Text == "Paid")
				edit->feeStatus = true;
			else
				edit->feeStatus = false;
			if (this->radioButton4->Checked)
				edit->gender = "Male";
			else
				edit->gender = "Female";
			edit->bloodGroup = toStandardString(this->comboBox2->Text);
			student_status = false;

			student.save_student();

			dataGridView2->Rows->Clear();

			StudentNode* sNode = student.get_head();

			while (sNode) {
				if (sNode->id != 0) {
					String^ id = gcnew String(sNode->id.ToString());
					String^ firstName = gcnew String(sNode->firstName.c_str());
					String^ lastName = gcnew String(sNode->lastName.c_str());
					String^ userName = gcnew String(sNode->userName.c_str());
					String^ email = gcnew String(sNode->email.c_str());
					String^ day = gcnew String(sNode->registrationDate.day.ToString());
					String^ month = gcnew String(sNode->registrationDate.month.ToString());
					String^ year = gcnew String(sNode->registrationDate.year.ToString());
					String^ gender = gcnew String(sNode->gender.c_str());
					String^ bloodGroup = gcnew String(sNode->bloodGroup.c_str());
					String^ number = gcnew String(sNode->contactNo.c_str());
					String^ address = gcnew String(sNode->address.c_str());
					String^ fee = gcnew String("");
					if (sNode->feeStatus)
						fee = "Paid";
					else
						fee = "Unpaid";
					dataGridView2->Rows->Add(id, firstName, lastName, userName, email, day + "/" + month + "/" + year, fee, gender, bloodGroup, number, address);
				}

				sNode = sNode->next;
			}

			delete sNode;
			sNode = NULL;

			return;
		}

		string gender = "Male";
		if (radioButton3->Checked == true) {
			gender = "Female";
		}
		Date date;
		date.day = stoi(toStandardString(textBox14->Text));
		date.month = stoi(toStandardString(textBox13->Text));
		date.year = stoi(toStandardString(textBox7->Text));

		bool feeStatus = false;

		if (comboBox2->Text == "Paid")
			feeStatus = true;

		student.add_new_student(toStandardString(textBox20->Text), toStandardString(textBox19->Text), toStandardString(textBox18->Text), toStandardString(textBox17->Text), date, gender, toStandardString(textBox15->Text), toStandardString(comboBox2->Text), toStandardString(textBox16->Text), feeStatus);

		student.save_student();

		dataGridView2->Rows->Clear();

		StudentNode* sNode = student.get_head();

		while (sNode) {
			if (sNode->id != 0) {
				String^ id = gcnew String(sNode->id.ToString());
				String^ firstName = gcnew String(sNode->firstName.c_str());
				String^ lastName = gcnew String(sNode->lastName.c_str());
				String^ userName = gcnew String(sNode->userName.c_str());
				String^ email = gcnew String(sNode->email.c_str());
				String^ day = gcnew String(sNode->registrationDate.day.ToString());
				String^ month = gcnew String(sNode->registrationDate.month.ToString());
				String^ year = gcnew String(sNode->registrationDate.year.ToString());
				String^ gender = gcnew String(sNode->gender.c_str());
				String^ bloodGroup = gcnew String(sNode->bloodGroup.c_str());
				String^ number = gcnew String(sNode->contactNo.c_str());
				String^ address = gcnew String(sNode->address.c_str());
				String^ fee;
				if (sNode->feeStatus)
					fee = gcnew String("Paid");
				else
					fee = gcnew String("Unpaid");
				dataGridView2->Rows->Add(id, firstName, lastName, userName, email, day + "/" + month + "/" + year, fee, gender, bloodGroup, number, address);
			}
			sNode = sNode->next;
		}

		delete sNode;
		sNode = NULL;
	}
	else {
		MessageBox::Show("Fill all the information", "Message", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	add_new_student_panel->Visible = true;

	StudentNode* sNode = student.edit_student(dataGridView2->CurrentCell->RowIndex);
	String^ id = gcnew String(sNode->id.ToString());
	String^ firstName = gcnew String(sNode->firstName.c_str());
	String^ lastName = gcnew String(sNode->lastName.c_str());
	String^ userName = gcnew String(sNode->userName.c_str());
	String^ email = gcnew String(sNode->email.c_str());
	String^ day = gcnew String(sNode->registrationDate.day.ToString());
	String^ month = gcnew String(sNode->registrationDate.month.ToString());
	String^ year = gcnew String(sNode->registrationDate.year.ToString());
	String^ gender = gcnew String(sNode->gender.c_str());
	String^ bloodGroup = gcnew String(sNode->bloodGroup.c_str());
	String^ number = gcnew String(sNode->contactNo.c_str());
	String^ address = gcnew String(sNode->address.c_str());

	textBox20->Text = firstName;
	textBox19->Text = lastName;
	textBox17->Text = email;
	textBox18->Text = userName;
	textBox15->Text = number;
	textBox16->Text = address;
	textBox14->Text = day;
	textBox13->Text = month;
	textBox7->Text = year;
	comboBox2->Text = bloodGroup;

	if(sNode->feeStatus == true)
		comboBox3->Text = "Paid";
	else
		comboBox3->Text = "Unpaid";

	if (sNode->gender == "Male")
		radioButton4->Checked = true;
	else
		radioButton3->Checked = true;

	student_status = true;
}
private: System::Void pictureBox28_Click(System::Object^ sender, System::EventArgs^ e) {
	add_new_student_panel->Visible = false;
	student_home_panel->Visible = false;
	add_new_teacher_panel->Visible = false;
	teacher_panel->Visible = false;
}
private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
	student_home_panel->Visible = false;
	add_new_teacher_panel->Visible = false;
	teacher_panel->Visible = false;
}
};
}