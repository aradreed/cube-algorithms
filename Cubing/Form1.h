#pragma once

#include "help.h"
#include "ortega.h"

namespace Cubing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnBack;
	protected: 



	private: System::Windows::Forms::PictureBox^  pictureBoxOll;

	private: System::Windows::Forms::ImageList^  imageListOll;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txtCase;
	private: System::Windows::Forms::TextBox^  txtAlg;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  ollToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBoxPll;

	private: System::Windows::Forms::RadioButton^  rBtnPll;
	private: System::Windows::Forms::ImageList^  imageListPll;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  ortegaToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^  rBtnOll;
	private: System::Windows::Forms::Button^  btnSearch;







	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->pictureBoxOll = (gcnew System::Windows::Forms::PictureBox());
			this->imageListOll = (gcnew System::Windows::Forms::ImageList(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ollToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ortegaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtCase = (gcnew System::Windows::Forms::TextBox());
			this->txtAlg = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxPll = (gcnew System::Windows::Forms::PictureBox());
			this->rBtnPll = (gcnew System::Windows::Forms::RadioButton());
			this->imageListPll = (gcnew System::Windows::Forms::ImageList(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rBtnOll = (gcnew System::Windows::Forms::RadioButton());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxOll))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPll))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(499, 215);
			this->btnNext->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(100, 28);
			this->btnNext->TabIndex = 1;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &Form1::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(24, 215);
			this->btnBack->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(100, 28);
			this->btnBack->TabIndex = 2;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Form1::btnBack_Click);
			// 
			// pictureBoxOll
			// 
			this->pictureBoxOll->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxOll->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBoxOll->Location = System::Drawing::Point(211, 98);
			this->pictureBoxOll->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBoxOll->Name = L"pictureBoxOll";
			this->pictureBoxOll->Size = System::Drawing::Size(225, 225);
			this->pictureBoxOll->TabIndex = 3;
			this->pictureBoxOll->TabStop = false;
			// 
			// imageListOll
			// 
			this->imageListOll->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageListOll.ImageStream")));
			this->imageListOll->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListOll->Images->SetKeyName(0, L"oll01print.gif");
			this->imageListOll->Images->SetKeyName(1, L"oll02print.gif");
			this->imageListOll->Images->SetKeyName(2, L"oll03print.gif");
			this->imageListOll->Images->SetKeyName(3, L"oll04print.gif");
			this->imageListOll->Images->SetKeyName(4, L"oll05print.gif");
			this->imageListOll->Images->SetKeyName(5, L"oll06print.gif");
			this->imageListOll->Images->SetKeyName(6, L"oll07print.gif");
			this->imageListOll->Images->SetKeyName(7, L"oll08print.gif");
			this->imageListOll->Images->SetKeyName(8, L"oll09print.gif");
			this->imageListOll->Images->SetKeyName(9, L"oll10print.gif");
			this->imageListOll->Images->SetKeyName(10, L"oll11print.gif");
			this->imageListOll->Images->SetKeyName(11, L"oll12print.gif");
			this->imageListOll->Images->SetKeyName(12, L"oll13print.gif");
			this->imageListOll->Images->SetKeyName(13, L"oll14print.gif");
			this->imageListOll->Images->SetKeyName(14, L"oll15print.gif");
			this->imageListOll->Images->SetKeyName(15, L"oll16print.gif");
			this->imageListOll->Images->SetKeyName(16, L"oll17print.gif");
			this->imageListOll->Images->SetKeyName(17, L"oll18print.gif");
			this->imageListOll->Images->SetKeyName(18, L"oll19print.gif");
			this->imageListOll->Images->SetKeyName(19, L"oll20print.gif");
			this->imageListOll->Images->SetKeyName(20, L"oll21print.gif");
			this->imageListOll->Images->SetKeyName(21, L"oll22print.gif");
			this->imageListOll->Images->SetKeyName(22, L"oll23print.gif");
			this->imageListOll->Images->SetKeyName(23, L"oll24print.gif");
			this->imageListOll->Images->SetKeyName(24, L"oll25print.gif");
			this->imageListOll->Images->SetKeyName(25, L"oll26print.gif");
			this->imageListOll->Images->SetKeyName(26, L"oll27print.gif");
			this->imageListOll->Images->SetKeyName(27, L"oll28print.gif");
			this->imageListOll->Images->SetKeyName(28, L"oll29print.gif");
			this->imageListOll->Images->SetKeyName(29, L"oll30print.gif");
			this->imageListOll->Images->SetKeyName(30, L"oll31print.gif");
			this->imageListOll->Images->SetKeyName(31, L"oll32print.gif");
			this->imageListOll->Images->SetKeyName(32, L"oll33print.gif");
			this->imageListOll->Images->SetKeyName(33, L"oll34print.gif");
			this->imageListOll->Images->SetKeyName(34, L"oll35print.gif");
			this->imageListOll->Images->SetKeyName(35, L"oll36print.gif");
			this->imageListOll->Images->SetKeyName(36, L"oll37print.gif");
			this->imageListOll->Images->SetKeyName(37, L"oll38print.gif");
			this->imageListOll->Images->SetKeyName(38, L"oll39print.gif");
			this->imageListOll->Images->SetKeyName(39, L"oll40print.gif");
			this->imageListOll->Images->SetKeyName(40, L"oll41print.gif");
			this->imageListOll->Images->SetKeyName(41, L"oll42print.gif");
			this->imageListOll->Images->SetKeyName(42, L"oll43print.gif");
			this->imageListOll->Images->SetKeyName(43, L"oll44print.gif");
			this->imageListOll->Images->SetKeyName(44, L"oll45print.gif");
			this->imageListOll->Images->SetKeyName(45, L"oll46print.gif");
			this->imageListOll->Images->SetKeyName(46, L"oll47print.gif");
			this->imageListOll->Images->SetKeyName(47, L"oll48print.gif");
			this->imageListOll->Images->SetKeyName(48, L"oll49print.gif");
			this->imageListOll->Images->SetKeyName(49, L"oll50print.gif");
			this->imageListOll->Images->SetKeyName(50, L"oll51print.gif");
			this->imageListOll->Images->SetKeyName(51, L"oll52print.gif");
			this->imageListOll->Images->SetKeyName(52, L"oll53print.gif");
			this->imageListOll->Images->SetKeyName(53, L"oll54print.gif");
			this->imageListOll->Images->SetKeyName(54, L"oll55print.gif");
			this->imageListOll->Images->SetKeyName(55, L"oll56print.gif");
			this->imageListOll->Images->SetKeyName(56, L"oll57print.gif");
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(668, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ollToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// ollToolStripMenuItem
			// 
			this->ollToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ortegaToolStripMenuItem});
			this->ollToolStripMenuItem->Name = L"ollToolStripMenuItem";
			this->ollToolStripMenuItem->Size = System::Drawing::Size(110, 24);
			this->ollToolStripMenuItem->Text = L"View";
			// 
			// ortegaToolStripMenuItem
			// 
			this->ortegaToolStripMenuItem->Name = L"ortegaToolStripMenuItem";
			this->ortegaToolStripMenuItem->Size = System::Drawing::Size(151, 24);
			this->ortegaToolStripMenuItem->Text = L"2x2 Ortega";
			this->ortegaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ortegaToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(110, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(119, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// txtCase
			// 
			this->txtCase->Location = System::Drawing::Point(315, 48);
			this->txtCase->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCase->Name = L"txtCase";
			this->txtCase->Size = System::Drawing::Size(51, 22);
			this->txtCase->TabIndex = 5;
			// 
			// txtAlg
			// 
			this->txtAlg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtAlg->Location = System::Drawing::Point(196, 364);
			this->txtAlg->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtAlg->Multiline = true;
			this->txtAlg->Name = L"txtAlg";
			this->txtAlg->ReadOnly = true;
			this->txtAlg->Size = System::Drawing::Size(455, 68);
			this->txtAlg->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(208, 52);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Case Number:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 395);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 39);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Algorithm:";
			// 
			// pictureBoxPll
			// 
			this->pictureBoxPll->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxPll->Location = System::Drawing::Point(211, 98);
			this->pictureBoxPll->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBoxPll->Name = L"pictureBoxPll";
			this->pictureBoxPll->Size = System::Drawing::Size(225, 225);
			this->pictureBoxPll->TabIndex = 9;
			this->pictureBoxPll->TabStop = false;
			// 
			// rBtnPll
			// 
			this->rBtnPll->AutoSize = true;
			this->rBtnPll->Location = System::Drawing::Point(23, 52);
			this->rBtnPll->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rBtnPll->Name = L"rBtnPll";
			this->rBtnPll->Size = System::Drawing::Size(54, 21);
			this->rBtnPll->TabIndex = 11;
			this->rBtnPll->Text = L"PLL";
			this->rBtnPll->UseVisualStyleBackColor = true;
			this->rBtnPll->CheckedChanged += gcnew System::EventHandler(this, &Form1::rBtnPll_CheckedChanged);
			// 
			// imageListPll
			// 
			this->imageListPll->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageListPll.ImageStream")));
			this->imageListPll->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListPll->Images->SetKeyName(0, L"pll01.gif");
			this->imageListPll->Images->SetKeyName(1, L"pll02.gif");
			this->imageListPll->Images->SetKeyName(2, L"pll03.gif");
			this->imageListPll->Images->SetKeyName(3, L"pll04.gif");
			this->imageListPll->Images->SetKeyName(4, L"pll05.gif");
			this->imageListPll->Images->SetKeyName(5, L"pll06.gif");
			this->imageListPll->Images->SetKeyName(6, L"pll07.gif");
			this->imageListPll->Images->SetKeyName(7, L"pll08.gif");
			this->imageListPll->Images->SetKeyName(8, L"pll09.gif");
			this->imageListPll->Images->SetKeyName(9, L"pll10.gif");
			this->imageListPll->Images->SetKeyName(10, L"pll11.gif");
			this->imageListPll->Images->SetKeyName(11, L"pll12.gif");
			this->imageListPll->Images->SetKeyName(12, L"pll13.gif");
			this->imageListPll->Images->SetKeyName(13, L"pll14.gif");
			this->imageListPll->Images->SetKeyName(14, L"pll15.gif");
			this->imageListPll->Images->SetKeyName(15, L"pll16.gif");
			this->imageListPll->Images->SetKeyName(16, L"pll17.gif");
			this->imageListPll->Images->SetKeyName(17, L"pll18.gif");
			this->imageListPll->Images->SetKeyName(18, L"pll19.gif");
			this->imageListPll->Images->SetKeyName(19, L"pll20.gif");
			this->imageListPll->Images->SetKeyName(20, L"pll21.gif");
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rBtnOll);
			this->groupBox1->Controls->Add(this->rBtnPll);
			this->groupBox1->Location = System::Drawing::Point(16, 261);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(128, 96);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Modes";
			// 
			// rBtnOll
			// 
			this->rBtnOll->AutoSize = true;
			this->rBtnOll->Location = System::Drawing::Point(23, 23);
			this->rBtnOll->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rBtnOll->Name = L"rBtnOll";
			this->rBtnOll->Size = System::Drawing::Size(56, 21);
			this->rBtnOll->TabIndex = 13;
			this->rBtnOll->Text = L"OLL";
			this->rBtnOll->UseVisualStyleBackColor = true;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(389, 46);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(77, 28);
			this->btnSearch->TabIndex = 13;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Form1::btnSearch_Click);
			// 
			// Form1
			// 
			this->AcceptButton = this->btnNext;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(668, 444);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBoxPll);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAlg);
			this->Controls->Add(this->txtCase);
			this->Controls->Add(this->pictureBoxOll);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Oll/Pll Algorithm Trainer";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxOll))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPll))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int count, display;
		private: array<String^>^ ollAlgs;
		private: array<String^>^ pllAlgs;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 // set starting picture
				 rBtnOll->Checked = true;
				 pictureBoxPll->Visible = false;
				 pictureBoxOll->Image = imageListOll->Images[0];
				 txtCase->Text = "1";

				 ollAlgs = gcnew array<String^>(57);
				 pllAlgs = gcnew array<String^>(21);

				 // Oll algs corresponding to the count variable
				 ollAlgs->SetValue("M' U M U2 M' U M", 0);
				 ollAlgs->SetValue("(R U R' U') M' (U R U' r')", 1);
				 ollAlgs->SetValue("M U (R U R' U') M2 (U R U' r')", 2);
				 ollAlgs->SetValue("R2 [D (R' U2) R] [D' (R' U2) R']", 3);
				 ollAlgs->SetValue("(r U R' U') (r' F R F')", 4);
				 ollAlgs->SetValue("F' (r U R' U') (r' F R )", 5);
				 ollAlgs->SetValue("(R U R' U) R U2 R' ", 6);
				 ollAlgs->SetValue("(R' U' R U') R' U2 R", 7);
				 ollAlgs->SetValue("R U2 R2 U' R2 U' R2 U2 R", 8);
				 ollAlgs->SetValue("F (R U R' U') (R U R' U') (R U R' U') F' \r\n y (R' U' R) U' (R' U R) U' (R' U2 R)", 9);
				 ollAlgs->SetValue("[f (R U R' U') f'] U' [F (R U R' U') F' ] ", 10);
				 ollAlgs->SetValue("[f (R U R' U') f'] U [F (R U R' U') F' ]", 11);
				 ollAlgs->SetValue("(R U R' U) (R' F R F') U2 (R' F R F')", 12);
				 ollAlgs->SetValue("M U (R U R' U') M' (R' F R F')", 13);
				 ollAlgs->SetValue("[F (R U R' U) F'] y' U2 (R' F R F')", 14);
				 ollAlgs->SetValue("[F (R U R' U') F' ] [f (R U R' U') f']", 15);
				 ollAlgs->SetValue("(R U2 R') (R' F R F') U2 (R' F R F')", 16);
				 ollAlgs->SetValue("(R U R' U') (R' F R F')", 17);
				 ollAlgs->SetValue("F (R U R' U') F'", 18);
				 ollAlgs->SetValue("f (R U R' U') f' ", 19);
				 ollAlgs->SetValue("f' (L' U' L U) f ", 20);
				 ollAlgs->SetValue("R U B' U' R' U R B R' \r\n R d L' d' R' U R B R'", 21);
				 ollAlgs->SetValue("y2 R' U' F U R U' R' F' R \r\n L' d' R d L U' L' B' L", 22);
				 ollAlgs->SetValue("(R U R' U) (R U' R' U') (R' F R F')", 23);
				 ollAlgs->SetValue("(L' U' L U') (L' U L U) (L F' L' F)", 24);
				 ollAlgs->SetValue("(r U R' U) (R U' R' U) R U2' r'", 25);
				 ollAlgs->SetValue("l' U' L U' L' U L U' L' U2 l \r\n y2 r' U' R U' R' U R U' R' U2 r", 26);
				 ollAlgs->SetValue("R' F R2 B' R2' F' R2 B R' ", 27);
				 ollAlgs->SetValue("(R' F R' F') R2 U2 y (R' F R F')", 28);
				 ollAlgs->SetValue("F (R U R' U') (R U R' U') F'", 29);
				 ollAlgs->SetValue("F' (L' U' L U)(L' U' L U) F", 30);
				 ollAlgs->SetValue("y2 R B' R' U' R U B U' R' \r\n L F' (L' U' L U) F U' L'", 31);
				 ollAlgs->SetValue("R' [F (R U R' U') F'] U R", 32);
				 ollAlgs->SetValue("(R U R2 U') (R' F) (R U) (R U') F' \r\n (R U R' U') x D' R' U R U' D x'", 33);
				 ollAlgs->SetValue("R' U' (R' F R F') U R", 34);
				 ollAlgs->SetValue("r' U2 (R U R' U) r", 35);
				 ollAlgs->SetValue("r U2 R' U' R U' r'", 36);
				 ollAlgs->SetValue("(L' U2 L U2) (L F' L' F) \r\n (r U R' U) R U2 r'", 37);
				 ollAlgs->SetValue("[F (R U R' U') F'] U [F (R U R' U') F' ]", 38);
				 ollAlgs->SetValue("(R U2 R' U2) (R' F R F') \r\n y2 r' U' R U' R' U2 r", 39);
				 ollAlgs->SetValue("[F' (L' U' L U) F] y [F (R U R' U') F'] \r\n y (r U R' U)(R' F R F') R U2 r' ", 40);
				 ollAlgs->SetValue("F R U' R' U' R U R' F' \r\n (R' F R F') y (U' L' U L)", 41);
				 ollAlgs->SetValue("(R U2 R') (R' F R F') (R U2 R')", 42);
				 ollAlgs->SetValue("R U R' y R' F R U' R' F' R \r\n (R U R' U) (R' F R F') R U2 R'", 43);
				 ollAlgs->SetValue("(R' U' R) y' x' (R U') (R' F) (R U R') \r\n (R U R' U') R' F R2 U R' U' F'", 44);
				 ollAlgs->SetValue("f (R U R' U') (R U R' U') f' ", 45);
				 ollAlgs->SetValue("(R U R' U) R d' R U' R' F' \r\n (R' U' R U') R' d R' U R B", 46);
				 ollAlgs->SetValue("F (R U R' U') R F' (r U R' U') r'", 47);
				 ollAlgs->SetValue("R' U2 R2 U R' U R U2 x' U' R' U", 48);
				 ollAlgs->SetValue("F U R U' R2 F' R (U R U' R')", 49);
				 ollAlgs->SetValue("(r U r') (R U R' U') (r U' r')", 50);
				 ollAlgs->SetValue("R' F R U R' F' R y' (R U' R')", 51);
				 ollAlgs->SetValue("(l' U' l) (L' U' L U) (l' U l)", 52);
				 ollAlgs->SetValue("[(R U R' U) R U2 R'] [F (R U R' U') F']", 53);
				 ollAlgs->SetValue("(R2 U R' B' R) U' (R2 U R B R')", 54);
				 ollAlgs->SetValue("[ R' U2 (R U R' U) R] y [F (R U R' U') F'] \r\n (R' F R F') (R' F R F') (R U R' U') (R U R') ", 55);
				 ollAlgs->SetValue("(R U R' U') R U' R' F' U' F (R U R') \r\n [F (R U R' U') F'] U2 [(R U R' U') (R' F R F')] ", 56);
				 
				 //pllAlgs corresponding to count
				 pllAlgs->SetValue("x [(R' U R') D2] [(R U' R') D2] R2", 0); 
				 pllAlgs->SetValue("x' [(R U' R) D2] [(R' U R) D2] R2", 1);
				 pllAlgs->SetValue("x' (R U' R') D (R U R') D' (R U R') D (R U' R') D' \r\n  x (R U' R') D (R U R') u2 (R' U R) D (R' U' R)", 2);
				 pllAlgs->SetValue("M2 U M2 U M' U2 M2 U2 M' U2", 3);
				 pllAlgs->SetValue("M2 U M2 U2 M2 U M2", 4);
				 pllAlgs->SetValue("[R U'] [R U] [R U] [R U'] R' U' R2", 5);
				 pllAlgs->SetValue("R2 U [R U R' U'] (R' U') (R' U R')", 6);
				 pllAlgs->SetValue("[R' U L'] [U2 R U' R' U2] [R L U']", 7);
				 pllAlgs->SetValue("[R U R' F'] {[R U R' U'] [R' F] [R2 U' R'] U'}", 8);
				 pllAlgs->SetValue("[R U R' U'] [R' F] [R2 U' R'] U' [R U R' F']", 9);
				 pllAlgs->SetValue("[R' U2 R U2] [R' F] [R U R' U'] [R' F'] R2 U'", 10);
				 pllAlgs->SetValue("[L U2' L' U2'] [L F'] [L' U' L U] [L F] L2' U \r\n  y2 [R U2 R' U2] [R B'] [R' U' R U] [R B] R2 U", 11);
				 pllAlgs->SetValue("[R' U2 R' d'] [R' F'] [R2 U' R' U] [R' F R U' F]", 12);
				 pllAlgs->SetValue("R2 u' R U' R U R' u R2 [y R U' R']", 13);
				 pllAlgs->SetValue("R2 u R' U R' U' R u' R2 [y' R' U R]", 14);
				 pllAlgs->SetValue("[R' U' R] y R2 u R' U R U' R u' R2", 15);
				 pllAlgs->SetValue("[R U R'] y' R2 u' R U' R' U R' u R2", 16);
				 pllAlgs->SetValue("[R' U R' d'] [R' F'] [R2 U' R' U] [R' F R F]", 17);
				 pllAlgs->SetValue("{(L U' R) U2 (L' U R')} {(L U' R) U2 (L' U R')} U", 18);
				 pllAlgs->SetValue("{(R' U L') U2 (R U' L)} {(R' U L') U2 (R U' L)} U'", 19);				  
				 pllAlgs->SetValue("F R U' R' U' [R U R' F'] {[R U R' U'] [R' F R F']}", 20);

				 txtAlg->Text = ollAlgs[0];
			 }

