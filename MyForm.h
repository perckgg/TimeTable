#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Teacher Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Subject:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Num. of Period:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(246, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 29);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(246, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(206, 29);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(246, 138);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(206, 29);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(553, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Add Subject to L01";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(867, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Add Subject to L02";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1260, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 47);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Generate L01";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(124, 342);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"MON";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(380, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"TUE";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(642, 342);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"WED";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(910, 342);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"THU";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1192, 342);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 25);
			this->label8->TabIndex = 13;
			this->label8->Text = L"FRI";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1473, 342);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 25);
			this->label9->TabIndex = 14;
			this->label9->Text = L"SAT";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(67, 409);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(173, 29);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(67, 474);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(173, 29);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(67, 547);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(173, 29);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(67, 629);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(173, 29);
			this->textBox7->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(67, 713);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(173, 29);
			this->textBox8->TabIndex = 19;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(314, 409);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(173, 29);
			this->textBox9->TabIndex = 20;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(314, 474);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(173, 29);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(314, 547);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(173, 29);
			this->textBox11->TabIndex = 22;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(314, 629);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(173, 29);
			this->textBox12->TabIndex = 23;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(314, 713);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(173, 29);
			this->textBox13->TabIndex = 24;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(586, 409);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(173, 29);
			this->textBox14->TabIndex = 25;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(586, 474);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(173, 29);
			this->textBox15->TabIndex = 26;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(586, 547);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(173, 29);
			this->textBox16->TabIndex = 27;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(586, 629);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(173, 29);
			this->textBox17->TabIndex = 28;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(586, 713);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(173, 29);
			this->textBox18->TabIndex = 29;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(848, 409);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(173, 29);
			this->textBox19->TabIndex = 30;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(848, 474);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(173, 29);
			this->textBox20->TabIndex = 31;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(848, 547);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(173, 29);
			this->textBox21->TabIndex = 32;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(848, 629);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(173, 29);
			this->textBox22->TabIndex = 33;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(848, 713);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(173, 29);
			this->textBox23->TabIndex = 34;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(1132, 409);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(173, 29);
			this->textBox24->TabIndex = 35;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(1132, 474);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(173, 29);
			this->textBox25->TabIndex = 36;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(1132, 547);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(173, 29);
			this->textBox26->TabIndex = 37;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(1132, 629);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(173, 29);
			this->textBox27->TabIndex = 38;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(1132, 713);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(173, 29);
			this->textBox28->TabIndex = 39;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(1415, 409);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(173, 29);
			this->textBox29->TabIndex = 40;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(1415, 474);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(173, 29);
			this->textBox30->TabIndex = 41;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(1415, 547);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(173, 29);
			this->textBox31->TabIndex = 42;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(1415, 629);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(173, 29);
			this->textBox32->TabIndex = 43;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(1415, 713);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(173, 29);
			this->textBox33->TabIndex = 44;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1442, 38);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 47);
			this->button4->TabIndex = 45;
			this->button4->Text = L"Generate L02";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1260, 164);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 37);
			this->button5->TabIndex = 46;
			this->button5->Text = L"Reset L01";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1442, 164);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 37);
			this->button6->TabIndex = 47;
			this->button6->Text = L"Reset L02";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(466, 801);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(146, 37);
			this->button7->TabIndex = 48;
			this->button7->Text = L"Load L01";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1002, 801);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(146, 37);
			this->button8->TabIndex = 49;
			this->button8->Text = L"Load L02";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click_1);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1260, 105);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(146, 37);
			this->button9->TabIndex = 50;
			this->button9->Text = L"Modify L01";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1442, 105);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(146, 37);
			this->button10->TabIndex = 51;
			this->button10->Text = L"Modify L02";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1701, 978);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: ref class Subject {
		public: 
			String^ teacherName;
			String^ subjectName;
			int numOfPeriod;
		public:
			Subject^ next;
			Subject(String^ teacherName, String^ subjectName, int numOfPeriod) {
				this->teacherName = teacherName;
				this->subjectName = subjectName;
				this->numOfPeriod = numOfPeriod;
			}
			String^ getTeacherName() {
				return this->teacherName;
			}
			String^ getSubjectName() {
				return this->subjectName;
			}
			int getNumOfPeriod() {
				return this->numOfPeriod;
			}
	};
