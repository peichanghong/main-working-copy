#pragma once
#include "Settings.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TextBox^  outputBox;
    private: System::Windows::Forms::TextBox^  InputBox;
    protected: 


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
            this->outputBox = (gcnew System::Windows::Forms::TextBox());
            this->InputBox = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // outputBox
            // 
            this->outputBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->outputBox->Location = System::Drawing::Point(12, 12);
            this->outputBox->Multiline = true;
            this->outputBox->Name = L"outputBox";
            this->outputBox->ReadOnly = true;
            this->outputBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->outputBox->Size = System::Drawing::Size(250, 160);
            this->outputBox->TabIndex = 0;
            this->outputBox->TextChanged += gcnew System::EventHandler(this, &GUI::textBox1_TextChanged);
            // 
            // InputBox
            // 
            this->InputBox->Location = System::Drawing::Point(12, 203);
            this->InputBox->Name = L"InputBox";
            this->InputBox->Size = System::Drawing::Size(199, 20);
            this->InputBox->TabIndex = 1;
            this->InputBox->TextChanged += gcnew System::EventHandler(this, &GUI::textBox1_TextChanged);
            // 
            // GUI
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 261);
            this->Controls->Add(this->InputBox);
            this->Controls->Add(this->outputBox);
            this->Name = L"GUI";
            this->Text = L"GUI";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
                 string input;
                 input = System::Convert::ToChar(InputBox->Text);
                     
                 outputBox->Text = System::Convert::ToChar(input);
             }
    };
}


