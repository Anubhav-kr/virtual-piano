#pragma once

namespace piano {

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
	private: System::Windows::Forms::Button^ buttonC;
	protected:
	private: System::Windows::Forms::Button^ buttonD;
	private: System::Windows::Forms::Button^ buttonF;

	private: System::Windows::Forms::Button^ buttonE;
	private: System::Windows::Forms::Button^ buttonC1;

	private: System::Windows::Forms::Button^ buttonB;

	private: System::Windows::Forms::Button^ buttonA;

	private: System::Windows::Forms::Button^ buttonG;
	private: System::Windows::Forms::Button^ buttonF1;


	private: System::Windows::Forms::Button^ buttonE1;

	private: System::Windows::Forms::Button^ buttonD1;
	private: System::Windows::Forms::Button^ buttonCU;
	private: System::Windows::Forms::Button^ buttonDU;
	private: System::Windows::Forms::Button^ buttonDU1;
	private: System::Windows::Forms::Button^ buttonCU1;
	private: System::Windows::Forms::Button^ buttonGU;
	private: System::Windows::Forms::Button^ buttonFU;
	private: System::Windows::Forms::Button^ buttonBbU;


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
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->buttonE = (gcnew System::Windows::Forms::Button());
			this->buttonC1 = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonG = (gcnew System::Windows::Forms::Button());
			this->buttonF1 = (gcnew System::Windows::Forms::Button());
			this->buttonE1 = (gcnew System::Windows::Forms::Button());
			this->buttonD1 = (gcnew System::Windows::Forms::Button());
			this->buttonCU = (gcnew System::Windows::Forms::Button());
			this->buttonDU = (gcnew System::Windows::Forms::Button());
			this->buttonDU1 = (gcnew System::Windows::Forms::Button());
			this->buttonCU1 = (gcnew System::Windows::Forms::Button());
			this->buttonGU = (gcnew System::Windows::Forms::Button());
			this->buttonFU = (gcnew System::Windows::Forms::Button());
			this->buttonBbU = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonC
			// 
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(12, 13);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(89, 350);
			this->buttonC->TabIndex = 0;
			this->buttonC->Text = L"C";
			this->buttonC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// buttonD
			// 
			this->buttonD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonD->Location = System::Drawing::Point(99, 12);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(89, 350);
			this->buttonD->TabIndex = 1;
			this->buttonD->Text = L"D";
			this->buttonD->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonD->UseVisualStyleBackColor = true;
			this->buttonD->Click += gcnew System::EventHandler(this, &MyForm::buttonD_Click);
			// 
			// buttonF
			// 
			this->buttonF->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonF->Location = System::Drawing::Point(274, 13);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(89, 350);
			this->buttonF->TabIndex = 3;
			this->buttonF->Text = L"F";
			this->buttonF->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonF->UseVisualStyleBackColor = true;
			this->buttonF->Click += gcnew System::EventHandler(this, &MyForm::buttonF_Click);
			// 
			// buttonE
			// 
			this->buttonE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonE->Location = System::Drawing::Point(187, 14);
			this->buttonE->Name = L"buttonE";
			this->buttonE->Size = System::Drawing::Size(89, 350);
			this->buttonE->TabIndex = 2;
			this->buttonE->Text = L"E";
			this->buttonE->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonE->UseVisualStyleBackColor = true;
			this->buttonE->Click += gcnew System::EventHandler(this, &MyForm::buttonE_Click);
			// 
			// buttonC1
			// 
			this->buttonC1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC1->Location = System::Drawing::Point(623, 13);
			this->buttonC1->Name = L"buttonC1";
			this->buttonC1->Size = System::Drawing::Size(89, 350);
			this->buttonC1->TabIndex = 7;
			this->buttonC1->Text = L"C1";
			this->buttonC1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonC1->UseVisualStyleBackColor = true;
			this->buttonC1->Click += gcnew System::EventHandler(this, &MyForm::buttonC1_Click);
			// 
			// buttonB
			// 
			this->buttonB->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonB->Location = System::Drawing::Point(536, 14);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(89, 350);
			this->buttonB->TabIndex = 6;
			this->buttonB->Text = L"B";
			this->buttonB->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonB->UseVisualStyleBackColor = true;
			this->buttonB->Click += gcnew System::EventHandler(this, &MyForm::buttonB_Click);
			// 
			// buttonA
			// 
			this->buttonA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonA->Location = System::Drawing::Point(448, 12);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(89, 350);
			this->buttonA->TabIndex = 5;
			this->buttonA->Text = L"A";
			this->buttonA->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonA->UseVisualStyleBackColor = true;
			this->buttonA->Click += gcnew System::EventHandler(this, &MyForm::buttonA_Click);
			// 
			// buttonG
			// 
			this->buttonG->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonG->Location = System::Drawing::Point(361, 13);
			this->buttonG->Name = L"buttonG";
			this->buttonG->Size = System::Drawing::Size(89, 350);
			this->buttonG->TabIndex = 4;
			this->buttonG->Text = L"G";
			this->buttonG->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonG->UseVisualStyleBackColor = true;
			this->buttonG->Click += gcnew System::EventHandler(this, &MyForm::buttonG_Click);
			// 
			// buttonF1
			// 
			this->buttonF1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonF1->Location = System::Drawing::Point(884, 12);
			this->buttonF1->Name = L"buttonF1";
			this->buttonF1->Size = System::Drawing::Size(89, 350);
			this->buttonF1->TabIndex = 10;
			this->buttonF1->Text = L"F1";
			this->buttonF1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonF1->UseVisualStyleBackColor = true;
			this->buttonF1->Click += gcnew System::EventHandler(this, &MyForm::buttonF1_Click);
			// 
			// buttonE1
			// 
			this->buttonE1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonE1->Location = System::Drawing::Point(797, 13);
			this->buttonE1->Name = L"buttonE1";
			this->buttonE1->Size = System::Drawing::Size(89, 350);
			this->buttonE1->TabIndex = 9;
			this->buttonE1->Text = L"E1";
			this->buttonE1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonE1->UseVisualStyleBackColor = true;
			this->buttonE1->Click += gcnew System::EventHandler(this, &MyForm::buttonE1_Click);
			// 
			// buttonD1
			// 
			this->buttonD1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonD1->Location = System::Drawing::Point(709, 11);
			this->buttonD1->Name = L"buttonD1";
			this->buttonD1->Size = System::Drawing::Size(89, 350);
			this->buttonD1->TabIndex = 8;
			this->buttonD1->Text = L"D1";
			this->buttonD1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonD1->UseVisualStyleBackColor = true;
			this->buttonD1->Click += gcnew System::EventHandler(this, &MyForm::buttonD1_Click);
			// 
			// buttonCU
			// 
			this->buttonCU->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonCU->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCU->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonCU->Location = System::Drawing::Point(49, 14);
			this->buttonCU->Name = L"buttonCU";
			this->buttonCU->Size = System::Drawing::Size(99, 199);
			this->buttonCU->TabIndex = 11;
			this->buttonCU->Text = L"C#";
			this->buttonCU->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonCU->UseVisualStyleBackColor = false;
			this->buttonCU->Click += gcnew System::EventHandler(this, &MyForm::buttonCU_Click);
			// 
			// buttonDU
			// 
			this->buttonDU->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonDU->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDU->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonDU->Location = System::Drawing::Point(142, 14);
			this->buttonDU->Name = L"buttonDU";
			this->buttonDU->Size = System::Drawing::Size(99, 199);
			this->buttonDU->TabIndex = 12;
			this->buttonDU->Text = L"D#";
			this->buttonDU->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonDU->UseVisualStyleBackColor = false;
			this->buttonDU->Click += gcnew System::EventHandler(this, &MyForm::buttonDU_Click);
			// 
			// buttonDU1
			// 
			this->buttonDU1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonDU1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDU1->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonDU1->Location = System::Drawing::Point(749, 14);
			this->buttonDU1->Name = L"buttonDU1";
			this->buttonDU1->Size = System::Drawing::Size(107, 199);
			this->buttonDU1->TabIndex = 14;
			this->buttonDU1->Text = L"D#1";
			this->buttonDU1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonDU1->UseVisualStyleBackColor = false;
			this->buttonDU1->Click += gcnew System::EventHandler(this, &MyForm::buttonDU1_Click);
			// 
			// buttonCU1
			// 
			this->buttonCU1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonCU1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCU1->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonCU1->Location = System::Drawing::Point(656, 14);
			this->buttonCU1->Name = L"buttonCU1";
			this->buttonCU1->Size = System::Drawing::Size(107, 199);
			this->buttonCU1->TabIndex = 13;
			this->buttonCU1->Text = L"C#1";
			this->buttonCU1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonCU1->UseVisualStyleBackColor = false;
			this->buttonCU1->Click += gcnew System::EventHandler(this, &MyForm::buttonCU1_Click);
			// 
			// buttonGU
			// 
			this->buttonGU->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonGU->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonGU->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonGU->Location = System::Drawing::Point(415, 14);
			this->buttonGU->Name = L"buttonGU";
			this->buttonGU->Size = System::Drawing::Size(99, 199);
			this->buttonGU->TabIndex = 16;
			this->buttonGU->Text = L"G#";
			this->buttonGU->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonGU->UseVisualStyleBackColor = false;
			this->buttonGU->Click += gcnew System::EventHandler(this, &MyForm::buttonGU_Click);
			// 
			// buttonFU
			// 
			this->buttonFU->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonFU->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFU->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonFU->Location = System::Drawing::Point(322, 14);
			this->buttonFU->Name = L"buttonFU";
			this->buttonFU->Size = System::Drawing::Size(99, 199);
			this->buttonFU->TabIndex = 15;
			this->buttonFU->Text = L"F#";
			this->buttonFU->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonFU->UseVisualStyleBackColor = false;
			this->buttonFU->Click += gcnew System::EventHandler(this, &MyForm::buttonFU_Click);
			// 
			// buttonBbU
			// 
			this->buttonBbU->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonBbU->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBbU->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonBbU->Location = System::Drawing::Point(509, 14);
			this->buttonBbU->Name = L"buttonBbU";
			this->buttonBbU->Size = System::Drawing::Size(99, 199);
			this->buttonBbU->TabIndex = 17;
			this->buttonBbU->Text = L"Bb";
			this->buttonBbU->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->buttonBbU->UseVisualStyleBackColor = false;
			this->buttonBbU->Click += gcnew System::EventHandler(this, &MyForm::buttonBbU_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 371);
			this->Controls->Add(this->buttonBbU);
			this->Controls->Add(this->buttonGU);
			this->Controls->Add(this->buttonFU);
			this->Controls->Add(this->buttonDU1);
			this->Controls->Add(this->buttonCU1);
			this->Controls->Add(this->buttonDU);
			this->Controls->Add(this->buttonCU);
			this->Controls->Add(this->buttonF1);
			this->Controls->Add(this->buttonE1);
			this->Controls->Add(this->buttonD1);
			this->Controls->Add(this->buttonC1);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->buttonG);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->buttonE);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonC);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//C.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonD_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//D.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonE_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//E.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonF_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//F.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonG_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//G.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonA_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//A.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonB_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//B.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonC1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//C1.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonD1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//D1.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonE1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//E1.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonF1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//F1.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonCU_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//C_s.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonDU_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//D_s.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonFU_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//F_s.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonGU_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//G_s.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonBbU_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//Bb.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonCU1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//C_s1.wav");
	player->Load();
	player->PlaySync();
}
private: System::Void buttonDU1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer("C://Users//Anubhav//source//repos//piano//MusicNotes//D_s1.wav");
	player->Load();
	player->PlaySync();
}
};
}
