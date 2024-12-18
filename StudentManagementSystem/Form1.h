#pragma once
#include "AuthUser.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Label^ headingLabel;
		System::Windows::Forms::TabControl^ tabControl;
		System::Windows::Forms::TabPage^ loginTab;
		System::Windows::Forms::TabPage^ signupTab;

		// Controls for login form
		System::Windows::Forms::Label^ loginLabelUsername;
		System::Windows::Forms::TextBox^ loginTextboxUsername;
		System::Windows::Forms::Label^ loginLabelPassword;
		System::Windows::Forms::TextBox^ loginTextboxPassword;
		System::Windows::Forms::Button^ loginButton;

		// Controls for sign-up form
		System::Windows::Forms::Label^ signupLabelUsername;
		System::Windows::Forms::TextBox^ signupTextboxUsername;
		System::Windows::Forms::Label^ signupLabelPassword;
		System::Windows::Forms::TextBox^ signupTextboxPassword;
		System::Windows::Forms::Label^ signupLabelConfirmPassword;
		System::Windows::Forms::TextBox^ signupTextboxConfirmPassword;
	private: System::Windows::Forms::TabPage^ tabPage1;
		   System::Windows::Forms::Button^ signupButton;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->headingLabel = (gcnew System::Windows::Forms::Label());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->loginTab = (gcnew System::Windows::Forms::TabPage());
			this->loginLabelUsername = (gcnew System::Windows::Forms::Label());
			this->loginTextboxUsername = (gcnew System::Windows::Forms::TextBox());
			this->loginLabelPassword = (gcnew System::Windows::Forms::Label());
			this->loginTextboxPassword = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->signupTab = (gcnew System::Windows::Forms::TabPage());
			this->signupLabelUsername = (gcnew System::Windows::Forms::Label());
			this->signupTextboxUsername = (gcnew System::Windows::Forms::TextBox());
			this->signupLabelPassword = (gcnew System::Windows::Forms::Label());
			this->signupTextboxPassword = (gcnew System::Windows::Forms::TextBox());
			this->signupLabelConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->signupTextboxConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->signupButton = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl->SuspendLayout();
			this->loginTab->SuspendLayout();
			this->signupTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// headingLabel
			// 
			this->headingLabel->AutoSize = true;
			this->headingLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->headingLabel->Location = System::Drawing::Point(23, 23);
			this->headingLabel->Name = L"headingLabel";
			this->headingLabel->Size = System::Drawing::Size(281, 24);
			this->headingLabel->TabIndex = 0;
			this->headingLabel->Text = L"Student Management System";
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->loginTab);
			this->tabControl->Controls->Add(this->signupTab);
			this->tabControl->Controls->Add(this->tabPage1);
			this->tabControl->Location = System::Drawing::Point(23, 59);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(374, 256);
			this->tabControl->TabIndex = 1;
			// 
			// loginTab
			// 
			this->loginTab->Controls->Add(this->loginLabelUsername);
			this->loginTab->Controls->Add(this->loginTextboxUsername);
			this->loginTab->Controls->Add(this->loginLabelPassword);
			this->loginTab->Controls->Add(this->loginTextboxPassword);
			this->loginTab->Controls->Add(this->loginButton);
			this->loginTab->Location = System::Drawing::Point(4, 22);
			this->loginTab->Name = L"loginTab";
			this->loginTab->Size = System::Drawing::Size(366, 230);
			this->loginTab->TabIndex = 0;
			this->loginTab->Text = L"Login";
			this->loginTab->UseVisualStyleBackColor = true;
			// 
			// loginLabelUsername
			// 
			this->loginLabelUsername->AutoSize = true;
			this->loginLabelUsername->Location = System::Drawing::Point(10, 20);
			this->loginLabelUsername->Name = L"loginLabelUsername";
			this->loginLabelUsername->Size = System::Drawing::Size(58, 13);
			this->loginLabelUsername->TabIndex = 0;
			this->loginLabelUsername->Text = L"Username:";
			// 
			// loginTextboxUsername
			// 
			this->loginTextboxUsername->Location = System::Drawing::Point(100, 20);
			this->loginTextboxUsername->Name = L"loginTextboxUsername";
			this->loginTextboxUsername->Size = System::Drawing::Size(100, 20);
			this->loginTextboxUsername->TabIndex = 1;
			// 
			// loginLabelPassword
			// 
			this->loginLabelPassword->AutoSize = true;
			this->loginLabelPassword->Location = System::Drawing::Point(10, 60);
			this->loginLabelPassword->Name = L"loginLabelPassword";
			this->loginLabelPassword->Size = System::Drawing::Size(56, 13);
			this->loginLabelPassword->TabIndex = 2;
			this->loginLabelPassword->Text = L"Password:";
			// 
			// loginTextboxPassword
			// 
			this->loginTextboxPassword->Location = System::Drawing::Point(100, 60);
			this->loginTextboxPassword->Name = L"loginTextboxPassword";
			this->loginTextboxPassword->Size = System::Drawing::Size(100, 20);
			this->loginTextboxPassword->TabIndex = 3;
			// 
			// loginButton
			// 
			this->loginButton->Location = System::Drawing::Point(13, 96);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(75, 23);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Login";
			this->loginButton->Click += gcnew System::EventHandler(this, &Form1::loginButton_Click);
			// 
			// signupTab
			// 
			this->signupTab->Controls->Add(this->signupLabelUsername);
			this->signupTab->Controls->Add(this->signupTextboxUsername);
			this->signupTab->Controls->Add(this->signupLabelPassword);
			this->signupTab->Controls->Add(this->signupTextboxPassword);
			this->signupTab->Controls->Add(this->signupLabelConfirmPassword);
			this->signupTab->Controls->Add(this->signupTextboxConfirmPassword);
			this->signupTab->Controls->Add(this->signupButton);
			this->signupTab->Location = System::Drawing::Point(4, 22);
			this->signupTab->Name = L"signupTab";
			this->signupTab->Size = System::Drawing::Size(366, 230);
			this->signupTab->TabIndex = 1;
			this->signupTab->Text = L"Sign Up";
			this->signupTab->UseVisualStyleBackColor = true;
			// 
			// signupLabelUsername
			// 
			this->signupLabelUsername->AutoSize = true;
			this->signupLabelUsername->Location = System::Drawing::Point(10, 20);
			this->signupLabelUsername->Name = L"signupLabelUsername";
			this->signupLabelUsername->Size = System::Drawing::Size(58, 13);
			this->signupLabelUsername->TabIndex = 0;
			this->signupLabelUsername->Text = L"Username:";
			// 
			// signupTextboxUsername
			// 
			this->signupTextboxUsername->Location = System::Drawing::Point(120, 20);
			this->signupTextboxUsername->Name = L"signupTextboxUsername";
			this->signupTextboxUsername->Size = System::Drawing::Size(100, 20);
			this->signupTextboxUsername->TabIndex = 1;
			// 
			// signupLabelPassword
			// 
			this->signupLabelPassword->AutoSize = true;
			this->signupLabelPassword->Location = System::Drawing::Point(10, 60);
			this->signupLabelPassword->Name = L"signupLabelPassword";
			this->signupLabelPassword->Size = System::Drawing::Size(56, 13);
			this->signupLabelPassword->TabIndex = 2;
			this->signupLabelPassword->Text = L"Password:";
			// 
			// signupTextboxPassword
			// 
			this->signupTextboxPassword->Location = System::Drawing::Point(120, 60);
			this->signupTextboxPassword->Name = L"signupTextboxPassword";
			this->signupTextboxPassword->Size = System::Drawing::Size(100, 20);
			this->signupTextboxPassword->TabIndex = 3;
			// 
			// signupLabelConfirmPassword
			// 
			this->signupLabelConfirmPassword->AutoSize = true;
			this->signupLabelConfirmPassword->Location = System::Drawing::Point(10, 100);
			this->signupLabelConfirmPassword->Name = L"signupLabelConfirmPassword";
			this->signupLabelConfirmPassword->Size = System::Drawing::Size(94, 13);
			this->signupLabelConfirmPassword->TabIndex = 4;
			this->signupLabelConfirmPassword->Text = L"Confirm Password:";
			// 
			// signupTextboxConfirmPassword
			// 
			this->signupTextboxConfirmPassword->Location = System::Drawing::Point(120, 100);
			this->signupTextboxConfirmPassword->Name = L"signupTextboxConfirmPassword";
			this->signupTextboxConfirmPassword->Size = System::Drawing::Size(100, 20);
			this->signupTextboxConfirmPassword->TabIndex = 5;
			// 
			// signupButton
			// 
			this->signupButton->Location = System::Drawing::Point(80, 140);
			this->signupButton->Name = L"signupButton";
			this->signupButton->Size = System::Drawing::Size(75, 23);
			this->signupButton->TabIndex = 6;
			this->signupButton->Text = L"Sign Up";
			this->signupButton->Click += gcnew System::EventHandler(this, &Form1::signupButton_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(366, 230);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Student Dashboard";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(413, 327);
			this->Controls->Add(this->headingLabel);
			this->Controls->Add(this->tabControl);
			this->Name = L"Form1";
			this->Text = L"Student Management System";
			this->tabControl->ResumeLayout(false);
			this->loginTab->ResumeLayout(false);
			this->loginTab->PerformLayout();
			this->signupTab->ResumeLayout(false);
			this->signupTab->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void signupButton_Click(System::Object^ sender, System::EventArgs^ e) {
			// Directly convert System::String^ to std::string
			std::string username = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(signupTextboxUsername->Text).ToPointer());
			std::string password = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(signupTextboxPassword->Text).ToPointer());
			std::string confirmPassword = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(signupTextboxConfirmPassword->Text).ToPointer());

			if (password != confirmPassword) {
				MessageBox::Show("Passwords do not match.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			AuthUser user(username, password);
			if (user.signup()) {
				MessageBox::Show("Sign-up successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("User already exists.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Convert System::String^ to std::string in the same way
	std::string username = (const char*)(Marshal::StringToHGlobalAnsi(loginTextboxUsername->Text).ToPointer());
	std::string password = (const char*)(Marshal::StringToHGlobalAnsi(loginTextboxPassword->Text).ToPointer());

	AuthUser user(username, password);
	if (user.login()) {
		MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		tabControl->SelectedTab = tabControl->TabPages[2];
	}
	else {
		MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


};
}
