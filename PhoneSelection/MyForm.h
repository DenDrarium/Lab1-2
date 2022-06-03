#pragma once

namespace PhoneSelection {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnCheap;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnPayment;
	private: System::Windows::Forms::Button^ btnPhoto;
	private: System::Windows::Forms::Button^ btnGame;
	private: System::Windows::Forms::Button^ btnExpensive;
	private: System::Windows::Forms::Button^ btnAIP;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnBattery;
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::Button^ Clean;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_Camera;

	private: System::Windows::Forms::Button^ btn_Memory2;
	private: System::Windows::Forms::Button^ btn_Internet;
	private: System::Windows::Forms::Button^ btn_Elderly;
	private: System::Windows::Forms::Button^ btn_Protected;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btn_Change;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnBattery = (gcnew System::Windows::Forms::Button());
			this->btnPayment = (gcnew System::Windows::Forms::Button());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			this->btnGame = (gcnew System::Windows::Forms::Button());
			this->btnExpensive = (gcnew System::Windows::Forms::Button());
			this->btnAIP = (gcnew System::Windows::Forms::Button());
			this->btnCheap = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Camera = (gcnew System::Windows::Forms::Button());
			this->btn_Memory2 = (gcnew System::Windows::Forms::Button());
			this->btn_Internet = (gcnew System::Windows::Forms::Button());
			this->btn_Elderly = (gcnew System::Windows::Forms::Button());
			this->btn_Protected = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Clean = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Change = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnBattery);
			this->groupBox1->Controls->Add(this->btnPayment);
			this->groupBox1->Controls->Add(this->btnPhoto);
			this->groupBox1->Controls->Add(this->btnGame);
			this->groupBox1->Controls->Add(this->btnExpensive);
			this->groupBox1->Controls->Add(this->btnAIP);
			this->groupBox1->Controls->Add(this->btnCheap);
			this->groupBox1->Location = System::Drawing::Point(16, 118);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(303, 213);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Предполагаемые характеристики смартфона";
			this->groupBox1->Visible = false;
			// 
			// btnBattery
			// 
			this->btnBattery->Location = System::Drawing::Point(148, 90);
			this->btnBattery->Name = L"btnBattery";
			this->btnBattery->Size = System::Drawing::Size(142, 44);
			this->btnBattery->TabIndex = 6;
			this->btnBattery->Text = L"С мощным аккумулятор";
			this->btnBattery->UseVisualStyleBackColor = true;
			this->btnBattery->Click += gcnew System::EventHandler(this, &MyForm::btnBattery_Click);
			// 
			// btnPayment
			// 
			this->btnPayment->Location = System::Drawing::Point(6, 173);
			this->btnPayment->Name = L"btnPayment";
			this->btnPayment->Size = System::Drawing::Size(284, 23);
			this->btnPayment->TabIndex = 5;
			this->btnPayment->Text = L"С возможностью бесконтактной оплаты";
			this->btnPayment->UseVisualStyleBackColor = true;
			this->btnPayment->Click += gcnew System::EventHandler(this, &MyForm::btnPayment_Click);
			// 
			// btnPhoto
			// 
			this->btnPhoto->Location = System::Drawing::Point(6, 144);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(284, 23);
			this->btnPhoto->TabIndex = 5;
			this->btnPhoto->Text = L"Для любителя фотографировать";
			this->btnPhoto->UseVisualStyleBackColor = true;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &MyForm::btnPhoto_Click);
			// 
			// btnGame
			// 
			this->btnGame->Location = System::Drawing::Point(6, 111);
			this->btnGame->Name = L"btnGame";
			this->btnGame->Size = System::Drawing::Size(99, 23);
			this->btnGame->TabIndex = 5;
			this->btnGame->Text = L"Игровой ";
			this->btnGame->UseVisualStyleBackColor = true;
			this->btnGame->Click += gcnew System::EventHandler(this, &MyForm::btnGame_Click);
			// 
			// btnExpensive
			// 
			this->btnExpensive->Location = System::Drawing::Point(6, 68);
			this->btnExpensive->Name = L"btnExpensive";
			this->btnExpensive->Size = System::Drawing::Size(99, 23);
			this->btnExpensive->TabIndex = 0;
			this->btnExpensive->Text = L"Дорогой";
			this->btnExpensive->UseVisualStyleBackColor = true;
			this->btnExpensive->Click += gcnew System::EventHandler(this, &MyForm::btnExpensive_Click);
			// 
			// btnAIP
			// 
			this->btnAIP->Location = System::Drawing::Point(148, 39);
			this->btnAIP->Name = L"btnAIP";
			this->btnAIP->Size = System::Drawing::Size(142, 45);
			this->btnAIP->TabIndex = 0;
			this->btnAIP->Text = L"Cредний по цене ";
			this->btnAIP->UseVisualStyleBackColor = true;
			this->btnAIP->Click += gcnew System::EventHandler(this, &MyForm::btnAIP_Click);
			// 
			// btnCheap
			// 
			this->btnCheap->Location = System::Drawing::Point(6, 39);
			this->btnCheap->Name = L"btnCheap";
			this->btnCheap->Size = System::Drawing::Size(99, 23);
			this->btnCheap->TabIndex = 1;
			this->btnCheap->Text = L"Дешевый";
			this->btnCheap->UseVisualStyleBackColor = true;
			this->btnCheap->Click += gcnew System::EventHandler(this, &MyForm::btnCheap_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btn_Camera);
			this->groupBox2->Controls->Add(this->btn_Memory2);
			this->groupBox2->Controls->Add(this->btn_Internet);
			this->groupBox2->Controls->Add(this->btn_Elderly);
			this->groupBox2->Controls->Add(this->btn_Protected);
			this->groupBox2->Location = System::Drawing::Point(22, 101);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(265, 230);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Предполагаемые характеристики сотового телефона";
			this->groupBox2->Visible = false;
			// 
			// btn_Camera
			// 
			this->btn_Camera->Location = System::Drawing::Point(6, 184);
			this->btn_Camera->Name = L"btn_Camera";
			this->btn_Camera->Size = System::Drawing::Size(253, 23);
			this->btn_Camera->TabIndex = 4;
			this->btn_Camera->Text = L"Bозможность делать фотографии ";
			this->btn_Camera->UseVisualStyleBackColor = true;
			this->btn_Camera->Click += gcnew System::EventHandler(this, &MyForm::btn_Camera_Click);
			// 
			// btn_Memory2
			// 
			this->btn_Memory2->Location = System::Drawing::Point(6, 155);
			this->btn_Memory2->Name = L"btn_Memory2";
			this->btn_Memory2->Size = System::Drawing::Size(253, 23);
			this->btn_Memory2->TabIndex = 3;
			this->btn_Memory2->Text = L"Большой объём памяти";
			this->btn_Memory2->UseVisualStyleBackColor = true;
			this->btn_Memory2->Click += gcnew System::EventHandler(this, &MyForm::btn_Memory2_Click);
			// 
			// btn_Internet
			// 
			this->btn_Internet->Location = System::Drawing::Point(6, 126);
			this->btn_Internet->Name = L"btn_Internet";
			this->btn_Internet->Size = System::Drawing::Size(253, 23);
			this->btn_Internet->TabIndex = 2;
			this->btn_Internet->Text = L"Возможность доступа в Интернет";
			this->btn_Internet->UseVisualStyleBackColor = true;
			this->btn_Internet->Click += gcnew System::EventHandler(this, &MyForm::btn_Internet_Click);
			// 
			// btn_Elderly
			// 
			this->btn_Elderly->Location = System::Drawing::Point(6, 68);
			this->btn_Elderly->Name = L"btn_Elderly";
			this->btn_Elderly->Size = System::Drawing::Size(253, 52);
			this->btn_Elderly->TabIndex = 1;
			this->btn_Elderly->Text = L"Tелефон для людей со слабым зрением или слухом";
			this->btn_Elderly->UseVisualStyleBackColor = true;
			this->btn_Elderly->Click += gcnew System::EventHandler(this, &MyForm::btn_Elderly_Click);
			// 
			// btn_Protected
			// 
			this->btn_Protected->Location = System::Drawing::Point(6, 39);
			this->btn_Protected->Name = L"btn_Protected";
			this->btn_Protected->Size = System::Drawing::Size(253, 23);
			this->btn_Protected->TabIndex = 0;
			this->btn_Protected->Text = L"Крепкий и надёжный телефон";
			this->btn_Protected->UseVisualStyleBackColor = true;
			this->btn_Protected->Click += gcnew System::EventHandler(this, &MyForm::btn_Protected_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Смартфон";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(124, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сотовый телефон";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// colorDialog1
			// 
			this->colorDialog1->Color = System::Drawing::SystemColors::Control;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(516, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(167, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Visible = false;
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(164, 413);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(127, 23);
			this->btnStart->TabIndex = 6;
			this->btnStart->Text = L"Начать подбор";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::btnStart_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Clean
			// 
			this->Clean->Location = System::Drawing::Point(22, 412);
			this->Clean->Name = L"Clean";
			this->Clean->Size = System::Drawing::Size(130, 23);
			this->Clean->TabIndex = 7;
			this->Clean->Text = L"Очистить выбор";
			this->Clean->UseVisualStyleBackColor = true;
			this->Clean->Click += gcnew System::EventHandler(this, &MyForm::Clean_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Location = System::Drawing::Point(367, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(298, 421);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(364, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Название телефона:";
			this->label2->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Location = System::Drawing::Point(16, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(302, 74);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Какой телефон вы хотите приобрести\?";
			// 
			// btn_Change
			// 
			this->btn_Change->Location = System::Drawing::Point(22, 382);
			this->btn_Change->Name = L"btn_Change";
			this->btn_Change->Size = System::Drawing::Size(269, 25);
			this->btn_Change->TabIndex = 11;
			this->btn_Change->Text = L"Изменить выбираемый телефон.\r\n";
			this->btn_Change->UseVisualStyleBackColor = true;
			this->btn_Change->Click += gcnew System::EventHandler(this, &MyForm::btn_Change_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 462);
			this->Controls->Add(this->btn_Change);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Clean);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e);
	//Характеристики смартфона
	private: System::Void btnCheap_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnExpensive_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAIP_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnGame_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnBattery_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnPhoto_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnPayment_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Clean_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void btn_Protected_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Elderly_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Internet_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Memory2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Camera_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Change_Click(System::Object^ sender, System::EventArgs^ e);
};
}
