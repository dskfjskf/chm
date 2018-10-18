#pragma once
#include "metod.h"


namespace CLR_Test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  v2i;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  v;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  v2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vv2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  olp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  c1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  c2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  u;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ge;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label16;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::ComponentModel::IContainer^  components;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vv2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->olp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ge = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->x,
					this->v, this->v2, this->vv2, this->olp, this->h, this->c1, this->c2, this->u, this->ge
			});
			this->dataGridView1->Location = System::Drawing::Point(348, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(701, 224);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->Width = 34;
			// 
			// x
			// 
			this->x->HeaderText = L"xi";
			this->x->Name = L"x";
			this->x->Width = 39;
			// 
			// v
			// 
			this->v->HeaderText = L"vi";
			this->v->Name = L"v";
			this->v->Width = 40;
			// 
			// v2
			// 
			this->v2->HeaderText = L"v2i";
			this->v2->Name = L"v2";
			this->v2->Width = 46;
			// 
			// vv2
			// 
			this->vv2->HeaderText = L"vi-v2i";
			this->vv2->Name = L"vv2";
			this->vv2->Width = 57;
			// 
			// olp
			// 
			this->olp->HeaderText = L"ОЛП";
			this->olp->Name = L"olp";
			this->olp->Width = 56;
			// 
			// h
			// 
			this->h->HeaderText = L"hi";
			this->h->Name = L"h";
			this->h->Width = 40;
			// 
			// c1
			// 
			this->c1->HeaderText = L"C1";
			this->c1->Name = L"c1";
			this->c1->Width = 45;
			// 
			// c2
			// 
			this->c2->HeaderText = L"C2";
			this->c2->Name = L"c2";
			this->c2->Width = 45;
			// 
			// u
			// 
			this->u->HeaderText = L"ui";
			this->u->Name = L"u";
			this->u->Width = 40;
			// 
			// ge
			// 
			this->ge->HeaderText = L"|ui-vi|";
			this->ge->Name = L"ge";
			this->ge->Width = 55;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(140, 337);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Пуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(318, 195);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(273, 27);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(37, 21);
			this->textBox7->TabIndex = 9;
			this->textBox7->Visible = false;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(187, 159);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(37, 21);
			this->textBox6->TabIndex = 8;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(187, 132);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(37, 21);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L" ε:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(187, 80);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(37, 21);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 54);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(37, 21);
			this->textBox3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Конечная точка (b):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Макс. шагов (nmax):";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(230, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(37, 21);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(37, 21);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(6, 107);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBox1->Size = System::Drawing::Size(227, 19);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Контроль локальной погрешности";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Начальный шаг (h0):";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 30);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(166, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Начальные условия (x0,u0):";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 213);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(318, 118);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Задача";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(209, 54);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(37, 21);
			this->textBox8->TabIndex = 10;
			this->textBox8->Visible = false;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(186, 57);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(17, 15);
			this->label16->TabIndex = 13;
			this->label16->Text = L"A:";
			this->label16->Visible = false;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 15);
			this->label7->TabIndex = 12;
			this->label7->Text = L"u(0)=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 15);
			this->label6->TabIndex = 11;
			this->label6->Text = L"u\'=";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тестовая задача", L"Основная задача №1", L"Основная задача №2" });
			this->comboBox1->Location = System::Drawing::Point(6, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(166, 23);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 15);
			this->label8->TabIndex = 13;
			this->label8->Text = L"n=";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 57);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 15);
			this->label9->TabIndex = 14;
			this->label9->Text = L"b-xn=";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 15);
			this->label10->TabIndex = 15;
			this->label10->Text = L"max |ОЛП|=";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 165);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 15);
			this->label11->TabIndex = 16;
			this->label11->Text = L"max hi=";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 189);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 15);
			this->label12->TabIndex = 17;
			this->label12->Text = L"min hi=";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 209);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 15);
			this->label13->TabIndex = 18;
			this->label13->Text = L"max |ui-vi|=";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 114);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(173, 15);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Общее число удвоений шага:";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 140);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(168, 15);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Общее число деления шага:";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(12, 366);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(318, 237);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выходные данные";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(348, 242);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(386, 348);
			this->zedGraphControl1->TabIndex = 20;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(740, 270);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(309, 276);
			this->zedGraphControl2->TabIndex = 21;
			this->zedGraphControl2->Visible = false;
			this->zedGraphControl2->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl2_Load);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1061, 612);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {		
		
		int num=0;

		if (comboBox1->Text == "Тестовая задача")
			num = 0;
		else if (comboBox1->Text == "Основная задача №1")
			num = 1;
		else if (comboBox1->Text == "Основная задача №2")
			num = 2;		

		double x0 = Convert::ToDouble(textBox1->Text);
		double u0 = Convert::ToDouble(textBox2->Text);
		double b = Convert::ToDouble(textBox4->Text);
		double h = Convert::ToDouble(textBox3->Text);
		double x = x0;
		double v = u0, v2=u0;
	
		double z= 0;		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		double coeff = 0;			//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

		if (num == 2)		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		{
			z = Convert::ToDouble(textBox7->Text);
			coeff = Convert::ToDouble(textBox8->Text);
		}

		double eps = -1;
		if (checkBox1->Checked == true)
			eps = Convert::ToDouble(textBox5->Text);

		int nmax = Convert::ToInt64(textBox6->Text);	

		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;			//2222
		panel->CurveList->Clear();
		panel2->CurveList->Clear();					//22222
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();		//22222

		double xmin = x0;
		double xmax = b;

	//	metod a(x0, u0, h, eps, num);
		metod a(x0, u0, h, eps, num, z,coeff);			//!!!!!!!!!!!!!!!!!!!!!!!!!!

		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = a.getn();
		dataGridView1->Rows[0]->Cells[1]->Value = a.getx();
		dataGridView1->Rows[0]->Cells[2]->Value = a.getv();
		dataGridView1->Rows[0]->Cells[6]->Value = a.geth();
		
		f1_list->Add(a.getx(), a.getv());
		f3_list->Add(a.getz(), a.getv());			//22222

		if (num == 0)
		{
			dataGridView1->Rows[0]->Cells[9]->Value = a.getu();
			f2_list->Add(a.getx(), a.getu());			
		}

		for (int i = 1; i < nmax+1 && a.getx()<b; i++)
		{
			if (num==2) 
				a.calc3();		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			else a.calc();
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = a.getn();
			dataGridView1->Rows[i]->Cells[1]->Value = a.getx();
			dataGridView1->Rows[i]->Cells[2]->Value = a.getv();
			dataGridView1->Rows[i]->Cells[3]->Value = a.getv2();
			dataGridView1->Rows[i]->Cells[4]->Value = a.getv()- a.getv2();
			dataGridView1->Rows[i]->Cells[5]->Value = a.gete(); 
			dataGridView1->Rows[i]->Cells[6]->Value = a.geth();
			dataGridView1->Rows[i]->Cells[7]->Value = a.getc1();
			dataGridView1->Rows[i]->Cells[8]->Value = a.getc2();	
		
			f1_list->Add(a.getx(), a.getv());
			f3_list->Add(a.getz(), a.getv());			//22222

			if (num == 0)
			{
				dataGridView1->Rows[i]->Cells[9]->Value = a.getu();
				dataGridView1->Rows[i]->Cells[10]->Value = a.getge();
				f2_list->Add(a.getx(), a.getu());
			}
		}	

		LineItem Curve1 = panel->AddCurve("f(x)", f1_list, Color::Red, SymbolType::None);
		LineItem Curve3 = panel2->AddCurve("f(x)", f3_list, Color::Green, SymbolType::None);		//2222222222222222
		
		if (num == 0) 
			LineItem Curve2 = panel->AddCurve("u(x)", f2_list, Color::Blue, SymbolType::Plus);
			
		panel->XAxis->Scale->Min = x0;
		panel->XAxis->Scale->Max = a.getx();
		
		panel->YAxis->Scale->Min = u0;
		panel->YAxis->Scale->Max = a.getv();
		zedGraphControl1->AxisChange();
		
		zedGraphControl1->Invalidate();


		panel2->XAxis->Scale->Min = x0;				//2
		panel2->XAxis->Scale->Max = a.getz();

		panel2->YAxis->Scale->Min = u0;
		panel2->YAxis->Scale->Max = a.getv();
		zedGraphControl2->AxisChange();

		zedGraphControl2->Invalidate();					//2
	
		label8->Text = "n=" + a.getn();
		label9->Text = "b-xn=" + (b - Convert::ToDouble(dataGridView1->Rows[a.getn()]->Cells[1]->Value));
		label10->Text = "max|ОЛП|=" + a.getmaxe();
		label14->Text = "Общее число удвоений шага:" + a.getc2();
		label15->Text = "Общее число деления шага:" + a.getc1();
		label11->Text = "max hi=" + a.getmaxh() + "   при х=" + a.getxmaxh();
		label12->Text = "min hi=" + a.getminh() + "   при х=" + a.getxminh();
		label13->Text = "max |ui-vi|=" + a.getmaxge()+"   при х=" + a.getmaxxge();

	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
		if (comboBox1->Text == "Тестовая задача")
		{
			label6->Text = "u'=3u";
			label7->Text = "u(0)=u0";
			dataGridView1->Columns[10]->Visible = true;
			dataGridView1->Columns[9]->Visible = true;
			label13->Visible = true;
			textBox7->Visible = false;
			label1->Text = "Начальные условия (x0,u0):";
			label16->Visible = false;
			textBox8->Visible = false;
			zedGraphControl2->Visible = false;
		}
		else
		{
			dataGridView1->Columns[10]->Visible = false;
			dataGridView1->Columns[9]->Visible = false;
			label13->Visible = false;

			if (comboBox1->Text == "Основная задача №1")
			{
				label6->Text = "u'=u^2/(2x+x^2)+u-u^3sin(10x)";
				label7->Text = "u(0)=u0";
				textBox7->Visible = false;
				label1->Text = "Начальные условия (x0,u0):";
				label16->Visible = false;
				textBox8->Visible = false;
				zedGraphControl2->Visible = false;
			}
			else
			{
				label6->Text = "u''+A((u')^2+1)^(1/2)=0";
				label7->Text = "u(0)=u0;      u'(0)=u0'";
				label1->Text = "Начальные условия (x0,u0,u0'):";
				textBox7->Visible = true;
				label16->Visible = true;
				textBox8->Visible = true;
				zedGraphControl2->Visible = true;
			}
		}
	}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {	
	if (checkBox1->Checked == true)
		textBox5->ReadOnly = false;
	else 
		textBox5->ReadOnly = true;
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void zedGraphControl2_Load(System::Object^  sender, System::EventArgs^  e) {}
};
}
