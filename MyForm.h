#pragma once
#include "Globals.h"

namespace winformtest2resrat {

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
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ typeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ resolutionCalculatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ratioCalculatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cropCalculatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ratioGeneratorToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button8;












































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->typeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resolutionCalculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ratioCalculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cropCalculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ratioGeneratorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Gray;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->editToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(258, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->typeToolStripMenuItem });
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// typeToolStripMenuItem
			// 
			this->typeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->resolutionCalculatorToolStripMenuItem,
					this->ratioCalculatorToolStripMenuItem, this->cropCalculatorToolStripMenuItem, this->ratioGeneratorToolStripMenuItem
			});
			this->typeToolStripMenuItem->Name = L"typeToolStripMenuItem";
			this->typeToolStripMenuItem->Size = System::Drawing::Size(194, 26);
			this->typeToolStripMenuItem->Text = L"Calculator Type";
			this->typeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::typeToolStripMenuItem_Click);
			// 
			// resolutionCalculatorToolStripMenuItem
			// 
			this->resolutionCalculatorToolStripMenuItem->Name = L"resolutionCalculatorToolStripMenuItem";
			this->resolutionCalculatorToolStripMenuItem->Size = System::Drawing::Size(197, 26);
			this->resolutionCalculatorToolStripMenuItem->Text = L"Resolution";
			this->resolutionCalculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::resolutionCalculatorToolStripMenuItem_Click);
			// 
			// ratioCalculatorToolStripMenuItem
			// 
			this->ratioCalculatorToolStripMenuItem->Name = L"ratioCalculatorToolStripMenuItem";
			this->ratioCalculatorToolStripMenuItem->Size = System::Drawing::Size(197, 26);
			this->ratioCalculatorToolStripMenuItem->Text = L"Ratio";
			this->ratioCalculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ratioCalculatorToolStripMenuItem_Click);
			// 
			// cropCalculatorToolStripMenuItem
			// 
			this->cropCalculatorToolStripMenuItem->Name = L"cropCalculatorToolStripMenuItem";
			this->cropCalculatorToolStripMenuItem->Size = System::Drawing::Size(197, 26);
			this->cropCalculatorToolStripMenuItem->Text = L"Crop";
			this->cropCalculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cropCalculatorToolStripMenuItem_Click);
			// 
			// ratioGeneratorToolStripMenuItem
			// 
			this->ratioGeneratorToolStripMenuItem->Name = L"ratioGeneratorToolStripMenuItem";
			this->ratioGeneratorToolStripMenuItem->Size = System::Drawing::Size(197, 26);
			this->ratioGeneratorToolStripMenuItem->Text = L"Ratio Generator";
			this->ratioGeneratorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ratioGeneratorToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 22);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ratio:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(89, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 22);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Res Value:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(171, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Calculate!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->ForeColor = System::Drawing::Color::LawnGreen;
			this->richTextBox1->Location = System::Drawing::Point(13, 87);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(233, 152);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(59, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ratio Calculator";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(0, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(258, 279);
			this->panel1->TabIndex = 2;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(14, 245);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(233, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Clear";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(94, 31);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(71, 22);
			this->textBox6->TabIndex = 0;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 34);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 16);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Initial Res:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(94, 59);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(71, 22);
			this->textBox5->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 62);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 16);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Target Res:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(171, 44);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Calculate!";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->BackColor = System::Drawing::Color::Black;
			this->richTextBox4->ForeColor = System::Drawing::Color::LawnGreen;
			this->richTextBox4->Location = System::Drawing::Point(13, 87);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->Size = System::Drawing::Size(233, 152);
			this->richTextBox4->TabIndex = 5;
			this->richTextBox4->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(62, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 20);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Crop Calculator";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->richTextBox4);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Location = System::Drawing::Point(0, 28);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(258, 294);
			this->panel3->TabIndex = 8;
			this->panel3->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(233, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Clear";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(69, 31);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(96, 22);
			this->textBox9->TabIndex = 0;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(10, 34);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 16);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Ratio:";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(69, 59);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(96, 22);
			this->textBox8->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 62);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 16);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Stop At:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(170, 30);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Calculate!";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// richTextBox6
			// 
			this->richTextBox6->BackColor = System::Drawing::Color::Black;
			this->richTextBox6->ForeColor = System::Drawing::Color::LawnGreen;
			this->richTextBox6->Location = System::Drawing::Point(13, 87);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->ReadOnly = true;
			this->richTextBox6->Size = System::Drawing::Size(233, 155);
			this->richTextBox6->TabIndex = 5;
			this->richTextBox6->Text = L"";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(58, 5);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(143, 20);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Ratio Generator";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->checkBox1);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->richTextBox6);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->textBox8);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->textBox9);
			this->panel5->Location = System::Drawing::Point(0, 28);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(258, 279);
			this->panel5->TabIndex = 9;
			this->panel5->Visible = false;
			this->panel5->Click += gcnew System::EventHandler(this, &MyForm::panel5_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(14, 248);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(233, 28);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Clear";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(171, 61);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(64, 20);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"X or Y";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(52, 30);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(113, 22);
			this->textBox3->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Res:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(171, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Calculate!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::Black;
			this->richTextBox3->ForeColor = System::Drawing::Color::LawnGreen;
			this->richTextBox3->Location = System::Drawing::Point(13, 59);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(233, 183);
			this->richTextBox3->TabIndex = 5;
			this->richTextBox3->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Resolution Calculator";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->richTextBox3);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Location = System::Drawing::Point(0, 28);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(258, 279);
			this->panel4->TabIndex = 7;
			this->panel4->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(232, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(258, 311);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Tools";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void typeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox3->Text = StringToText(TextToString(richTextBox3->Text) + ResCalc(TextToString(textBox3->Text)));
	}
	private: System::Void panel5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox6->Text = StringToText(TextToString(richTextBox6->Text) + RatGen(TextToString(textBox9->Text), Convert::ToInt32(textBox8->Text), checkBox1->Checked));
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox4->Text = StringToText(TextToString(richTextBox4->Text) + CropCalc(TextToString(textBox5->Text), TextToString(textBox6->Text)));
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text = StringToText(TextToString(richTextBox1->Text) + RatCalc(TextToString(textBox1->Text), Convert::ToDouble(textBox2->Text)));
	}
	private: System::Void resolutionCalculatorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Visible = true;
		panel1->Visible = false;
		panel5->Visible = false;
		panel3->Visible = false;
	}
	private: System::Void ratioCalculatorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Visible = false;
		panel1->Visible = true;
		panel5->Visible = false;
		panel3->Visible = false;
	}
	private: System::Void ratioGeneratorToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		panel4->Visible = false;
		panel1->Visible = false;
		panel5->Visible = true;
		panel3->Visible = false;
	}
	private: System::Void cropCalculatorToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		panel4->Visible = false;
		panel1->Visible = false;
		panel5->Visible = false;
		panel3->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox3->Text = StringToText("");
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox6->Text = StringToText("");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox4->Text = StringToText("");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text = StringToText("");
}
};
}