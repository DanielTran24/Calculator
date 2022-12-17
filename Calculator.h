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
	private: System::Windows::Forms::TextBox^ display;
	protected:


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
	private: System::Windows::Forms::Button^ backspace;
	private: System::Windows::Forms::Button^ plusminus;











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
			this->display = (gcnew System::Windows::Forms::TextBox());
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
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->plusminus = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// display
			// 
			this->display->Font = (gcnew System::Drawing::Font(L"Arial", 28.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display->ImeMode = System::Windows::Forms::ImeMode::On;
			this->display->Location = System::Drawing::Point(28, 29);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(606, 94);
			this->display->TabIndex = 0;
			this->display->Text = L"0";
			this->display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->display->TextChanged += gcnew System::EventHandler(this, &MyForm::display_TextChanged);
			// 
			// subtract
			// 
			this->subtract->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->subtract->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtract->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->subtract->Location = System::Drawing::Point(504, 444);
			this->subtract->Name = L"subtract";
			this->subtract->Size = System::Drawing::Size(130, 130);
			this->subtract->TabIndex = 2;
			this->subtract->Text = L"−";
			this->subtract->UseVisualStyleBackColor = false;
			this->subtract->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->divide->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->divide->Location = System::Drawing::Point(504, 145);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(130, 130);
			this->divide->TabIndex = 3;
			this->divide->Text = L"÷";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->multiply->Location = System::Drawing::Point(504, 293);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(130, 130);
			this->multiply->TabIndex = 4;
			this->multiply->Text = L"×";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->equal->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->equal->Location = System::Drawing::Point(504, 746);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(130, 130);
			this->equal->TabIndex = 5;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->zero->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->zero->Location = System::Drawing::Point(28, 746);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(288, 130);
			this->zero->TabIndex = 6;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->one->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->one->Location = System::Drawing::Point(28, 594);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(130, 130);
			this->one->TabIndex = 7;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->two->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->two->Location = System::Drawing::Point(186, 594);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(130, 130);
			this->two->TabIndex = 8;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->three->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->three->Location = System::Drawing::Point(345, 594);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(130, 130);
			this->three->TabIndex = 9;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->four->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->four->Location = System::Drawing::Point(28, 444);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(130, 130);
			this->four->TabIndex = 10;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->five->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->five->Location = System::Drawing::Point(186, 444);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(130, 130);
			this->five->TabIndex = 11;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->six->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->six->Location = System::Drawing::Point(345, 444);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(130, 130);
			this->six->TabIndex = 12;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->seven->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->seven->Location = System::Drawing::Point(28, 293);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(130, 130);
			this->seven->TabIndex = 13;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->eight->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->eight->Location = System::Drawing::Point(186, 293);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(130, 130);
			this->eight->TabIndex = 14;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->nine->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nine->Location = System::Drawing::Point(345, 293);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(130, 130);
			this->nine->TabIndex = 15;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// decimal
			// 
			this->decimal->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->decimal->Location = System::Drawing::Point(345, 746);
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
			this->clear->Location = System::Drawing::Point(28, 145);
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
			this->addition->Location = System::Drawing::Point(504, 594);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(130, 130);
			this->addition->TabIndex = 18;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = false;
			this->addition->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspace->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->backspace->Location = System::Drawing::Point(345, 145);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(130, 130);
			this->backspace->TabIndex = 19;
			this->backspace->Text = L"⌫";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::backspace_Click);
			// 
			// plusminus
			// 
			this->plusminus->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->plusminus->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusminus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->plusminus->Location = System::Drawing::Point(186, 145);
			this->plusminus->Name = L"plusminus";
			this->plusminus->Size = System::Drawing::Size(130, 130);
			this->plusminus->TabIndex = 20;
			this->plusminus->Text = L"±";
			this->plusminus->UseVisualStyleBackColor = false;
			this->plusminus->Click += gcnew System::EventHandler(this, &MyForm::plusminus_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->ClientSize = System::Drawing::Size(666, 907);
			this->Controls->Add(this->plusminus);
			this->Controls->Add(this->backspace);
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
			this->Controls->Add(this->display);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//
	//Stored number variables
	//

	double first_num, second_num, result;
	String^ operators;

	//
	//Button click functions
	//

	private: System::Void display_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void decimal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!display->Text->Contains (".")) {
			display->Text = display->Text + ".";
		}
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		display->Text = "0";
	}
	private: System::Void EnterNum(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (display->Text == "0") {
			display->Text = Numbers->Text;
		}
		else {
			display->Text = display->Text + Numbers->Text;
		}
	}
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ Operator = safe_cast<Button^>(sender);
		first_num = Double::Parse(display->Text);
		display->Text = "0";
		operators = Operator->Text;
	}
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
		second_num = Double::Parse(display->Text);
		if (operators == "+") {
			result = first_num + second_num;
			display->Text = System::Convert::ToString(result);
		}
		else if (operators == "−") {
			result = first_num - second_num;
			display->Text = System::Convert::ToString(result);
		}
		else if (operators == "×") {
			result = first_num * second_num;
			display->Text = System::Convert::ToString(result);
		}
		else if (operators == "÷") {
			result = first_num / second_num;
			display->Text = System::Convert::ToString(result);
		}
	}
	private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (display->Text->Length > 0) {
			display->Text = display->Text->Remove(display->Text->Length - 1, 1);
		}
	}
	private: System::Void plusminus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (display->Text->Contains("-")) {
			display->Text = display->Text->Remove(0, 1);
		}
		else {
			display->Text = "-" + display->Text;
		}
	}
};
}