private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
			  if (rBtnOll->Checked == true) { // next button if rBtnOll is checked
				if (count < imageListOll->Images->Count - 1) {
					count++;
					pictureBoxOll->Image = imageListOll->Images[count];
				}
				else {
					count = 0;
					pictureBoxOll->Image = imageListOll->Images[count];
				}

			 txtAlg->Text = ollAlgs[count];
			 }
			 else if (rBtnPll->Checked == true) { // next button if rBtnPll is checked
				 if (count < imageListPll->Images->Count - 1)
					 count++;
				 else 
					 count = 0;
				 pictureBoxPll->Image = imageListPll->Images[count];
				 txtAlg->Text = pllAlgs[count];
				 }
				 
			 display = count + 1;
			 txtCase->Text = display.ToString(); 

		
		 }
private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (rBtnOll->Checked == true) { // Oll list back button

				if (count > 0) {
				 count--;
				 pictureBoxOll->Image = imageListOll->Images[count];
			 }

				else {
				 count = imageListOll->Images->Count - 1;
				 pictureBoxOll->Image = imageListOll->Images[count];
			 }
				txtAlg->Text = ollAlgs[count];
			 }

			 else if (rBtnPll->Checked == true) { // Pll list back button
				 if (count > 0) {
					 count--;
					 pictureBoxPll->Image = imageListPll->Images[count];
				 }
				 else {
					 count = imageListPll->Images->Count - 1;
					 pictureBoxPll->Image = imageListPll->Images[count];
				 }
					txtAlg->Text = pllAlgs[count];
			 }

			 display = count + 1; // displays
			 txtCase->Text = display.ToString();
		 }

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void rBtnPll_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (pictureBoxPll->Visible == false)
			 {

				 pictureBoxOll->Visible = false;
				 pictureBoxPll->Visible = true;

				 // refresh picture and alg
				 count = 0;
				 display = count + 1;
				 txtCase->Text = display.ToString();
				 txtAlg->Text = pllAlgs[count];
				 pictureBoxPll->Image = imageListPll->Images[count]; 
			 }
			 
			 else
			 {
				 pictureBoxPll->Visible = false;
				 pictureBoxOll->Visible = true;

				 // refresh picture and alg
				 count = 0; 
				 display = count + 1;
				 txtCase->Text = display.ToString();
				 txtAlg->Text = ollAlgs[count];
				 pictureBoxOll->Image = imageListOll->Images[count];
			 }
			 
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 help ^ form = gcnew help;
			 form->ShowDialog();
		 }
private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
			 Int32::TryParse(txtCase->Text, display);

			 if (rBtnOll->Checked == true)
			 {
				 if (display > 57)
					 MessageBox::Show("Please choose a case number 1 through 57.");
				 else
				 {
					 count = display - 1;
					 txtCase->Text = display.ToString();
					 txtAlg->Text = ollAlgs[count];
					 pictureBoxOll->Image = imageListOll->Images[count];
				 }
			 }

			 else {
				 if (display > 21)
					 MessageBox::Show("Please choose a PLL case number 1 through 21.");
				 else
				 {
					 count = display - 1;
					 txtCase->Text = display.ToString();
					 txtAlg->Text = pllAlgs[count];
					 pictureBoxPll->Image = imageListPll->Images[count];
				 }
			 }	
		 }
private: System::Void ortegaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 ortega ^ form = gcnew ortega;
			 this->Hide();
			 form->ShowDialog();
		 }
};
}