//create a class for each class L01 and L02 that include a list of subjects
	public: ref class Class {
	public:
		Subject^ head;
		int numOfSubjects;
		int numOfPeriod;
	public:
		Class() {
			this->head = nullptr;
			this->numOfSubjects = 0;
			this->numOfPeriod = 0;
		}
		void addSubject(Subject^ newSubject) {
			if (this->head == nullptr) {
				this->head = newSubject;
			}
			else {
				Subject^ temp = this->head;
				while (temp->next != nullptr) {
					temp = temp->next;
				}
				temp->next = newSubject;
			}
			this->numOfSubjects++;
		}
		int getNumOfSubjects() {
			return this->numOfSubjects;
		}
		int getNumOfPeriod() {
			return this->numOfPeriod;
		}
		void DeleteAll() {
			this->head = nullptr;
			this->numOfSubjects = 0;
			this->numOfPeriod = 0;
		}
	};
	//create a random function with range, include min and max
	int random(int min, int max) {
		Random^ r = gcnew Random();
		return r->Next(min, max);
	}
	//create new objects for each class L01 and L02
	public: Class^ L01 = gcnew Class();
		    Class^ L02 = gcnew Class();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ teacherName = this->textBox1->Text;
		String^ subjectName = this->textBox2->Text;
		int numOfPeriod = Int32::Parse(this->textBox3->Text);
		Subject^ newSubject = gcnew Subject(teacherName, subjectName, numOfPeriod);
		L01->addSubject(newSubject);
		//update the number of period
		L01->numOfPeriod += numOfPeriod;
		//reset the textboxes
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ teacherName = this->textBox1->Text;
		String^ subjectName = this->textBox2->Text;
		int numOfPeriod = Int32::Parse(this->textBox3->Text);
		Subject^ newSubject = gcnew Subject(teacherName, subjectName, numOfPeriod);
		L02->addSubject(newSubject);
		//update the number of period
		L02->numOfPeriod += numOfPeriod;
		//reset the textboxes
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name_0;
		TextBox^ tb_0;
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			tb_0->Text = "";
		}
		//check if the number of period is greater than 1 and less than 31

		if (L01->getNumOfPeriod() >= 1 && L01->getNumOfPeriod() <= 30) {
			//go through each subject in L01
			Subject^ temp = L01->head;
			int i = 0;
			while (temp != nullptr) {
				for (int j = 0; j < temp->getNumOfPeriod(); j++) {
					int randomNum = random(4, 33);
					String^ name = "textBox" + randomNum;
					TextBox^ tb = (TextBox^)this->Controls->Find(name, true)[0];
					while (tb->Text != "")
					{
						randomNum = random(4, 33);
						name = "textBox" + randomNum;
						tb = (TextBox^)this->Controls->Find(name, true)[0];
					}
					tb->Text = temp->getSubjectName() + " (" + temp->getTeacherName() + ")";
				}
				temp = temp->next;
			}
			StreamWriter^ sw = gcnew StreamWriter("L01.txt");
			for (int i = 4; i <= 33; i++) {
				name_0 = "textBox" + i;
				tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
				//write the subject name into a L01.txt file with format: <subject nam> \endline <subject name> \endline...
				sw->WriteLine(tb_0->Text);
			}
			sw->Close();
		}
		else {
			MessageBox::Show("The number of period is not valid");
		}
		

		//String^ name = "textBox" + i;
		//TextBox^ tb = (TextBox^)this->Controls->Find(name, true)[0];
		//tb->Text = "hello";
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name_0;
		TextBox^ tb_0;
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			tb_0->Text = "";
		}
		if (L02->getNumOfPeriod() >= 1 && L02->getNumOfPeriod() <= 30) {
			//go through each subject in L02
			Subject^ temp = L02->head;
			int i = 0;
			while (temp != nullptr) {
				for (int j = 0; j < temp->getNumOfPeriod(); j++) {
					int randomNum = random(4, 33);
					String^ name = "textBox" + randomNum;
					TextBox^ tb = (TextBox^)this->Controls->Find(name, true)[0];
					while (tb->Text != "")
					{
						randomNum = random(4, 33);
						name = "textBox" + randomNum;
						tb = (TextBox^)this->Controls->Find(name, true)[0];
					}
					tb->Text = temp->getSubjectName() + " (" + temp->getTeacherName() + ")";
				}
				temp = temp->next;
			}
		StreamWriter^ sw = gcnew StreamWriter("L02.txt");
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			//write the subject name into a L01.txt file

			sw->WriteLine(tb_0->Text);
		}
		sw->Close();
		}
		else {
			MessageBox::Show("The number of period is not valid");
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//delete all the subjects in L01
		L01->DeleteAll();
		String^ name_0;
		TextBox^ tb_0;
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			tb_0->Text = "";
		}
		//delete the L01.txt file
		File::Delete("L01.txt");

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		//delete all the subjects in L02
		L02->DeleteAll();
		String^ name_0;
		TextBox^ tb_0;
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			tb_0->Text = "";
		}
		//delete the L02.txt file
		File::Delete("L02.txt");
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		//load the subjects from L01.txt into textboxes
		String^ name_0;
		TextBox^ tb_0;
		//reset all the textboxes
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			tb_0->Text = "";
		}
		StreamReader^ sr = gcnew StreamReader("L01.txt");
		String^ line;
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			line = sr->ReadLine();
			tb_0->Text = line;
		}
		sr->Close();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		//save current entries in textboxes into L01.txt
		String^ name_0;
		TextBox^ tb_0;
		StreamWriter^ sw = gcnew StreamWriter("L01.txt");
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			sw->WriteLine(tb_0->Text);
		}
		sw->Close();
	}
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//load the subjects from L02.txt into textboxes
		String^ name_0;
		TextBox^ tb_0;
		//reset all the textboxes
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			tb_0->Text = "";
		}
		StreamReader^ sr = gcnew StreamReader("L02.txt");
		String^ line;
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			line = sr->ReadLine();
			tb_0->Text = line;
		}
		sr->Close();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		//save current entries in textboxes into L02.txt
		String^ name_0;
		TextBox^ tb_0;
		StreamWriter^ sw = gcnew StreamWriter("L02.txt");
		for (int i = 4; i <= 33; i++) {
			name_0 = "textBox" + i;
			tb_0 = (TextBox^)this->Controls->Find(name_0, true)[0];
			sw->WriteLine(tb_0->Text);
		}
		sw->Close();
	}
};
}
