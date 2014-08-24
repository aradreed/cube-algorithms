#pragma once

namespace Cubing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for help
	/// </summary>
	public ref class help : public System::Windows::Forms::Form
	{
	public:
		help(void)
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
		~help()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  lblVersion;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblAbout;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::PictureBox^  pictureBoxIcon;
	private: System::Windows::Forms::Label^  lblContact;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(help::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblVersion = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblAbout = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBoxIcon = (gcnew System::Windows::Forms::PictureBox());
			this->lblContact = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Oll/Pll Algorithm Trainer";
			// 
			// lblVersion
			// 
			this->lblVersion->AutoSize = true;
			this->lblVersion->Location = System::Drawing::Point(154, 42);
			this->lblVersion->Name = L"lblVersion";
			this->lblVersion->Size = System::Drawing::Size(35, 13);
			this->lblVersion->TabIndex = 1;
			this->lblVersion->Text = L"label2";
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(12, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(383, 2);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// lblAbout
			// 
			this->lblAbout->AutoSize = true;
			this->lblAbout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblAbout->Location = System::Drawing::Point(23, 91);
			this->lblAbout->Name = L"lblAbout";
			this->lblAbout->Size = System::Drawing::Size(35, 15);
			this->lblAbout->TabIndex = 3;
			this->lblAbout->Text = L"label3";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(23, 196);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(87, 16);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"badmephisto";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &help::linkLabel1_LinkClicked);
			// 
			// pictureBoxIcon
			// 
			this->pictureBoxIcon->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxIcon.Image")));
			this->pictureBoxIcon->Location = System::Drawing::Point(5, 9);
			this->pictureBoxIcon->Name = L"pictureBoxIcon";
			this->pictureBoxIcon->Size = System::Drawing::Size(58, 65);
			this->pictureBoxIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxIcon->TabIndex = 5;
			this->pictureBoxIcon->TabStop = false;
			// 
			// lblContact
			// 
			this->lblContact->AutoSize = true;
			this->lblContact->Location = System::Drawing::Point(195, 196);
			this->lblContact->Name = L"lblContact";
			this->lblContact->Size = System::Drawing::Size(35, 13);
			this->lblContact->TabIndex = 6;
			this->lblContact->Text = L"label3";
			// 
			// help
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 237);
			this->Controls->Add(this->lblContact);
			this->Controls->Add(this->pictureBoxIcon);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->lblAbout);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblVersion);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"help";
			this->Text = L"About";
			this->Load += gcnew System::EventHandler(this, &help::help_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxIcon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static String^ version = "Version 1.0 \r\n Released on January 2013";
	private: System::Void help_Load(System::Object^  sender, System::EventArgs^  e) {
				 lblVersion->Text = version;

				 lblAbout->Text = "This program was developed on: Microsoft Visual Studio C++ \r\n"
					 "by Ninwinz \r\n \r\n Icon designed by Austin Crane \r\n Case pictures created by badmephisto \r\n \r\n"
					 "Special thanks to:";

				 lblContact->Text = "Questions, comments, or suggestions? \r\n Contact me at: ninwinz@gmail.com";
			 }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 linkLabel1->LinkVisited = true;
				 System::Diagnostics::Process::Start("http://badmephisto.com");
			 }
};
}
