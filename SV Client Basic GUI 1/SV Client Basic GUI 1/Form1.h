#pragma once
#include "client.h"

namespace SVClientBasicGUI1 {

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
	private: System::Windows::Forms::Button^  IDC_MAIN_BUTTON;
	protected: 

	private: System::Windows::Forms::TextBox^  IDC_EDIT_OUT;

	private: System::Windows::Forms::TextBox^  IDC_EDIT_IN;

	protected: 

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
			this->IDC_MAIN_BUTTON = (gcnew System::Windows::Forms::Button());
			this->IDC_EDIT_OUT = (gcnew System::Windows::Forms::TextBox());
			this->IDC_EDIT_IN = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// IDC_MAIN_BUTTON
			// 
			this->IDC_MAIN_BUTTON->Location = System::Drawing::Point(130, 190);
			this->IDC_MAIN_BUTTON->Name = L"IDC_MAIN_BUTTON";
			this->IDC_MAIN_BUTTON->Size = System::Drawing::Size(75, 23);
			this->IDC_MAIN_BUTTON->TabIndex = 0;
			this->IDC_MAIN_BUTTON->Text = L"button1";
			this->IDC_MAIN_BUTTON->UseVisualStyleBackColor = true;
			// 
			// IDC_EDIT_OUT
			// 
			this->IDC_EDIT_OUT->Location = System::Drawing::Point(146, 71);
			this->IDC_EDIT_OUT->Multiline = true;
			this->IDC_EDIT_OUT->Name = L"IDC_EDIT_OUT";
			this->IDC_EDIT_OUT->Size = System::Drawing::Size(100, 68);
			this->IDC_EDIT_OUT->TabIndex = 1;
			// 
			// IDC_EDIT_IN
			// 
			this->IDC_EDIT_IN->Location = System::Drawing::Point(40, 71);
			this->IDC_EDIT_IN->Multiline = true;
			this->IDC_EDIT_IN->Name = L"IDC_EDIT_IN";
			this->IDC_EDIT_IN->Size = System::Drawing::Size(100, 68);
			this->IDC_EDIT_IN->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->IDC_EDIT_IN);
			this->Controls->Add(this->IDC_EDIT_OUT);
			this->Controls->Add(this->IDC_MAIN_BUTTON);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};

}

