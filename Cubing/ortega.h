#pragma once

#include "help.h"

namespace Cubing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ortega
	/// </summary>
	public ref class ortega : public System::Windows::Forms::Form
	{
	public:
		ortega(void)
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
		~ortega()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnSearch;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rBtnOll;
	private: System::Windows::Forms::RadioButton^  rBtnPbl;

	private: System::Windows::Forms::ImageList^  imageListPll;
	private: System::Windows::Forms::PictureBox^  pictureBoxPbl;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtAlg;
	private: System::Windows::Forms::TextBox^  txtCase;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  comingSoonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ollToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ImageList^  imageListOll;
	private: System::Windows::Forms::PictureBox^  pictureBoxOll;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::ImageList^  imageListOrtegaOll;
	private: System::Windows::Forms::ImageList^  imageListPbl;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ortega::typeid));
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rBtnOll = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnPbl = (gcnew System::Windows::Forms::RadioButton());
			this->imageListPll = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBoxPbl = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAlg = (gcnew System::Windows::Forms::TextBox());
			this->txtCase = (gcnew System::Windows::Forms::TextBox());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comingSoonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ollToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageListOll = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBoxOll = (gcnew System::Windows::Forms::PictureBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->imageListOrtegaOll = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageListPbl = (gcnew System::Windows::Forms::ImageList(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPbl))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxOll))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(388, 44);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(77, 28);
			this->btnSearch->TabIndex = 24;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rBtnOll);
			this->groupBox1->Controls->Add(this->rBtnPbl);
			this->groupBox1->Location = System::Drawing::Point(15, 260);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(128, 96);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Modes";
			// 
			// rBtnOll
			// 
			this->rBtnOll->AutoSize = true;
			this->rBtnOll->Location = System::Drawing::Point(23, 23);
			this->rBtnOll->Margin = System::Windows::Forms::Padding(4);
			this->rBtnOll->Name = L"rBtnOll";
			this->rBtnOll->Size = System::Drawing::Size(56, 21);
			this->rBtnOll->TabIndex = 13;
			this->rBtnOll->Text = L"OLL";
			this->rBtnOll->UseVisualStyleBackColor = true;
			// 
			// rBtnPbl
			// 
			this->rBtnPbl->AutoSize = true;
			this->rBtnPbl->Location = System::Drawing::Point(23, 52);
			this->rBtnPbl->Margin = System::Windows::Forms::Padding(4);
			this->rBtnPbl->Name = L"rBtnPbl";
			this->rBtnPbl->Size = System::Drawing::Size(55, 21);
			this->rBtnPbl->TabIndex = 11;
			this->rBtnPbl->Text = L"PBL";
			this->rBtnPbl->UseVisualStyleBackColor = true;
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
			// pictureBoxPbl
			// 
			this->pictureBoxPbl->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxPbl->Location = System::Drawing::Point(225, 108);
			this->pictureBoxPbl->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxPbl->Name = L"pictureBoxPbl";
			this->pictureBoxPbl->Size = System::Drawing::Size(225, 225);
			this->pictureBoxPbl->TabIndex = 22;
			this->pictureBoxPbl->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 394);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 39);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Algorithm:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(207, 50);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 17);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Case Number:";
			// 
			// txtAlg
			// 
			this->txtAlg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtAlg->Location = System::Drawing::Point(195, 363);
			this->txtAlg->Margin = System::Windows::Forms::Padding(4);
			this->txtAlg->Multiline = true;
			this->txtAlg->Name = L"txtAlg";
			this->txtAlg->ReadOnly = true;
			this->txtAlg->Size = System::Drawing::Size(455, 68);
			this->txtAlg->TabIndex = 19;
			// 
			// txtCase
			// 
			this->txtCase->Location = System::Drawing::Point(313, 47);
			this->txtCase->Margin = System::Windows::Forms::Padding(4);
			this->txtCase->Name = L"txtCase";
			this->txtCase->Size = System::Drawing::Size(51, 22);
			this->txtCase->TabIndex = 18;
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(119, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(110, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// comingSoonToolStripMenuItem
			// 
			this->comingSoonToolStripMenuItem->Name = L"comingSoonToolStripMenuItem";
			this->comingSoonToolStripMenuItem->Size = System::Drawing::Size(172, 24);
			this->comingSoonToolStripMenuItem->Text = L"Coming Soon!";
			// 
			// ollToolStripMenuItem
			// 
			this->ollToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->comingSoonToolStripMenuItem});
			this->ollToolStripMenuItem->Name = L"ollToolStripMenuItem";
			this->ollToolStripMenuItem->Size = System::Drawing::Size(110, 24);
			this->ollToolStripMenuItem->Text = L"View";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ollToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
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
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
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
			// pictureBoxOll
			// 
			this->pictureBoxOll->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxOll->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBoxOll->Location = System::Drawing::Point(225, 108);
			this->pictureBoxOll->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxOll->Name = L"pictureBoxOll";
			this->pictureBoxOll->Size = System::Drawing::Size(225, 225);
			this->pictureBoxOll->TabIndex = 16;
			this->pictureBoxOll->TabStop = false;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(23, 214);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(100, 28);
			this->btnBack->TabIndex = 15;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &ortega::btnBack_Click);
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(497, 214);
			this->btnNext->Margin = System::Windows::Forms::Padding(4);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(100, 28);
			this->btnNext->TabIndex = 14;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &ortega::btnNext_Click);
			// 
			// imageListOrtegaOll
			// 
			this->imageListOrtegaOll->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageListOrtegaOll.ImageStream")));
			this->imageListOrtegaOll->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListOrtegaOll->Images->SetKeyName(0, L"olla.gif");
			this->imageListOrtegaOll->Images->SetKeyName(1, L"ollh.gif");
			this->imageListOrtegaOll->Images->SetKeyName(2, L"olll.gif");
			this->imageListOrtegaOll->Images->SetKeyName(3, L"ollpi.gif");
			this->imageListOrtegaOll->Images->SetKeyName(4, L"olls.gif");
			this->imageListOrtegaOll->Images->SetKeyName(5, L"ollt.gif");
			this->imageListOrtegaOll->Images->SetKeyName(6, L"ollu.gif");
			// 
			// imageListPbl
			// 
			this->imageListPbl->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageListPbl.ImageStream")));
			this->imageListPbl->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListPbl->Images->SetKeyName(0, L"pbl-dadj.gif");
			this->imageListPbl->Images->SetKeyName(1, L"pbl-ddiag.gif");
			this->imageListPbl->Images->SetKeyName(2, L"pbl-uadj.gif");
			this->imageListPbl->Images->SetKeyName(3, L"pbl-uadj-dadj.gif");
			this->imageListPbl->Images->SetKeyName(4, L"pbl-uadj-ddiag.gif");
			this->imageListPbl->Images->SetKeyName(5, L"pbl-udiag.gif");
			this->imageListPbl->Images->SetKeyName(6, L"pbl-udiag-dadj.gif");
			this->imageListPbl->Images->SetKeyName(7, L"pbl-udiag-ddiag.gif");
			// 
			// ortega
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 444);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBoxPbl);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAlg);
			this->Controls->Add(this->txtCase);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBoxOll);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnNext);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ortega";
			this->Text = L"2x2 Ortega Method";
			this->Load += gcnew System::EventHandler(this, &ortega::ortega_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPbl))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxOll))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: array<String^>^ ortegaOll;
		private: array<String^>^ ortegaPbl;
		int count, display;
	private: System::Void ortega_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Set oll and pbl algs corresponding to count

				 ortegaOll = gcnew array<String^>(7);
				 ortegaPbl = gcnew array<String^>(8);

				 ortegaOll->SetValue("F (R U R' U') F'", 0);
				 ortegaOll->SetValue("(R U R' U') (R' F R F')", 1);
				 ortegaOll->SetValue("F (R U') (R' U' R U) (R' F')", 2);
				 ortegaOll->SetValue("(R U R' U) (R U2 R')", 3);
				 ortegaOll->SetValue("(R U2 R' U') (R U' R')", 4);
				 ortegaOll->SetValue("F (R U R' U') (R U R' U') F'", 5);
				 ortegaOll->SetValue("R2 U2 R U2 R2", 6);

				 ortegaPbl->SetValue("(R U R' U') (R' F) (R2 U') (R' U' R U) (R' F')", 0);
				 ortegaPbl->SetValue("x2 (R U R' U') (R' F) (R2 U') (R' U' R U) (R' F')", 1);
				 ortegaPbl->SetValue("(F R U') (R' U' R U) (R' F') (R U R' U') (R' F R F')", 2);
				 ortegaPbl->SetValue("z2 y (F R U') (R' U' R U) (R' F') (R U R' U') (R' F R F')", 3);
				 ortegaPbl->SetValue("(R2 U' R2) (U' D') (R2 U' R2)", 4);
				 ortegaPbl->SetValue("(R U' R) F2 (R' U R')", 5);
				 ortegaPbl->SetValue("L D' L) F2 (L' D L')", 6);
				 ortegaPbl->SetValue("R2 F2 R2", 7);


				 rBtnOll->Checked = true;
				 pictureBoxOll->Visible = true;
				 pictureBoxPbl->Visible = false;
				 pictureBoxOll->Image = imageListOrtegaOll->Images[0];
				 txtAlg->Text = ortegaOll[0];
			 }
private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (rBtnOll->Checked == true) {

				if (count < imageListOrtegaOll->Images->Count - 1) {
					count++;
					pictureBoxOll->Image = imageListOrtegaOll->Images[count];
				}
				else {
					count = 0;
					pictureBoxOll->Image = imageListOrtegaOll->Images[count];
				}

			 txtAlg->Text = ortegaOll[count];
			 }

			 else if (rBtnPbl->Checked == true) { // next button if rBtnPll is checked
				 if (count < imageListPbl->Images->Count - 1)
					 count++;
				 else 
					 count = 0;

					 pictureBoxPbl->Image = imageListPll->Images[count];
					 txtAlg->Text = ortegaPbl[count];
			 }
				 
			 display = count + 1;
			 txtCase->Text = display.ToString(); 
			 }

		 private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {

				  }
};
}
