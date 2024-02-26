#pragma once



namespace LabCalculator {



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

	private: System::Windows::Forms::Button^ button1;

	protected:

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ btnMultipled;







	private: System::Windows::Forms::Button^ btnMinus;



	private: System::Windows::Forms::Button^ btnPlus;

	private: System::Windows::Forms::Button^ btnDivide;







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

			this->button1 = (gcnew System::Windows::Forms::Button());

			this->textBox1 = (gcnew System::Windows::Forms::TextBox());

			this->textBox2 = (gcnew System::Windows::Forms::TextBox());

			this->btnMultipled = (gcnew System::Windows::Forms::Button());

			this->btnMinus = (gcnew System::Windows::Forms::Button());

			this->btnPlus = (gcnew System::Windows::Forms::Button());

			this->btnDivide = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();

			// 

			// button1

			// 

			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

				static_cast<System::Byte>(0)));

			this->button1->Location = System::Drawing::Point(13, 13);

			this->button1->Name = L"button1";

			this->button1->Size = System::Drawing::Size(209, 30);

			this->button1->TabIndex = 0;

			this->button1->Text = L"Please input two numbers";

			this->button1->UseVisualStyleBackColor = true;

			// 

			// textBox1

			// 

			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,

				static_cast<System::Byte>(0)));

			this->textBox1->Location = System::Drawing::Point(48, 49);

			this->textBox1->Multiline = true;

			this->textBox1->Name = L"textBox1";

			this->textBox1->Size = System::Drawing::Size(140, 30);

			this->textBox1->TabIndex = 1;

			// 

			// textBox2

			// 

			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,

				static_cast<System::Byte>(0)));

			this->textBox2->Location = System::Drawing::Point(48, 85);

			this->textBox2->Multiline = true;

			this->textBox2->Name = L"textBox2";

			this->textBox2->Size = System::Drawing::Size(140, 30);

			this->textBox2->TabIndex = 2;

			// 

			// btnMultipled

			// 

			this->btnMultipled->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

				static_cast<System::Byte>(0)));

			this->btnMultipled->Location = System::Drawing::Point(122, 121);

			this->btnMultipled->Name = L"btnMultipled";

			this->btnMultipled->Size = System::Drawing::Size(30, 30);

			this->btnMultipled->TabIndex = 3;

			this->btnMultipled->Text = L"*";

			this->btnMultipled->UseVisualStyleBackColor = true;

			this->btnMultipled->Click += gcnew System::EventHandler(this, &MyForm::btnMultipled_Click);

			// 

			// btnMinus

			// 

			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

				static_cast<System::Byte>(0)));

			this->btnMinus->Location = System::Drawing::Point(86, 121);

			this->btnMinus->Name = L"btnMinus";

			this->btnMinus->Size = System::Drawing::Size(30, 30);

			this->btnMinus->TabIndex = 4;

			this->btnMinus->Text = L"-";

			this->btnMinus->UseVisualStyleBackColor = true;

			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);

			// 

			// btnPlus

			// 

			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

				static_cast<System::Byte>(0)));

			this->btnPlus->Location = System::Drawing::Point(48, 121);

			this->btnPlus->Name = L"btnPlus";

			this->btnPlus->Size = System::Drawing::Size(30, 30);

			this->btnPlus->TabIndex = 5;

			this->btnPlus->Text = L"+";

			this->btnPlus->UseVisualStyleBackColor = true;

			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);

			// 

			// btnDivide

			// 

			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,

				static_cast<System::Byte>(0)));

			this->btnDivide->Location = System::Drawing::Point(158, 121);

			this->btnDivide->Name = L"btnDivide";

			this->btnDivide->Size = System::Drawing::Size(30, 30);

			this->btnDivide->TabIndex = 6;

			this->btnDivide->Text = L"/";

			this->btnDivide->UseVisualStyleBackColor = true;

			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);

			// 

			// MyForm

			// 

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);

			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->BackColor = System::Drawing::Color::Cyan;

			this->ClientSize = System::Drawing::Size(234, 161);

			this->Controls->Add(this->btnDivide);

			this->Controls->Add(this->btnPlus);

			this->Controls->Add(this->btnMinus);

			this->Controls->Add(this->btnMultipled);

			this->Controls->Add(this->textBox2);

			this->Controls->Add(this->textBox1);

			this->Controls->Add(this->button1);

			this->Enabled = false;

			this->Name = L"MyForm";

			this->Text = L"My Calculator";

			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);

			this->ResumeLayout(false);

			this->PerformLayout();



		}

#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	this->Enabled = true;

}

private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {

	double num1 = Convert::ToDouble(textBox1->Text);

	double num2 = Convert::ToDouble(textBox2->Text);

	double result = num1 + num2;

	MessageBox::Show("Result of addition: " + result, "Result");

}

private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {

	double num1 = Convert::ToDouble(textBox1->Text);

	double num2 = Convert::ToDouble(textBox2->Text);

	double result = num1 - num2;

	MessageBox::Show("Result of subtraction: " + result, "Result");

}

private: System::Void btnMultipled_Click(System::Object^ sender, System::EventArgs^ e) {

	double num1 = Convert::ToDouble(textBox1->Text);

	double num2 = Convert::ToDouble(textBox2->Text);

	double result = num1 * num2;

	MessageBox::Show("Result of multiplication: " + result, "Result");

}

private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {

	double num1 = Convert::ToDouble(textBox1->Text);

	double num2 = Convert::ToDouble(textBox2->Text);

	if (num2 != 0) {

		double result = num1 / num2;

		MessageBox::Show("Result of division: " + result, "Result");

	}

	else {

		MessageBox::Show("Cannot divide by zero", "Error");

	}

}



};

}

