#pragma once

#include <string>
#include <iostream>
#include <fstream> 
#include <windows.h>
#include <cstdlib> 

#pragma comment (lib, "shell32.lib") 


namespace LEMananger {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Diagnostics;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;

	using namespace std;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label8;

	protected:

	private:
		System::ComponentModel::Container ^components;

//- Стандартный код (можно свернуть)
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->button1->Location = System::Drawing::Point(12, 413);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open Radiant";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(741, 43);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->pictureBox2->Location = System::Drawing::Point(249, 446);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(504, 37);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(669, 452);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"by labrob2013\r\nFor LifeEngine";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(32, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"LifeEngine Tools";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->pictureBox3->Location = System::Drawing::Point(12, 54);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(231, 429);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->ForeColor = System::Drawing::Color::Gainsboro;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(20, 87);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(216, 273);
			this->listBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->button2->Location = System::Drawing::Point(12, 448);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Checked compile";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label3->ForeColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(22, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Maps list";
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->button4->Location = System::Drawing::Point(106, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 20);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Open directory";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Gainsboro;
			this->label4->Location = System::Drawing::Point(152, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(592, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"...";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Gainsboro;
			this->label5->Location = System::Drawing::Point(564, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 15);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Working directory:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::Color::Gainsboro;
			this->checkBox1->Location = System::Drawing::Point(265, 177);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(52, 17);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"-meta";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label6->ForeColor = System::Drawing::Color::Gainsboro;
			this->label6->Location = System::Drawing::Point(262, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Select the arguments to compile";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoCheck = false;
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->ForeColor = System::Drawing::Color::Gainsboro;
			this->checkBox2->Location = System::Drawing::Point(323, 177);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(46, 17);
			this->checkBox2->TabIndex = 15;
			this->checkBox2->Text = L"-bsp";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->ForeColor = System::Drawing::Color::Gainsboro;
			this->checkBox3->Location = System::Drawing::Point(378, 177);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(42, 17);
			this->checkBox3->TabIndex = 16;
			this->checkBox3->Text = L"-vis";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->ForeColor = System::Drawing::Color::Gainsboro;
			this->checkBox4->Location = System::Drawing::Point(426, 177);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(48, 17);
			this->checkBox4->TabIndex = 17;
			this->checkBox4->Text = L"-light";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->ForeColor = System::Drawing::Color::Gainsboro;
			this->checkBox5->Location = System::Drawing::Point(480, 177);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(46, 17);
			this->checkBox5->TabIndex = 18;
			this->checkBox5->Text = L"-fast";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->ForeColor = System::Drawing::Color::Gainsboro;
			this->checkBox6->Location = System::Drawing::Point(532, 177);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(48, 17);
			this->checkBox6->TabIndex = 19;
			this->checkBox6->Text = L"-filter";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->ForeColor = System::Drawing::Color::Gainsboro;
			this->checkBox7->Location = System::Drawing::Point(586, 177);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(64, 17);
			this->checkBox7->TabIndex = 20;
			this->checkBox7->Text = L"-saveprt";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::Gainsboro;
			this->textBox1->Location = System::Drawing::Point(272, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(461, 13);
			this->textBox1->TabIndex = 21;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->pictureBox4->Location = System::Drawing::Point(265, 135);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(475, 27);
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->ForeColor = System::Drawing::Color::Gainsboro;
			this->textBox2->Location = System::Drawing::Point(272, 251);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(454, 13);
			this->textBox2->TabIndex = 23;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->pictureBox5->Location = System::Drawing::Point(265, 244);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(468, 27);
			this->pictureBox5->TabIndex = 24;
			this->pictureBox5->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label7->ForeColor = System::Drawing::Color::Gainsboro;
			this->label7->Location = System::Drawing::Point(262, 217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(160, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Select the arguments to run map";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->ForeColor = System::Drawing::Color::Gainsboro;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"- ALL", L"[Normal Mode]", L"[Fast mode]", L"[Final mode]",
					L"- Single", L"[BSP -meta]  —> Single BSP", L"[BSP -vis]  —> Single VIS", L"[BSP -vis -fast]  —> Single fast VIS", L"[BSP -light -fast -super 2 -filter -bounce 8]  —> lightmap in good quality",
					L"[BSP -light -fast -super 2]"
			});
			this->comboBox1->Location = System::Drawing::Point(265, 106);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(475, 21);
			this->comboBox1->TabIndex = 26;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->label8->ForeColor = System::Drawing::Color::Gainsboro;
			this->label8->Location = System::Drawing::Point(253, 451);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(410, 29);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Состояние:\r\nГотово!";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(765, 495);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"LE Mananger";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: Void Form1_Load(Object^  sender, EventArgs^  e) {
		listBox1->Items->Clear();

		//- Назначаем пресет для компиляции карт
		comboBox1->SelectedIndex = 1;

		//- Ищем файлы из папки Maps
		WIN32_FIND_DATA wfd;
		HANDLE const hFind = FindFirstFileW(L"../maps/*", &wfd);

		//- Поиск и сортировка в лист
		if (INVALID_HANDLE_VALUE != hFind)
		{
			do
			{
				listBox1->Items->Add(String(wfd.cFileName).ToString());

			} while (NULL != FindNextFileW(hFind, &wfd));

			FindClose(hFind);

			//- Удаляем лишние файлы которые формата не *.map
			for (int i = 0; i < listBox1->Items->Count; i++)
			{
				if (listBox1->Items->Count > 2)
				{
					//- Удаляем не нужные точти
					listBox1->Items->Remove(".."); listBox1->Items->Remove(".");

					//- Проверяем соответсвие формата *.map
					string str = SystemToStl(listBox1->Items[i]->ToString());
					string format = str.erase(0, str.find_last_of('.') + 1);

					if (format != "map")
						listBox1->Items->RemoveAt(i);
				}
			}
		}

		string tmp_le = getPathDirectory("configs/path_lifeengine.str");

		if (tmp_le.empty())
		{
			label8->Text = "Status:\nError! You made a mistake with the program's paths restart the file path.exe!";
			return;
		}

		label4->Text = gcnew String(tmp_le.c_str());
	}


	//- Нажатие кнопки Open Radiant
	private: Void button1_Click(Object^  sender, EventArgs^  e) {
		
		string tmp_le = getPathDirectory("configs/path_radiant.str");

		if (tmp_le.empty())
		{
			label8->Text = "Status:\nError! You made a mistake with the program's paths restart the file path.exe!";
			return;
		}
		tmp_le = tmp_le + "\\radiant.exe";
		system(tmp_le.c_str());
	}

	//- Перевод из String в string
	string SystemToStl(String ^s)
	{
		using namespace Runtime::InteropServices;
		const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		return string(ptr);
	}

	//- Для перевода из string в LPCWSTR
	wstring s2ws(const string& s)
	{
		int len, slength = (int)s.length() + 1;
		len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
		wchar_t* buf = new wchar_t[len];
		MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
		wstring r(buf);

		delete[] buf;
		return r;
	}

	//- Открываем файл и получаем путь
	string getPathDirectory(string filedir)
	{
		string lineFile; ifstream myfile;
		myfile.open(filedir);

		if (!myfile.is_open())
			return "";

		getline(myfile, lineFile );

		return lineFile;
	}

	//- Нажатие кнопки Open Directory
	private: Void button4_Click(Object^  sender, EventArgs^  e) {
		
		label4->Text = String(getPathDirectory("configs/path_maps.str").c_str()).ToString();

		wstring stmp = s2ws(getPathDirectory("configs/path_maps.str").c_str());
		LPCWSTR a = stmp.c_str();

		ShellExecute(NULL, L"open", L"explorer.exe", a, NULL, SW_SHOWDEFAULT);
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		/*
		  //
		    Режимы
		  //
			0 - ALL
			1 [Normal Mode]
			2 [Fast mode]
			3 [Final mode]
			4 - Single
			5 [BSP -meta]  —> Single BSP
			6 [BSP -vis]  —> Single VIS
			7 [BSP -vis -fast]  —> Single fast VIS
			8 [BSP -light -fast -super 2 -filter -bounce 8]  —> lightmap in good quality
			9 [BSP -light -fast -super 2]		
		  //

		  //
		    Компоненты для понимания
		  //
		    checkBox1 -meta
			checkBox2 -bsp
			checkBox3 -vis
			checkBox4 -light
			checkBox5 -fast
			checkBox6 -filter
			checkBox7 -saveprt
		  //
		*/
		
		//- Уходим от ошибок
		if (comboBox1->SelectedIndex == 0)
			comboBox1->SelectedIndex = 1;

		if (comboBox1->SelectedIndex == 4)
			comboBox1->SelectedIndex = 5;

		//- Выделяем компоненты от пресетов
		if (comboBox1->SelectedIndex == 1)
		{
			textBox1->Text = "";
			checkBox1->Checked = true;
			checkBox3->Checked = true;
			checkBox4->Checked = true;

			checkBox5->Checked = false;
			checkBox6->Checked = false;
			checkBox7->Checked = false;
		}
		if (comboBox1->SelectedIndex == 2)
		{
			textBox1->Text = "-super 2";
			checkBox1->Checked = true;
			checkBox3->Checked = true;
			checkBox4->Checked = true;
			checkBox5->Checked = true;

			checkBox6->Checked = false;
			checkBox7->Checked = false;
		}
		if (comboBox1->SelectedIndex == 3)
		{
			textBox1->Text = "-super 2 -bounce 8";
			checkBox1->Checked = true;
			checkBox3->Checked = true;
			checkBox4->Checked = true;
			checkBox5->Checked = true;

			checkBox6->Checked = true;
			checkBox7->Checked = false;
		}

		if (comboBox1->SelectedIndex == 5)
		{
			textBox1->Text = "";
			checkBox1->Checked = true;
			checkBox3->Checked = false;
			checkBox4->Checked = false;
			checkBox5->Checked = false;
			checkBox6->Checked = false;
			checkBox7->Checked = false;
		}
		if (comboBox1->SelectedIndex == 6)
		{
			textBox1->Text = "";
			checkBox1->Checked = false;
			checkBox3->Checked = true;
			checkBox4->Checked = false;
			checkBox5->Checked = false;
			checkBox6->Checked = false;
			checkBox7->Checked = false;
		}
		if (comboBox1->SelectedIndex == 7)
		{
			textBox1->Text = "";
			checkBox1->Checked = false;
			checkBox3->Checked = true;
			checkBox4->Checked = false;
			checkBox5->Checked = true;
			checkBox6->Checked = false;
			checkBox7->Checked = false;
		}
		if (comboBox1->SelectedIndex == 8)
		{
			textBox1->Text = "-super 2 -bounce 8";
			checkBox1->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = true;
			checkBox5->Checked = true;
			checkBox6->Checked = true;
			checkBox7->Checked = false;
		}
		if (comboBox1->SelectedIndex == 9)
		{
			textBox1->Text = "-super 2";
			checkBox1->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = true;
			checkBox5->Checked = true;
			checkBox6->Checked = false;
			checkBox7->Checked = false;
		}
	}	

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//- Компиляция карты

		//- Проверяем сколько элементов в списке
		if (listBox1->Items->Count >= 0)
		{
			//- Выводим ошибку если не выделен элемент
			if (listBox1->SelectedIndex == -1)
				label8->Text = "Status:\nError! Select a map to compile from the list!";


			string tmp = getPathDirectory("configs/path_radiant.str");
			string tmp_map = getPathDirectory("configs/path_maps.str");
			string tmp_le = getPathDirectory("configs/path_lifeengine.str");

			if (tmp.empty() && tmp_map.empty() && tmp_le.empty())
			{
				label8->Text = "Status:\nError! You made a mistake with the program's paths restart the file path.exe!";
				return;
			}

			String^ tmp2 = gcnew String(tmp.c_str());
			tmp2 += "\\q3map2.exe";

			//- Проверяем на существование q3map2
			ifstream File(SystemToStl(tmp2), ios::in | ios::_Nocreate );

			if (!File.is_open())
			{
				label8->Text = "Status:\nError! there is no file \"q3map2.exe\" in the folder radiant!";
				return;
			}

			Process^ myProcess = gcnew Process;


			//- Проверяем на отрицательный результат
			if (listBox1->SelectedIndex != -1)
			{
				String^ file_mapname = listBox1->GetItemText(listBox1->SelectedItem);

				//- Копируем карты для компиляции
				system("precomp.exe");

				myProcess->StartInfo->FileName = tmp2;
				myProcess->StartInfo->WorkingDirectory = gcnew String(tmp_le.c_str());

				//- Подсчитываем аргументы
				String^ argc = "bsp -fs_basepath \"" + 
					gcnew String(tmp_le.c_str()) + "\"";

				if (textBox1->Text != "") argc += textBox1->Text + " ";

				if (checkBox1->Checked) argc += "-meta ";
				if (checkBox3->Checked) argc += "-vis ";
				if (checkBox4->Checked) argc += "-light ";
				if (checkBox5->Checked) argc += "-fast ";
				if (checkBox6->Checked) argc += "-filter ";
				if (checkBox7->Checked) argc += "-saveprt ";

				argc += "\"" + gcnew String(tmp_le.c_str()) + "\\" + file_mapname + "\"";

				//- Задаем аргументы
				myProcess->StartInfo->Arguments = argc;
				myProcess->StartInfo->UseShellExecute = false;

				label8->Text = "Status:\nMapping is in progress " + file_mapname + "!";
				myProcess->Start();

				myProcess->WaitForExit();

				//- Копируем карты в папку с картами в движке
				system("process.exe");

				label8->Text = "Status:\nDone! ";
			}		
		}
	}
};
}
