#pragma once
#include "Level1.h"

namespace PlotProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Graphic
	/// </summary>
	public ref class Graphic : public System::Windows::Forms::Form
	{
	public:
		Graphic(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Graphic()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ tBoxExp;
	private: System::Windows::Forms::TextBox^ tBoxStart;
	private: System::Windows::Forms::TextBox^ tBoxEnd;
	private: System::Windows::Forms::Button^ bMake;

























	private: System::Windows::Forms::Label^ labX;
	private: System::Windows::Forms::Label^ labY;
	private: System::Windows::Forms::Label^ labExp;
	private: System::Windows::Forms::Label^ labA;
	private: System::Windows::Forms::Label^ labB;
	private: System::Windows::Forms::TabControl^ tControl;
	private: System::Windows::Forms::TabPage^ tGraphic;
	private: System::Windows::Forms::TabPage^ tHistogram;


	private: System::Windows::Forms::Button^ bNum1;
	private: System::Windows::Forms::Label^ labNum1;
	private: System::Windows::Forms::TextBox^ tBoxNum1;
	private: System::Windows::Forms::ListBox^ lBox1;
	private: System::Windows::Forms::Button^ bEnter1;



























	private: System::Windows::Forms::TabPage^ tDiagram;







	private: System::Windows::Forms::PictureBox^ Diagram;
	private: System::Windows::Forms::Button^ bNum2;
	private: System::Windows::Forms::ListBox^ lBox2;
	private: System::Windows::Forms::Button^ bEnter2;
	private: System::Windows::Forms::TextBox^ tBoxNum2;
	private: System::Windows::Forms::Label^ lab2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::PictureBox^ Histogram;
private: System::Windows::Forms::TableLayoutPanel^ tlpY;
private: System::Windows::Forms::Label^ labY9;
private: System::Windows::Forms::Label^ labY8;
private: System::Windows::Forms::Label^ labY7;
private: System::Windows::Forms::Label^ labY6;
private: System::Windows::Forms::Label^ labY5;
private: System::Windows::Forms::Label^ labY4;
private: System::Windows::Forms::Label^ labY3;
private: System::Windows::Forms::Label^ labY2;
private: System::Windows::Forms::Label^ labY1;
private: System::Windows::Forms::Label^ labY0;
private: System::Windows::Forms::TableLayoutPanel^ tlpX;
private: System::Windows::Forms::Label^ labX9;
private: System::Windows::Forms::Label^ labX8;
private: System::Windows::Forms::Label^ labX7;
private: System::Windows::Forms::Label^ labX6;
private: System::Windows::Forms::Label^ labX5;
private: System::Windows::Forms::Label^ labX4;
private: System::Windows::Forms::Label^ labX3;
private: System::Windows::Forms::Label^ labX2;
private: System::Windows::Forms::Label^ labX1;
private: System::Windows::Forms::Label^ labX0;
private: System::Windows::Forms::PictureBox^ pBox;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tBoxExp = (gcnew System::Windows::Forms::TextBox());
			this->tBoxStart = (gcnew System::Windows::Forms::TextBox());
			this->tBoxEnd = (gcnew System::Windows::Forms::TextBox());
			this->bMake = (gcnew System::Windows::Forms::Button());
			this->labX = (gcnew System::Windows::Forms::Label());
			this->labY = (gcnew System::Windows::Forms::Label());
			this->labExp = (gcnew System::Windows::Forms::Label());
			this->labA = (gcnew System::Windows::Forms::Label());
			this->labB = (gcnew System::Windows::Forms::Label());
			this->tControl = (gcnew System::Windows::Forms::TabControl());
			this->tGraphic = (gcnew System::Windows::Forms::TabPage());
			this->tlpY = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labY9 = (gcnew System::Windows::Forms::Label());
			this->labY8 = (gcnew System::Windows::Forms::Label());
			this->labY7 = (gcnew System::Windows::Forms::Label());
			this->labY6 = (gcnew System::Windows::Forms::Label());
			this->labY5 = (gcnew System::Windows::Forms::Label());
			this->labY4 = (gcnew System::Windows::Forms::Label());
			this->labY3 = (gcnew System::Windows::Forms::Label());
			this->labY2 = (gcnew System::Windows::Forms::Label());
			this->labY1 = (gcnew System::Windows::Forms::Label());
			this->labY0 = (gcnew System::Windows::Forms::Label());
			this->tlpX = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labX9 = (gcnew System::Windows::Forms::Label());
			this->labX8 = (gcnew System::Windows::Forms::Label());
			this->labX7 = (gcnew System::Windows::Forms::Label());
			this->labX6 = (gcnew System::Windows::Forms::Label());
			this->labX5 = (gcnew System::Windows::Forms::Label());
			this->labX4 = (gcnew System::Windows::Forms::Label());
			this->labX3 = (gcnew System::Windows::Forms::Label());
			this->labX2 = (gcnew System::Windows::Forms::Label());
			this->labX1 = (gcnew System::Windows::Forms::Label());
			this->labX0 = (gcnew System::Windows::Forms::Label());
			this->pBox = (gcnew System::Windows::Forms::PictureBox());
			this->tHistogram = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Histogram = (gcnew System::Windows::Forms::PictureBox());
			this->bEnter1 = (gcnew System::Windows::Forms::Button());
			this->bNum1 = (gcnew System::Windows::Forms::Button());
			this->labNum1 = (gcnew System::Windows::Forms::Label());
			this->tBoxNum1 = (gcnew System::Windows::Forms::TextBox());
			this->lBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tDiagram = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Diagram = (gcnew System::Windows::Forms::PictureBox());
			this->bNum2 = (gcnew System::Windows::Forms::Button());
			this->lBox2 = (gcnew System::Windows::Forms::ListBox());
			this->bEnter2 = (gcnew System::Windows::Forms::Button());
			this->tBoxNum2 = (gcnew System::Windows::Forms::TextBox());
			this->lab2 = (gcnew System::Windows::Forms::Label());
			this->tControl->SuspendLayout();
			this->tGraphic->SuspendLayout();
			this->tlpY->SuspendLayout();
			this->tlpX->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBox))->BeginInit();
			this->tHistogram->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Histogram))->BeginInit();
			this->tDiagram->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Diagram))->BeginInit();
			this->SuspendLayout();
			// 
			// tBoxExp
			// 
			this->tBoxExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBoxExp->Location = System::Drawing::Point(40, 71);
			this->tBoxExp->Name = L"tBoxExp";
			this->tBoxExp->Size = System::Drawing::Size(524, 27);
			this->tBoxExp->TabIndex = 1;
			// 
			// tBoxStart
			// 
			this->tBoxStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBoxStart->Location = System::Drawing::Point(40, 161);
			this->tBoxStart->Name = L"tBoxStart";
			this->tBoxStart->Size = System::Drawing::Size(140, 24);
			this->tBoxStart->TabIndex = 2;
			// 
			// tBoxEnd
			// 
			this->tBoxEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBoxEnd->Location = System::Drawing::Point(248, 161);
			this->tBoxEnd->Name = L"tBoxEnd";
			this->tBoxEnd->Size = System::Drawing::Size(146, 24);
			this->tBoxEnd->TabIndex = 3;
			// 
			// bMake
			// 
			this->bMake->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bMake->Location = System::Drawing::Point(40, 225);
			this->bMake->Name = L"bMake";
			this->bMake->Size = System::Drawing::Size(242, 80);
			this->bMake->TabIndex = 4;
			this->bMake->Text = L"Построить";
			this->bMake->UseVisualStyleBackColor = true;
			this->bMake->Click += gcnew System::EventHandler(this, &Graphic::bMake_Click);
			// 
			// labX
			// 
			this->labX->AutoSize = true;
			this->labX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX->Location = System::Drawing::Point(442, 50);
			this->labX->Name = L"labX";
			this->labX->Size = System::Drawing::Size(0, 22);
			this->labX->TabIndex = 10;
			// 
			// labY
			// 
			this->labY->AutoSize = true;
			this->labY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labY->Location = System::Drawing::Point(780, 334);
			this->labY->Name = L"labY";
			this->labY->Size = System::Drawing::Size(0, 22);
			this->labY->TabIndex = 11;
			// 
			// labExp
			// 
			this->labExp->AutoSize = true;
			this->labExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labExp->Location = System::Drawing::Point(41, 37);
			this->labExp->Name = L"labExp";
			this->labExp->Size = System::Drawing::Size(117, 20);
			this->labExp->TabIndex = 12;
			this->labExp->Text = L"Функция f(x):";
			// 
			// labA
			// 
			this->labA->AutoSize = true;
			this->labA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labA->Location = System::Drawing::Point(41, 126);
			this->labA->Name = L"labA";
			this->labA->Size = System::Drawing::Size(139, 20);
			this->labA->TabIndex = 13;
			this->labA->Text = L"Левая граница:";
			this->labA->Click += gcnew System::EventHandler(this, &Graphic::labA_Click);
			// 
			// labB
			// 
			this->labB->AutoSize = true;
			this->labB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labB->Location = System::Drawing::Point(244, 127);
			this->labB->Name = L"labB";
			this->labB->Size = System::Drawing::Size(150, 20);
			this->labB->TabIndex = 14;
			this->labB->Text = L"Правая граница:";
			// 
			// tControl
			// 
			this->tControl->Controls->Add(this->tGraphic);
			this->tControl->Controls->Add(this->tHistogram);
			this->tControl->Controls->Add(this->tDiagram);
			this->tControl->Location = System::Drawing::Point(2, -1);
			this->tControl->Name = L"tControl";
			this->tControl->SelectedIndex = 0;
			this->tControl->Size = System::Drawing::Size(1377, 593);
			this->tControl->TabIndex = 15;
			// 
			// tGraphic
			// 
			this->tGraphic->Controls->Add(this->tlpY);
			this->tGraphic->Controls->Add(this->tlpX);
			this->tGraphic->Controls->Add(this->pBox);
			this->tGraphic->Controls->Add(this->labB);
			this->tGraphic->Controls->Add(this->tBoxExp);
			this->tGraphic->Controls->Add(this->labA);
			this->tGraphic->Controls->Add(this->tBoxEnd);
			this->tGraphic->Controls->Add(this->labExp);
			this->tGraphic->Controls->Add(this->bMake);
			this->tGraphic->Controls->Add(this->tBoxStart);
			this->tGraphic->Location = System::Drawing::Point(4, 25);
			this->tGraphic->Name = L"tGraphic";
			this->tGraphic->Padding = System::Windows::Forms::Padding(3);
			this->tGraphic->Size = System::Drawing::Size(1369, 564);
			this->tGraphic->TabIndex = 0;
			this->tGraphic->Text = L"График";
			this->tGraphic->UseVisualStyleBackColor = true;
			// 
			// tlpY
			// 
			this->tlpY->ColumnCount = 1;
			this->tlpY->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlpY->Controls->Add(this->labY9, 0, 9);
			this->tlpY->Controls->Add(this->labY8, 0, 8);
			this->tlpY->Controls->Add(this->labY7, 0, 7);
			this->tlpY->Controls->Add(this->labY6, 0, 6);
			this->tlpY->Controls->Add(this->labY5, 0, 5);
			this->tlpY->Controls->Add(this->labY4, 0, 4);
			this->tlpY->Controls->Add(this->labY3, 0, 3);
			this->tlpY->Controls->Add(this->labY2, 0, 2);
			this->tlpY->Controls->Add(this->labY1, 0, 1);
			this->tlpY->Controls->Add(this->labY0, 0, 0);
			this->tlpY->Location = System::Drawing::Point(596, 35);
			this->tlpY->Name = L"tlpY";
			this->tlpY->RowCount = 10;
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpY->Size = System::Drawing::Size(74, 458);
			this->tlpY->TabIndex = 17;
			// 
			// labY9
			// 
			this->labY9->AutoSize = true;
			this->labY9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY9->Location = System::Drawing::Point(3, 405);
			this->labY9->Name = L"labY9";
			this->labY9->Size = System::Drawing::Size(68, 53);
			this->labY9->TabIndex = 19;
			this->labY9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY8
			// 
			this->labY8->AutoSize = true;
			this->labY8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY8->Location = System::Drawing::Point(3, 360);
			this->labY8->Name = L"labY8";
			this->labY8->Size = System::Drawing::Size(68, 45);
			this->labY8->TabIndex = 18;
			this->labY8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY7
			// 
			this->labY7->AutoSize = true;
			this->labY7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY7->Location = System::Drawing::Point(3, 315);
			this->labY7->Name = L"labY7";
			this->labY7->Size = System::Drawing::Size(68, 45);
			this->labY7->TabIndex = 17;
			this->labY7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY6
			// 
			this->labY6->AutoSize = true;
			this->labY6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY6->Location = System::Drawing::Point(3, 270);
			this->labY6->Name = L"labY6";
			this->labY6->Size = System::Drawing::Size(68, 45);
			this->labY6->TabIndex = 16;
			this->labY6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY5
			// 
			this->labY5->AutoSize = true;
			this->labY5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY5->Location = System::Drawing::Point(3, 225);
			this->labY5->Name = L"labY5";
			this->labY5->Size = System::Drawing::Size(68, 45);
			this->labY5->TabIndex = 15;
			this->labY5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY4
			// 
			this->labY4->AutoSize = true;
			this->labY4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY4->Location = System::Drawing::Point(3, 180);
			this->labY4->Name = L"labY4";
			this->labY4->Size = System::Drawing::Size(68, 45);
			this->labY4->TabIndex = 14;
			this->labY4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY3
			// 
			this->labY3->AutoSize = true;
			this->labY3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY3->Location = System::Drawing::Point(3, 135);
			this->labY3->Name = L"labY3";
			this->labY3->Size = System::Drawing::Size(68, 45);
			this->labY3->TabIndex = 13;
			this->labY3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY2
			// 
			this->labY2->AutoSize = true;
			this->labY2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY2->Location = System::Drawing::Point(3, 90);
			this->labY2->Name = L"labY2";
			this->labY2->Size = System::Drawing::Size(68, 45);
			this->labY2->TabIndex = 12;
			this->labY2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY1
			// 
			this->labY1->AutoSize = true;
			this->labY1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY1->Location = System::Drawing::Point(3, 45);
			this->labY1->Name = L"labY1";
			this->labY1->Size = System::Drawing::Size(68, 45);
			this->labY1->TabIndex = 11;
			this->labY1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labY0
			// 
			this->labY0->AutoSize = true;
			this->labY0->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labY0->Location = System::Drawing::Point(3, 0);
			this->labY0->Name = L"labY0";
			this->labY0->Size = System::Drawing::Size(68, 45);
			this->labY0->TabIndex = 10;
			this->labY0->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tlpX
			// 
			this->tlpX->ColumnCount = 10;
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tlpX->Controls->Add(this->labX9, 9, 0);
			this->tlpX->Controls->Add(this->labX8, 8, 0);
			this->tlpX->Controls->Add(this->labX7, 7, 0);
			this->tlpX->Controls->Add(this->labX6, 6, 0);
			this->tlpX->Controls->Add(this->labX5, 5, 0);
			this->tlpX->Controls->Add(this->labX4, 4, 0);
			this->tlpX->Controls->Add(this->labX3, 3, 0);
			this->tlpX->Controls->Add(this->labX2, 2, 0);
			this->tlpX->Controls->Add(this->labX1, 1, 0);
			this->tlpX->Controls->Add(this->labX0, 0, 0);
			this->tlpX->Location = System::Drawing::Point(640, 496);
			this->tlpX->Name = L"tlpX";
			this->tlpX->RowCount = 1;
			this->tlpX->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tlpX->Size = System::Drawing::Size(707, 43);
			this->tlpX->TabIndex = 16;
			// 
			// labX9
			// 
			this->labX9->AutoSize = true;
			this->labX9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX9->Location = System::Drawing::Point(633, 0);
			this->labX9->Name = L"labX9";
			this->labX9->Size = System::Drawing::Size(71, 43);
			this->labX9->TabIndex = 9;
			this->labX9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX8
			// 
			this->labX8->AutoSize = true;
			this->labX8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX8->Location = System::Drawing::Point(563, 0);
			this->labX8->Name = L"labX8";
			this->labX8->Size = System::Drawing::Size(64, 43);
			this->labX8->TabIndex = 8;
			this->labX8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX7
			// 
			this->labX7->AutoSize = true;
			this->labX7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX7->Location = System::Drawing::Point(493, 0);
			this->labX7->Name = L"labX7";
			this->labX7->Size = System::Drawing::Size(64, 43);
			this->labX7->TabIndex = 7;
			this->labX7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX6
			// 
			this->labX6->AutoSize = true;
			this->labX6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX6->Location = System::Drawing::Point(423, 0);
			this->labX6->Name = L"labX6";
			this->labX6->Size = System::Drawing::Size(64, 43);
			this->labX6->TabIndex = 6;
			this->labX6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX5
			// 
			this->labX5->AutoSize = true;
			this->labX5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX5->Location = System::Drawing::Point(353, 0);
			this->labX5->Name = L"labX5";
			this->labX5->Size = System::Drawing::Size(64, 43);
			this->labX5->TabIndex = 5;
			this->labX5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX4
			// 
			this->labX4->AutoSize = true;
			this->labX4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX4->Location = System::Drawing::Point(283, 0);
			this->labX4->Name = L"labX4";
			this->labX4->Size = System::Drawing::Size(64, 43);
			this->labX4->TabIndex = 4;
			this->labX4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX3
			// 
			this->labX3->AutoSize = true;
			this->labX3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX3->Location = System::Drawing::Point(213, 0);
			this->labX3->Name = L"labX3";
			this->labX3->Size = System::Drawing::Size(64, 43);
			this->labX3->TabIndex = 3;
			this->labX3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX2
			// 
			this->labX2->AutoSize = true;
			this->labX2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX2->Location = System::Drawing::Point(143, 0);
			this->labX2->Name = L"labX2";
			this->labX2->Size = System::Drawing::Size(64, 43);
			this->labX2->TabIndex = 2;
			this->labX2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX1
			// 
			this->labX1->AutoSize = true;
			this->labX1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX1->Location = System::Drawing::Point(73, 0);
			this->labX1->Name = L"labX1";
			this->labX1->Size = System::Drawing::Size(64, 43);
			this->labX1->TabIndex = 1;
			this->labX1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labX0
			// 
			this->labX0->AutoSize = true;
			this->labX0->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labX0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labX0->Location = System::Drawing::Point(3, 0);
			this->labX0->Name = L"labX0";
			this->labX0->Size = System::Drawing::Size(64, 43);
			this->labX0->TabIndex = 0;
			this->labX0->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pBox
			// 
			this->pBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pBox->Location = System::Drawing::Point(675, 55);
			this->pBox->Name = L"pBox";
			this->pBox->Size = System::Drawing::Size(665, 435);
			this->pBox->TabIndex = 15;
			this->pBox->TabStop = false;
			// 
			// tHistogram
			// 
			this->tHistogram->Controls->Add(this->button2);
			this->tHistogram->Controls->Add(this->tableLayoutPanel1);
			this->tHistogram->Controls->Add(this->Histogram);
			this->tHistogram->Controls->Add(this->bEnter1);
			this->tHistogram->Controls->Add(this->bNum1);
			this->tHistogram->Controls->Add(this->labNum1);
			this->tHistogram->Controls->Add(this->tBoxNum1);
			this->tHistogram->Controls->Add(this->lBox1);
			this->tHistogram->Location = System::Drawing::Point(4, 25);
			this->tHistogram->Name = L"tHistogram";
			this->tHistogram->Padding = System::Windows::Forms::Padding(3);
			this->tHistogram->Size = System::Drawing::Size(1369, 564);
			this->tHistogram->TabIndex = 1;
			this->tHistogram->Text = L"Гистограмма";
			this->tHistogram->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(239, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 27);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Graphic::button2_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->label10, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(546, 68);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(130, 460);
			this->tableLayoutPanel1->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(3, 414);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 46);
			this->label10->TabIndex = 9;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(3, 368);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 46);
			this->label9->TabIndex = 8;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Location = System::Drawing::Point(3, 322);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 46);
			this->label8->TabIndex = 7;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(3, 276);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 46);
			this->label7->TabIndex = 6;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(3, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 46);
			this->label6->TabIndex = 5;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(3, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 46);
			this->label5->TabIndex = 4;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(3, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 46);
			this->label4->TabIndex = 3;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(3, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 46);
			this->label3->TabIndex = 2;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(3, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 46);
			this->label2->TabIndex = 1;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 46);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Histogram
			// 
			this->Histogram->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Histogram->Location = System::Drawing::Point(545, 39);
			this->Histogram->Name = L"Histogram";
			this->Histogram->Size = System::Drawing::Size(786, 500);
			this->Histogram->TabIndex = 8;
			this->Histogram->TabStop = false;
			// 
			// bEnter1
			// 
			this->bEnter1->Location = System::Drawing::Point(155, 103);
			this->bEnter1->Name = L"bEnter1";
			this->bEnter1->Size = System::Drawing::Size(77, 27);
			this->bEnter1->TabIndex = 5;
			this->bEnter1->Text = L"Ввод";
			this->bEnter1->UseVisualStyleBackColor = true;
			this->bEnter1->Click += gcnew System::EventHandler(this, &Graphic::bEnter1_Click);
			// 
			// bNum1
			// 
			this->bNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bNum1->Location = System::Drawing::Point(32, 160);
			this->bNum1->Name = L"bNum1";
			this->bNum1->Size = System::Drawing::Size(169, 69);
			this->bNum1->TabIndex = 4;
			this->bNum1->Text = L"Построить";
			this->bNum1->UseVisualStyleBackColor = true;
			this->bNum1->Click += gcnew System::EventHandler(this, &Graphic::bNum1_Click);
			// 
			// labNum1
			// 
			this->labNum1->AutoSize = true;
			this->labNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labNum1->Location = System::Drawing::Point(28, 39);
			this->labNum1->Name = L"labNum1";
			this->labNum1->Size = System::Drawing::Size(137, 20);
			this->labNum1->TabIndex = 3;
			this->labNum1->Text = L"Введите число";
			this->labNum1->Click += gcnew System::EventHandler(this, &Graphic::labNum1_Click);
			// 
			// tBoxNum1
			// 
			this->tBoxNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBoxNum1->Location = System::Drawing::Point(32, 103);
			this->tBoxNum1->Name = L"tBoxNum1";
			this->tBoxNum1->Size = System::Drawing::Size(121, 27);
			this->tBoxNum1->TabIndex = 2;
			// 
			// lBox1
			// 
			this->lBox1->FormattingEnabled = true;
			this->lBox1->ItemHeight = 16;
			this->lBox1->Location = System::Drawing::Point(331, 39);
			this->lBox1->Name = L"lBox1";
			this->lBox1->Size = System::Drawing::Size(105, 276);
			this->lBox1->TabIndex = 1;
			// 
			// tDiagram
			// 
			this->tDiagram->Controls->Add(this->button1);
			this->tDiagram->Controls->Add(this->Diagram);
			this->tDiagram->Controls->Add(this->bNum2);
			this->tDiagram->Controls->Add(this->lBox2);
			this->tDiagram->Controls->Add(this->bEnter2);
			this->tDiagram->Controls->Add(this->tBoxNum2);
			this->tDiagram->Controls->Add(this->lab2);
			this->tDiagram->Location = System::Drawing::Point(4, 25);
			this->tDiagram->Name = L"tDiagram";
			this->tDiagram->Size = System::Drawing::Size(1369, 564);
			this->tDiagram->TabIndex = 2;
			this->tDiagram->Text = L"Диаграмма";
			this->tDiagram->UseVisualStyleBackColor = true;
			this->tDiagram->Click += gcnew System::EventHandler(this, &Graphic::tDiagram_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(239, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 27);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Удалить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Diagram
			// 
			this->Diagram->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Diagram->Location = System::Drawing::Point(533, 56);
			this->Diagram->Name = L"Diagram";
			this->Diagram->Size = System::Drawing::Size(778, 500);
			this->Diagram->TabIndex = 10;
			this->Diagram->TabStop = false;
			// 
			// bNum2
			// 
			this->bNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bNum2->Location = System::Drawing::Point(43, 171);
			this->bNum2->Name = L"bNum2";
			this->bNum2->Size = System::Drawing::Size(190, 66);
			this->bNum2->TabIndex = 9;
			this->bNum2->Text = L"Построить";
			this->bNum2->UseVisualStyleBackColor = true;
			this->bNum2->Click += gcnew System::EventHandler(this, &Graphic::bNum2_Click);
			// 
			// lBox2
			// 
			this->lBox2->FormattingEnabled = true;
			this->lBox2->ItemHeight = 16;
			this->lBox2->Location = System::Drawing::Point(352, 56);
			this->lBox2->Name = L"lBox2";
			this->lBox2->Size = System::Drawing::Size(109, 276);
			this->lBox2->TabIndex = 8;
			// 
			// bEnter2
			// 
			this->bEnter2->Location = System::Drawing::Point(162, 110);
			this->bEnter2->Name = L"bEnter2";
			this->bEnter2->Size = System::Drawing::Size(71, 27);
			this->bEnter2->TabIndex = 6;
			this->bEnter2->Text = L"Ввод";
			this->bEnter2->UseVisualStyleBackColor = true;
			this->bEnter2->Click += gcnew System::EventHandler(this, &Graphic::bEnter2_Click);
			// 
			// tBoxNum2
			// 
			this->tBoxNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tBoxNum2->Location = System::Drawing::Point(43, 110);
			this->tBoxNum2->Name = L"tBoxNum2";
			this->tBoxNum2->Size = System::Drawing::Size(113, 27);
			this->tBoxNum2->TabIndex = 5;
			// 
			// lab2
			// 
			this->lab2->AutoSize = true;
			this->lab2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab2->Location = System::Drawing::Point(39, 56);
			this->lab2->Name = L"lab2";
			this->lab2->Size = System::Drawing::Size(137, 20);
			this->lab2->TabIndex = 4;
			this->lab2->Text = L"Введите число";
			this->lab2->Click += gcnew System::EventHandler(this, &Graphic::lab2_Click);
			// 
			// Graphic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1417, 604);
			this->Controls->Add(this->tControl);
			this->Controls->Add(this->labY);
			this->Controls->Add(this->labX);
			this->Name = L"Graphic";
			this->Text = L"PlotProject";
			this->tControl->ResumeLayout(false);
			this->tGraphic->ResumeLayout(false);
			this->tGraphic->PerformLayout();
			this->tlpY->ResumeLayout(false);
			this->tlpY->PerformLayout();
			this->tlpX->ResumeLayout(false);
			this->tlpX->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBox))->EndInit();
			this->tHistogram->ResumeLayout(false);
			this->tHistogram->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Histogram))->EndInit();
			this->tDiagram->ResumeLayout(false);
			this->tDiagram->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Diagram))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bMake_Click(System::Object^ sender, System::EventArgs^ e)
	{
		list<Lexem> exp;
		double var;
		parsLexs(exp, this->tBoxExp->Text->Replace(L" ", L""), &var);
		makePol(exp);

		this->pBox->Image = gcnew Bitmap(pBox->Width, pBox->Height);
		Graphics^ g = Graphics::FromImage(pBox->Image);
		Pen^ penR2 = gcnew Pen(Color::Blue, 2);
		Pen^ penB2 = gcnew Pen(Color::Black, 2);
		Pen^ penG1 = gcnew Pen(Color::Gray, 1);


		double a = Convert::ToDouble(this->tBoxStart->Text);
		double b = Convert::ToDouble(this->tBoxEnd->Text);
		double W = this->pBox->Width;
		double H = this->pBox->Height;

		array<PointF>^ arr = pFunc(a, b, exp, W, H);
		g->DrawLines(penR2, arr);


		double hx = (b - a) / 9;
		double* ar = new double[10];
		int i = 0;
		for (double x = a; x < (b + hx / 2); ar[i] = round(x * 100) / 100, x += hx, i++);
		this->labX0->Text = Convert::ToString(ar[0]);
		this->labX1->Text = Convert::ToString(ar[1]);
		this->labX2->Text = Convert::ToString(ar[2]);
		this->labX3->Text = Convert::ToString(ar[3]);
		this->labX4->Text = Convert::ToString(ar[4]);
		this->labX5->Text = Convert::ToString(ar[5]);
		this->labX6->Text = Convert::ToString(ar[6]);
		this->labX7->Text = Convert::ToString(ar[7]);
		this->labX8->Text = Convert::ToString(ar[8]);
		this->labX9->Text = Convert::ToString(ar[9]);

		double sx = W / 9;
		for (double x = sx; x < (W - sx / 2); x += sx)
			g->DrawLine(penG1, x, 0, x, H);

		double Ymin = minF(a, b, exp);
		double Ymax = maxF(a, b, exp);
		double hy = (Ymax - Ymin) / 9;
		int j = 0;
		for (double y = Ymin; y < (Ymax + hy / 2); ar[j] = round(y * 100) / 100, y += hy, j++);

		this->labY0->Text = Convert::ToString(ar[9]);
		this->labY1->Text = Convert::ToString(ar[8]);
		this->labY2->Text = Convert::ToString(ar[7]);
		this->labY3->Text = Convert::ToString(ar[6]);
		this->labY4->Text = Convert::ToString(ar[5]);
		this->labY5->Text = Convert::ToString(ar[4]);
		this->labY6->Text = Convert::ToString(ar[3]);
		this->labY7->Text = Convert::ToString(ar[2]);
		this->labY8->Text = Convert::ToString(ar[1]);
		this->labY9->Text = Convert::ToString(ar[0]);

		delete[] ar;

		double sy = H / 9;
		for (double y = sy; y < (H - sy / 2); y += sy)
			g->DrawLine(penG1, 0, y, W, y);

		if (a <= 0 && b >= 0)
		{
			double xO = W / (b - a) * (-a);
			g->DrawLine(penB2, xO, 0, xO, H);
			g->DrawLine(penB2, xO, 0, xO - 5, 10);
			g->DrawLine(penB2, xO, 0, xO + 5, 10);
			Point pX;
			pX.X = 115 + xO;
			pX.Y = 35;
			this->labX->Location = pX;
			this->labX->Text = L"Y";

		}
		if (Ymin <= 0 && Ymax >= 0)
		{
			double yO = H / (Ymax - Ymin) * Ymax;
			g->DrawLine(penB2, 0, yO, W - 2, yO);
			g->DrawLine(penB2, (int)W - 2, yO, W - 10, yO - 5);
			g->DrawLine(penB2, (int)W - 2, yO, W - 10, yO + 5);
			Point pY;
			pY.X = 592;
			pY.Y = 40 + yO;
			this->labY->Location = pY;
			this->labY->Text = L"X";
		}

	}
	private: int key1 = 0;
	private: double max;
	private: System::Void bEnter1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double a = Convert::ToDouble(this->tBoxNum1->Text);
		if (!key1)
		{
			this->lBox1->Items->Clear();
			this->max = a;
		}
		this->lBox1->Items->Add(this->tBoxNum1->Text);
		this->tBoxNum1->Clear();
		if (a > this->max)
			max = a;
		this->key1++;
	}
	private: System::Void bNum1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double W = this->Histogram->Width;
		double H = this->Histogram->Height;
		this->Histogram->Image = gcnew Bitmap(Histogram->Width, Histogram->Height);
		Graphics^ g = Graphics::FromImage(Histogram->Image);
		Pen^ penB2 = gcnew Pen(Color::Black, 2);
		Pen^ penG1 = gcnew Pen(Color::Gray, 1);
		Pen^ penO1 = gcnew Pen(Color::Blue, 1);
		Brush^ brush = gcnew SolidBrush(Color::Blue);
		g->DrawLine(penB2, 40, 20, 40, 380);
		g->DrawLine(penB2, 40, 380, 500, 380);
		double hy = 340 / 9 + 1;
		int i = 0;
		for (double y = 40; i < 9; y += hy, i++)
			g->DrawLine(penG1, 40, y, 500, y);

		int k = this->lBox1->Items->Count;
		double My = 340 / this->max;
		double hx = 460 / (k + 1);
		double Hy = this->max / 9;
		double* ar = new double[10];
		i = 0;
		for (double x = 0; i < 10; ar[i] = round(x * 100) / 100, x += Hy, i++);
		{
			this->label1->Text = Convert::ToString(ar[9]);
			this->label2->Text = Convert::ToString(ar[8]);
			this->label3->Text = Convert::ToString(ar[7]);
			this->label4->Text = Convert::ToString(ar[6]);
			this->label5->Text = Convert::ToString(ar[5]);
			this->label6->Text = Convert::ToString(ar[4]);
			this->label7->Text = Convert::ToString(ar[3]);
			this->label8->Text = Convert::ToString(ar[2]);
			this->label9->Text = Convert::ToString(ar[1]);
			this->label10->Text = Convert::ToString(ar[0]);
		}
		delete[] ar;

		int width = 20;
		i = 0;
		for (double x = 40 + hx; i < k; x += hx, i++)
		{
			double val = Convert::ToDouble(this->lBox1->Items[i]);
			Rectangle r;
			r.Width = width;
			r.Height = val * My;
			r.X = x - 10;
			r.Y = 380 - val * My - 1;
			g->DrawRectangle(penO1, r);
			g->FillRectangle(brush, r);
		}
		this->key1 = 0;
	}
	private: int key2 = 0;
	private: System::Void bEnter2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!key2)
			this->lBox2->Items->Clear();
		this->lBox2->Items->Add(this->tBoxNum2->Text);
		this->tBoxNum2->Clear();
		this->key2++;
	}
	private: System::Void bNum2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double W = this->Diagram->Width;
		double H = this->Diagram->Height;
		this->Diagram->Image = gcnew Bitmap(Diagram->Width, Diagram->Height);
		Graphics^ g = Graphics::FromImage(Diagram->Image);
		Pen^ penB2 = gcnew Pen(Color::Black, 2);
		Brush^ brushB = gcnew SolidBrush(Color::Black);
		array<Brush^>^ brush = gcnew array<Brush^>(7);
		{
			brush[0] = gcnew SolidBrush(Color::Blue);
			brush[1] = gcnew SolidBrush(Color::Red);
			brush[2] = gcnew SolidBrush(Color::Purple);
			brush[3] = gcnew SolidBrush(Color::Green);
			brush[4] = gcnew SolidBrush(Color::LightBlue);
			brush[5] = gcnew SolidBrush(Color::Orchid);
			brush[6] = gcnew SolidBrush(Color::Orange);
		}
		Rectangle r;
		r.X = 60;
		r.Y = 60;
		r.Width = 280;
		r.Height = 280;

		double sum = 0;
		int n = this->lBox2->Items->Count;
		for (int i = 0; i < n; i++)
			sum += Convert::ToDouble(this->lBox2->Items[i]);
		double* start = new double[n];
		double* angle = new double[n];

		double ang = 0;
		for (int i = 0; i < n - 1; i++)
		{
			double tempAng = Convert::ToDouble(this->lBox2->Items[i]) / sum * 360;
			angle[i] = tempAng;
			start[i] = ang;
			ang += tempAng;
		}
		start[n - 1] = ang;
		angle[n - 1] = 360 - ang;

		for (int i = 0; i < n; i++)
		{
			double st = start[i];
			double an = angle[i];
			double cent = (st + an / 2) * 3.1415926535 / 180;
			g->DrawPie(penB2, r, st, an);
			g->FillPie(brush[i], r, st, an);
			RectangleF txt;
			txt.Width = 40;
			txt.Height = 16;
			txt.X = 170 * cos(cent) + 185;
			txt.Y = 170 * sin(cent) + 192;
			String^ s = gcnew String(Convert::ToString(this->lBox2->Items[i]));
			Drawing::Font^ f = gcnew Drawing::Font(L"Arial", 10);
			g->DrawString(s, f, brushB, txt);
		}
		delete[] start;
		delete[] angle;
		this->key2 = 0;
	}
	private: System::Void tDiagram_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lab2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labNum1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labA_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}