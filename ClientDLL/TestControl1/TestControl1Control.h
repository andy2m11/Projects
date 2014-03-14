#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TestControl1 {

	/// <summary>
	/// Summary for TestControl1Control
	/// </summary>
	public ref class TestControl1Control : public System::Windows::Forms::UserControl
	{
	public:
		TestControl1Control(void)
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
		~TestControl1Control()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  profileNameCB;
	protected: 
	private: System::Windows::Forms::Button^  okButton;
	private: System::Windows::Forms::NumericUpDown^  samplesPerStepUpDown;
	private: System::Windows::Forms::NumericUpDown^  stepsPerSweepUpDown;
	private: System::Windows::Forms::NumericUpDown^  sweepDelayUpDown;
	private: System::Windows::Forms::NumericUpDown^  numberOfSweepsUpDown;
	private: System::Windows::Forms::NumericUpDown^  minFrequencyUpDown;
	private: System::Windows::Forms::NumericUpDown^  maxFrequencyUpDown;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->profileNameCB = (gcnew System::Windows::Forms::ComboBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->samplesPerStepUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->stepsPerSweepUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->sweepDelayUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->numberOfSweepsUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->minFrequencyUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->maxFrequencyUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->samplesPerStepUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->stepsPerSweepUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sweepDelayUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numberOfSweepsUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->minFrequencyUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->maxFrequencyUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// profileNameCB
			// 
			this->profileNameCB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->profileNameCB->FormattingEnabled = true;
			this->profileNameCB->Location = System::Drawing::Point(132, 66);
			this->profileNameCB->Name = L"profileNameCB";
			this->profileNameCB->Size = System::Drawing::Size(107, 21);
			this->profileNameCB->TabIndex = 8;
			this->profileNameCB->SelectedIndexChanged += gcnew System::EventHandler(this, &TestControl1Control::profileNameCB_SelectedIndexChanged);
			// 
			// okButton
			// 
			this->okButton->AutoSize = true;
			this->okButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->okButton->Location = System::Drawing::Point(171, 250);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(32, 23);
			this->okButton->TabIndex = 38;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &TestControl1Control::okButton_Click);
			// 
			// samplesPerStepUpDown
			// 
			this->samplesPerStepUpDown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->samplesPerStepUpDown->Location = System::Drawing::Point(149, 224);
			this->samplesPerStepUpDown->Name = L"samplesPerStepUpDown";
			this->samplesPerStepUpDown->Size = System::Drawing::Size(82, 20);
			this->samplesPerStepUpDown->TabIndex = 37;
			this->samplesPerStepUpDown->ValueChanged += gcnew System::EventHandler(this, &TestControl1Control::samplesPerStepUpDown_ValueChanged);
			// 
			// stepsPerSweepUpDown
			// 
			this->stepsPerSweepUpDown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->stepsPerSweepUpDown->Location = System::Drawing::Point(149, 199);
			this->stepsPerSweepUpDown->Name = L"stepsPerSweepUpDown";
			this->stepsPerSweepUpDown->Size = System::Drawing::Size(82, 20);
			this->stepsPerSweepUpDown->TabIndex = 36;
			this->stepsPerSweepUpDown->ValueChanged += gcnew System::EventHandler(this, &TestControl1Control::stepsPerSweepUpDown_ValueChanged);
			// 
			// sweepDelayUpDown
			// 
			this->sweepDelayUpDown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->sweepDelayUpDown->Location = System::Drawing::Point(179, 171);
			this->sweepDelayUpDown->Name = L"sweepDelayUpDown";
			this->sweepDelayUpDown->Size = System::Drawing::Size(82, 20);
			this->sweepDelayUpDown->TabIndex = 35;
			this->sweepDelayUpDown->ValueChanged += gcnew System::EventHandler(this, &TestControl1Control::sweepDelayUpDown_ValueChanged);
			// 
			// numberOfSweepsUpDown
			// 
			this->numberOfSweepsUpDown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->numberOfSweepsUpDown->AutoSize = true;
			this->numberOfSweepsUpDown->Location = System::Drawing::Point(149, 145);
			this->numberOfSweepsUpDown->Name = L"numberOfSweepsUpDown";
			this->numberOfSweepsUpDown->Size = System::Drawing::Size(82, 20);
			this->numberOfSweepsUpDown->TabIndex = 34;
			this->numberOfSweepsUpDown->ValueChanged += gcnew System::EventHandler(this, &TestControl1Control::numberOfSweepsUpDown_ValueChanged);
			// 
			// minFrequencyUpDown
			// 
			this->minFrequencyUpDown->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->minFrequencyUpDown->AutoSize = true;
			this->minFrequencyUpDown->Location = System::Drawing::Point(149, 119);
			this->minFrequencyUpDown->Name = L"minFrequencyUpDown";
			this->minFrequencyUpDown->Size = System::Drawing::Size(82, 20);
			this->minFrequencyUpDown->TabIndex = 33;
			this->minFrequencyUpDown->ValueChanged += gcnew System::EventHandler(this, &TestControl1Control::minFrequencyUpDown_ValueChanged);
			// 
			// maxFrequencyUpDown
			// 
			this->maxFrequencyUpDown->AutoSize = true;
			this->maxFrequencyUpDown->Location = System::Drawing::Point(149, 93);
			this->maxFrequencyUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {255, 0, 0, 0});
			this->maxFrequencyUpDown->Name = L"maxFrequencyUpDown";
			this->maxFrequencyUpDown->Size = System::Drawing::Size(82, 20);
			this->maxFrequencyUpDown->TabIndex = 32;
			this->maxFrequencyUpDown->ValueChanged += gcnew System::EventHandler(this, &TestControl1Control::maxFrequencyUpDown_ValueChanged);
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(59, 252);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(91, 23);
			this->saveButton->TabIndex = 31;
			this->saveButton->Text = L"Save Settings";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &TestControl1Control::saveButton_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(56, 226);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Samples/Step:";
			this->label7->Click += gcnew System::EventHandler(this, &TestControl1Control::label7_Click);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(56, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Steps/Sweep:";
			this->label6->Click += gcnew System::EventHandler(this, &TestControl1Control::label6_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Delay Between Sweeps:";
			this->label5->Click += gcnew System::EventHandler(this, &TestControl1Control::label5_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"# of Sweeps:";
			this->label4->Click += gcnew System::EventHandler(this, &TestControl1Control::label4_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Min. Frequency:";
			this->label3->Click += gcnew System::EventHandler(this, &TestControl1Control::label3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Max. Frequency:";
			this->label2->Click += gcnew System::EventHandler(this, &TestControl1Control::label2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Profile Name:";
			this->label1->Click += gcnew System::EventHandler(this, &TestControl1Control::label1_Click);
			// 
			// TestControl1Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->samplesPerStepUpDown);
			this->Controls->Add(this->stepsPerSweepUpDown);
			this->Controls->Add(this->sweepDelayUpDown);
			this->Controls->Add(this->numberOfSweepsUpDown);
			this->Controls->Add(this->minFrequencyUpDown);
			this->Controls->Add(this->maxFrequencyUpDown);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->profileNameCB);
			this->Name = L"TestControl1Control";
			this->Size = System::Drawing::Size(316, 340);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->samplesPerStepUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->stepsPerSweepUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sweepDelayUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numberOfSweepsUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->minFrequencyUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->maxFrequencyUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void maxFrequencyUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void samplesPerStepUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void stepsPerSweepUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void sweepDelayUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void numberOfSweepsUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void minFrequencyUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void profileNameCB_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
