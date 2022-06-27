#pragma once

namespace GraphicFunction {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíþToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_create;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem_clear;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox_y4;
	private: System::Windows::Forms::TextBox^ textBox_y3;
	private: System::Windows::Forms::TextBox^ textBox_y2;
	private: System::Windows::Forms::TextBox^ textBox_y1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_h;
	private: System::Windows::Forms::TextBox^ textBox_x4;
	private: System::Windows::Forms::TextBox^ textBox_x3;
	private: System::Windows::Forms::TextBox^ textBox_x2;
	private: System::Windows::Forms::TextBox^ textBox_x1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::GroupBox^ groupBox4;



	private: System::Windows::Forms::CheckBox^ checkBox_bezier_old;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::CheckBox^ checkBox_bezier_new;

	private: int x1, x2, x3, x4, y1, y2, y3, y4;
	private: int xa, ya, xb, yb, xc, yc;
	private: int xm, ym, xn, yn;
	private: int x, y;
	private: float h;

	private: int temp_x1, temp_x2, temp_x3, temp_x4, temp_y1, temp_y2, temp_y3, temp_y4;






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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíþToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_create = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_clear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_y4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_y1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_bezier_old = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox_bezier_new = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ìåíþToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1264, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíþToolStripMenuItem
			// 
			this->ìåíþToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ToolStripMenuItem_create,
					this->ToolStripMenuItem_clear
			});
			this->ìåíþToolStripMenuItem->Name = L"ìåíþToolStripMenuItem";
			this->ìåíþToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíþToolStripMenuItem->Text = L"Ìåíþ";
			// 
			// ToolStripMenuItem_create
			// 
			this->ToolStripMenuItem_create->Name = L"ToolStripMenuItem_create";
			this->ToolStripMenuItem_create->Size = System::Drawing::Size(180, 22);
			this->ToolStripMenuItem_create->Text = L"Ïîñòðîèòü ãðàôèê";
			this->ToolStripMenuItem_create->Click += gcnew System::EventHandler(this, &MainForm::ToolStripMenuItem_Click_create);
			// 
			// ToolStripMenuItem_clear
			// 
			this->ToolStripMenuItem_clear->Name = L"ToolStripMenuItem_clear";
			this->ToolStripMenuItem_clear->Size = System::Drawing::Size(180, 22);
			this->ToolStripMenuItem_clear->Text = L"Î÷èñòèòü ãðàôèê";
			this->ToolStripMenuItem_clear->Click += gcnew System::EventHandler(this, &MainForm::ToolStripMenuItem_Click_clear);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_y4);
			this->groupBox1->Controls->Add(this->textBox_y3);
			this->groupBox1->Controls->Add(this->textBox_y2);
			this->groupBox1->Controls->Add(this->textBox_y1);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox_h);
			this->groupBox1->Controls->Add(this->textBox_x4);
			this->groupBox1->Controls->Add(this->textBox_x3);
			this->groupBox1->Controls->Add(this->textBox_x2);
			this->groupBox1->Controls->Add(this->textBox_x1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(13, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(566, 180);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ïàðìåòðû";
			// 
			// textBox_y4
			// 
			this->textBox_y4->Location = System::Drawing::Point(130, 127);
			this->textBox_y4->Name = L"textBox_y4";
			this->textBox_y4->Size = System::Drawing::Size(52, 22);
			this->textBox_y4->TabIndex = 17;
			// 
			// textBox_y3
			// 
			this->textBox_y3->Location = System::Drawing::Point(130, 91);
			this->textBox_y3->Name = L"textBox_y3";
			this->textBox_y3->Size = System::Drawing::Size(52, 22);
			this->textBox_y3->TabIndex = 16;
			// 
			// textBox_y2
			// 
			this->textBox_y2->Location = System::Drawing::Point(130, 61);
			this->textBox_y2->Name = L"textBox_y2";
			this->textBox_y2->Size = System::Drawing::Size(52, 22);
			this->textBox_y2->TabIndex = 15;
			// 
			// textBox_y1
			// 
			this->textBox_y1->Location = System::Drawing::Point(130, 32);
			this->textBox_y1->Name = L"textBox_y1";
			this->textBox_y1->Size = System::Drawing::Size(52, 22);
			this->textBox_y1->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(97, 127);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 19);
			this->label9->TabIndex = 13;
			this->label9->Text = L"y4:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(97, 91);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 19);
			this->label8->TabIndex = 12;
			this->label8->Text = L"y3:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(97, 61);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 19);
			this->label7->TabIndex = 11;
			this->label7->Text = L"y2:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(97, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 19);
			this->label6->TabIndex = 10;
			this->label6->Text = L"y1:";
			// 
			// textBox_h
			// 
			this->textBox_h->Location = System::Drawing::Point(65, 158);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(52, 22);
			this->textBox_h->TabIndex = 9;
			// 
			// textBox_x4
			// 
			this->textBox_x4->Location = System::Drawing::Point(39, 124);
			this->textBox_x4->Name = L"textBox_x4";
			this->textBox_x4->Size = System::Drawing::Size(52, 22);
			this->textBox_x4->TabIndex = 8;
			// 
			// textBox_x3
			// 
			this->textBox_x3->Location = System::Drawing::Point(39, 91);
			this->textBox_x3->Name = L"textBox_x3";
			this->textBox_x3->Size = System::Drawing::Size(52, 22);
			this->textBox_x3->TabIndex = 7;
			// 
			// textBox_x2
			// 
			this->textBox_x2->Location = System::Drawing::Point(39, 61);
			this->textBox_x2->Name = L"textBox_x2";
			this->textBox_x2->Size = System::Drawing::Size(52, 22);
			this->textBox_x2->TabIndex = 6;
			// 
			// textBox_x1
			// 
			this->textBox_x1->Location = System::Drawing::Point(39, 32);
			this->textBox_x1->Name = L"textBox_x1";
			this->textBox_x1->Size = System::Drawing::Size(52, 22);
			this->textBox_x1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"h(øàã):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"x4:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"x3:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x2:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x1:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chart1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 214);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(567, 455);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Íîâûé ãðàôèê";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			legend1->Title = L"Öâåò ãðàôèêà";
			legend1->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend1->TitleSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::GradientLine;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(6, 19);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->Legend = L"Legend1";
			series1->Name = L"B(t) new";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->Name = L"B(t) old";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(555, 430);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Ãðàôèê êðèâîé Áåçüå (êóáèêà)";
			this->chart1->Titles->Add(title1);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->chart2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(685, 214);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(567, 455);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ñòàðûé ãðàôèê";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			legend2->Title = L"Öâåò ãðàôèêà";
			legend2->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend2->TitleSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::GradientLine;
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(6, 19);
			this->chart2->Name = L"chart2";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->Legend = L"Legend1";
			series3->Name = L"B(t) old";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(555, 430);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			title2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"Title1";
			title2->Text = L"Ãðàôèê êðèâîé Áåçüå (êóáèêà)";
			this->chart2->Titles->Add(title2);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox_bezier_old);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->checkBox_bezier_new);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(685, 27);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(566, 180);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ãðàôèêè";
			// 
			// checkBox_bezier_old
			// 
			this->checkBox_bezier_old->AutoSize = true;
			this->checkBox_bezier_old->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_bezier_old->Location = System::Drawing::Point(6, 117);
			this->checkBox_bezier_old->Name = L"checkBox_bezier_old";
			this->checkBox_bezier_old->Size = System::Drawing::Size(433, 23);
			this->checkBox_bezier_old->TabIndex = 16;
			this->checkBox_bezier_old->Text = L"B(t) = (1-t)^3 *P1 + 3t(1-t)^2 * P2 + 3t^2(1-t) * P3 + t^3 * P4";
			this->checkBox_bezier_old->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(6, 95);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(128, 19);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Ñòàðûé ãðàôèê:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(122, 19);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Íîâûé ãðàôèê:";
			// 
			// checkBox_bezier_new
			// 
			this->checkBox_bezier_new->AutoSize = true;
			this->checkBox_bezier_new->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_bezier_new->Location = System::Drawing::Point(6, 40);
			this->checkBox_bezier_new->Name = L"checkBox_bezier_new";
			this->checkBox_bezier_new->Size = System::Drawing::Size(433, 23);
			this->checkBox_bezier_new->TabIndex = 0;
			this->checkBox_bezier_new->Text = L"B(t) = (1-t)^3 *P1 + 3t(1-t)^2 * P2 + 3t^2(1-t) * P3 + t^3 * P4";
			this->checkBox_bezier_new->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Ãðàôèê";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ToolStripMenuItem_Click_create(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ToolStripMenuItem_Click_clear(System::Object^ sender, System::EventArgs^ e);
	private: void DefaultParams();
	private: void PastParams();
	private: int getPt(int n1, int n2, float perc);
	

};
}
