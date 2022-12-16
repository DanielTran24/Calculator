#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ subtract;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ decimal;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ addition;









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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->subtract = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->addition = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 28.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->textBox1->Location = System::Drawing::Point(89, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(963, 94);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// subtract
			// 
			this->subtract->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->subtract->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtract->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->subtract->Location = System::Drawing::Point(922, 444);
			this->subtract->Name = L"subtract";
			this->subtract->Size = System::Drawing::Size(130, 130);
			this->subtract->TabIndex = 2;
			this->subtract->Text = L"−";
			this->subtract->UseVisualStyleBackColor = false;
			this->subtract->Click += gcnew System::EventHandler(this, &MyForm::subtract_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->divide->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->divide->Location = System::Drawing::Point(922, 145);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(130, 130);
			this->divide->TabIndex = 3;
			this->divide->Text = L"÷";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::divide_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->multiply->Location = System::Drawing::Point(922, 293);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(130, 130);
			this->multiply->TabIndex = 4;
			this->multiply->Text = L"×";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::multiply_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->equal->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->equal->Location = System::Drawing::Point(922, 746);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(130, 130);
			this->equal->TabIndex = 5;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->zero->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->zero->Location = System::Drawing::Point(89, 746);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(130, 130);
			this->zero->TabIndex = 6;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->one->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->one->Location = System::Drawing::Point(89, 594);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(130, 130);
			this->one->TabIndex = 7;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->two->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->two->Location = System::Drawing::Point(257, 594);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(130, 130);
			this->two->TabIndex = 8;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->three->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->three->Location = System::Drawing::Point(421, 594);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(130, 130);
			this->three->TabIndex = 9;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->four->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->four->Location = System::Drawing::Point(89, 444);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(130, 130);
			this->four->TabIndex = 10;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::four_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->five->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->five->Location = System::Drawing::Point(257, 444);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(130, 130);
			this->five->TabIndex = 11;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::five_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->six->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->six->Location = System::Drawing::Point(421, 444);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(130, 130);
			this->six->TabIndex = 12;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::six_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->seven->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->seven->Location = System::Drawing::Point(89, 293);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(130, 130);
			this->seven->TabIndex = 13;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::seven_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->eight->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->eight->Location = System::Drawing::Point(257, 293);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(130, 130);
			this->eight->TabIndex = 14;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::eight_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->nine->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nine->Location = System::Drawing::Point(421, 293);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(130, 130);
			this->nine->TabIndex = 15;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// decimal
			// 
			this->decimal->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->decimal->Location = System::Drawing::Point(257, 746);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(130, 130);
			this->decimal->TabIndex = 16;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = false;
			this->decimal->Click += gcnew System::EventHandler(this, &MyForm::decimal_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->clear->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->clear->Location = System::Drawing::Point(761, 145);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(130, 130);
			this->clear->TabIndex = 17;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// addition
			// 
			this->addition->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->addition->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addition->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->addition->Location = System::Drawing::Point(922, 594);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(130, 130);
			this->addition->TabIndex = 18;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = false;
			this->addition->Click += gcnew System::EventHandler(this, &MyForm::addition_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->ClientSize = System::Drawing::Size(1098, 907);
			this->Controls->Add(this->addition);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->subtract);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//
	//Button click functions
	//
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void subtract_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'−';
	}
	private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'+';
	}
	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'×';
	}
	private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'÷';
	}
	private: System::Void decimal_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'.';
	}
	private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'0';
	}
	private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'1';
	}
	private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'2';
	}
	private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'3';
	}
	private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'4';
	}
	private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'5';
	}
	private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'6';
	}
	private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'7';
	}
	private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'8';
	}
	private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text += L'9';
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
	}
};
}
