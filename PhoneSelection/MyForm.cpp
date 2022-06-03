#include "MyForm.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

bool first = true;
//Характеристики смартфона
int minprice = -1;				//минимальная цена
int maxprice = -1;				//максимальная цена
int RAM = -1;	    // оперативная память
int megapixel = -1;				// мегапиксель
int memory = -1;		// Встроенная память
int NFC = -1;				//Модуль NFC
int battery = -1;			//Емкость аккумулятора
int smart = -1;		//

//Характеристики сотового телефона
int Protected = -1; //Защищенность
int Elderly = -1;	//Для пожилых людей
int Internet = -1;	//Доступ в интернет
int Memory2 = -1;	//Наличие слота карты ппамяти
int Camera = -1;	//Наличие камеры

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Drawing;


[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PhoneSelection::MyForm form;
	Application::Run(% form);

	setlocale(LC_ALL, "russian");
}

System::Void PhoneSelection::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	groupBox1->Visible = true;	
	groupBox3->Hide();
	smart = 1;
	return System::Void();
}

System::Void PhoneSelection::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	//groupBox2->Visible = true;
	groupBox2->Show();
	groupBox3->Hide();
	smart = 2;	
	return System::Void();
}

void MarshalString(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

System::Void PhoneSelection::MyForm::btnStart_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBox1->Visible == true) smart = 1;
	if (groupBox2->Visible == true) smart = 2;
	if (smart != -1)
	{
		label2->Show();
		textBox1->Show();
	}
	//Входные данные, заполнение массивов
	int amount = 11,
		amount2 = 9,
		charact, //Одна из характеристик
		k = 0,
		price;
	std::string** Smartphone = new std::string * [amount];
	int* Characteristics = new int[amount2];
	Characteristics[0] = -1;
	Characteristics[1] = -1;
	Characteristics[2] = NFC;
	Characteristics[3] = -1;
	Characteristics[4] = -1;
	Characteristics[5] = RAM;
	Characteristics[6] = memory;
	Characteristics[7] = megapixel;
	Characteristics[8] = battery;
	
	//std::string* chosen = new std::string[amount2];
	//std::string* couted = new std::string[amount2];

	

	for (int i = 0; i < amount; i++)
	{
		Smartphone[i] = new std::string[amount2];
	}

	int amount3 = 5,
		amount4 = 9;
	std::string** Phone = new std::string * [amount3];
	//std::string* chosen1 = new std::string[amount4];
	//std::string* couted1 = new std::string[amount4];

	for (int i = 0; i < amount3; i++)
	{
		Phone[i] = new std::string[amount4];
	}
	
	int* Characteristics2 = new int[amount4];
	Characteristics2[0] = -1;
	Characteristics2[1] = -1;
	Characteristics2[2] = -1;
	Characteristics2[3] = Protected;
	Characteristics2[4] = Elderly;
	Characteristics2[5] = Internet;
	Characteristics2[6] = Memory2;
	Characteristics2[7] = Camera;
	Characteristics2[8] = -1;
	
	//Начало аполнения массивов 
	std::ifstream F1("Smartphones.txt");

	//String^ F1 = "E:\\Studies\\Courses\\Smartphones.txt"; //Переменная для доступа к файлу
	//openFileDialog1->ShowDialog();
	//F1 = openFileDialog1->FileName;
	//textBox1->AppendText(F1);
	//try
	//{
	//	StreamReader^ file = File::OpenText(F1);
	//	//textBox1->Text = file->ReadToEnd();
	//	String^ k;
	//	int kk = file->Read();
	//	//textBox1->AppendText(Convert::ToString(kk));
	//	/*for (int i = 0; i < amount; i++)
	//	{
	//		for (int j = 0; j < amount2; j++)
	//		{
	//			kk = file->Read();
	//			
	//		}
	//	}*/
	//}
	//catch (Exception^ e)
	//{
	//	MessageBox::Show("Файл не открыт","Ошибка");
	//}

	if (!F1)
	{
		MessageBox::Show("Файл не открыт", "Ошибка");
		return;
	}

	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < amount2; j++)
		{			
			F1 >> Smartphone[i][j];
		}
	}

	F1.close();

	std::ifstream F2("Phones.txt");

	if (!F2)
	{
		MessageBox::Show("Файл не открыт", "Ошибка");
		return;
	}

	for (int i = 0; i < amount3; i++)
	{
		for (int j = 0; j < amount4; j++)
		{
			F2 >> Phone[i][j];
		}
	}	

	F2.close();
	//Заполнение массивов завершено

	int n, n1, t;

	int* Suit, * Suit2;
	//Выбор и запоминание пользовательских характеристик
	if (smart == 1)
	{	
		Suit = new int[amount];
		for (int i = 0; i < amount; i++)
		{			
			Suit[i] = 1;
		}	
		Suit[amount] = amount;
		
		if (minprice != -1)		
			for (int i = 0; i < amount; i++)
			{
				price = std::stoi(Smartphone[i][1]);
				if (price > minprice && price < maxprice)
				{
					continue;
				}
				else
				{
					Suit[i] = 0;
					Suit[amount]--;
				}				
			}

		

		if (NFC != -1)
			for (int i = 0; i < amount; i++)
			{
				charact = std::stoi(Smartphone[i][2]);
				if (charact == NFC)
				{
					continue;
				}
				else
				{
					Suit[i] = 0;
					Suit[amount]--;
				}				
			}


		for (int j = 5; j < amount2; j++)		
		{
			if (Characteristics[j] != -1)
			{
				for (int i = 0; i < amount; i++)
				{					
					if (Suit[i] == 1 && Suit[amount] > 1)
					{
						charact = std::stoi(Smartphone[i][j]);
						if (charact >= Characteristics[j])
							continue;
						else
						{
							Suit[i] = 0;
							Suit[amount]--;
						}
					}

				}
			}			
		}
	}
	else if (smart == 2)
	{		
			Suit2 = new int[amount3];
			for (int i = 0; i < amount3; i++)
			{
				Suit2[i] = 1;
			}
			Suit2[amount3] = amount3;			

		for (int j = 3; j < amount4 - 1; j++)
		{
			if (Characteristics2[j] != -1)
			{
				for (int i = 0; i < amount3; i++)
				{
					if (Suit2[i] == 1 && Suit2[amount3] > 1)
					{
						charact = std::stoi(Phone[i][j]);
						if (charact == Characteristics2[j])
							continue;
						else
						{
							Suit2[i] = 0;
							Suit2[amount]--;
						}
					}

				}
			}
		}
	}
	else
	{
		//cout << "Непонятное значение!";
	}
	// Все пользовательские характериситки заполнены

	std::string st = ".jpg";
//Выбор телефона на основе запомненых характеристик
	if (smart == 1)
	{
		for (int i = 0; i < amount; i++)
		{
			if (Suit[i] == 1)
			{
				//Вывод названия
				String^ str2 = gcnew String(Smartphone[i][0].c_str());
				textBox1->AppendText(str2);
				textBox1->Text += "\r" + "\n";
				delete str2;
				//Вывод изображения
				st = Smartphone[i][0] + st;
				String^ str = gcnew String(st.c_str());
				pictureBox1->Image = Image::FromFile(str);
				delete str;
				break;
			}
		}
	}	
	else if (smart == 2)
	{
		for (int i = 0; i < amount; i++)
		{
			if (Suit2[i] == 1)
			{
				//Вывод названия
				String^ str2 = gcnew String(Phone[i][0].c_str());
				textBox1->AppendText(str2);
				textBox1->Text += "\r" + "\n";
				delete str2;
				//Вывод изображения
				st = Phone[i][0] + st;
				String^ str = gcnew String(st.c_str());
				pictureBox1->Image = Image::FromFile(str);
				delete str;
				break;
			}
		}
	}
	return System::Void();
}

//Характеристики смартфона
System::Void PhoneSelection::MyForm::btnCheap_Click(System::Object^ sender, System::EventArgs^ e)
{
	minprice = 0;
	maxprice = 20000;
	return System::Void();
}
System::Void PhoneSelection::MyForm::btnExpensive_Click(System::Object^ sender, System::EventArgs^ e) 
{
	minprice = 50000;
	maxprice = 150000;
	return System::Void();
}
System::Void PhoneSelection::MyForm::btnAIP_Click(System::Object^ sender, System::EventArgs^ e) 
{
	minprice = 20000;
	maxprice = 50000;
	return System::Void();
}
System::Void PhoneSelection::MyForm::btnGame_Click(System::Object^ sender, System::EventArgs^ e) 
{
	minprice = 25000;
	maxprice = 150000;
	RAM = 6;
	return System::Void();
}
System::Void PhoneSelection::MyForm::btnBattery_Click(System::Object^ sender, System::EventArgs^ e)
{
	battery = 5000;
	return System::Void();
}
System::Void PhoneSelection::MyForm::btnPhoto_Click(System::Object^ sender, System::EventArgs^ e) 
{
	megapixel = 48;				
	memory = 128;
	return System::Void();
}
System::Void PhoneSelection::MyForm::btnPayment_Click(System::Object^ sender, System::EventArgs^ e)
{
	NFC = 1;
	return System::Void();
}

System::Void PhoneSelection::MyForm::Clean_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Clear();
	//Обгуление предполагаемых характеристик
	smart = -1;		//
	minprice = -1;		//минимальная цена
	maxprice = -1;		//максимальная цена
	RAM = -1;			// оперативная память
	megapixel = -1;		// мегапиксель
	memory = -1;		// Встроенная память
	NFC = -1;			//Модуль NFC
	battery = -1;		//Емкость аккумулятора
	
	Protected = -1; //Защищенность
	Elderly = -1;	//Для пожилых людей
	Internet = -1;	//Доступ в интернет
	Memory2 = -1;	//Наличие слота карты ппамяти
	Camera = -1;	//Наличие камеры

	//Очистка изображения
	Graphics^ graf;
	graf = pictureBox1->CreateGraphics();
	graf->Clear(BackColor);
	//graf->Clear(colorDialog1->Color);

	return System::Void();
}

System::Void PhoneSelection::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{	
	return System::Void();
}

System::Void PhoneSelection::MyForm::btn_Protected_Click(System::Object^ sender, System::EventArgs^ e)
{
	Protected = 1;
	return System::Void();
}

System::Void PhoneSelection::MyForm::btn_Elderly_Click(System::Object^ sender, System::EventArgs^ e)
{
	Elderly = 1;
	return System::Void();
}

System::Void PhoneSelection::MyForm::btn_Internet_Click(System::Object^ sender, System::EventArgs^ e)
{
	Internet = 1;
	return System::Void();
}

System::Void PhoneSelection::MyForm::btn_Memory2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Memory2 = 1;
	return System::Void();
}

System::Void PhoneSelection::MyForm::btn_Camera_Click(System::Object^ sender, System::EventArgs^ e)
{
	Camera = 1;
	return System::Void();
}

System::Void PhoneSelection::MyForm::btn_Change_Click(System::Object^ sender, System::EventArgs^ e)
{
	groupBox1->Hide();
	groupBox2->Hide();
	groupBox3->Show();
	return System::Void();
}

