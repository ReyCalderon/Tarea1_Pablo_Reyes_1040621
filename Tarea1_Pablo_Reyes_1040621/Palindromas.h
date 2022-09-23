#pragma once

namespace Tarea1PabloReyes1040621 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de Palindromas
	/// </summary>
	public ref class Palindromas : public System::Windows::Forms::Form
	{
	public:
		Palindromas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Palindromas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(141, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(374, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Palabras Palindromas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(144, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(367, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Buscar el archivo txt donde se guardo las palabras \r\nque se quieren comprobar si "
				L"es Palindroma o no. \r\n";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar Recursividad";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Palindromas::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(39, 249);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(217, 179);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(339, 180);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 42);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Buscar Iterativa";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Palindromas::button2_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(312, 246);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(217, 179);
			this->richTextBox2->TabIndex = 5;
			this->richTextBox2->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 461);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 42);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(339, 458);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(172, 42);
			this->textBox2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(571, 245);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Tiempo de forma recursiva";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(571, 371);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Tiempo de forma iterativa";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(571, 286);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(571, 411);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"label6";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Palindromas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 551);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Palindromas";
			this->Text = L"Palindromas";
			this->Load += gcnew System::EventHandler(this, &Palindromas::Palindromas_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Metodo recursivo
		String^ Palindromas_Recursiva(String^ palabra, int inicio, int final, int &contador) {
			if (palabra[inicio] != palabra[final]) {
				return " No es palindroma";
			}
			else
			{
				if (final == inicio) {
					contador++;
					return " Es palindroma";
				}
				else
				{
					return Palindromas_Recursiva(palabra, inicio +1, final -1, contador);
				}
			}
		}

		//Metodo interativo
		String^ Palindromas_Iterativa(String^ palabra, int inicio, int final, int &contador2) {
			for (int i = 0; final > i; i++) {
				for (int j = final; j >= 0; j--) {
					if (palabra[i] == palabra[j]) {
						contador2++;
						return " Es palindroma";
					}
					else {
						return " No es palindroma";
					}
				}
			}
		}

	private: System::Void Palindromas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int contador = 0;
			Stopwatch^ stopwatch = gcnew Stopwatch();
			openFileDialog1->FileName = "";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				array<String^>^ lineas = File::ReadAllLines(openFileDialog1->FileName);
				for (int i = 0; i < lineas->Length; i++)
				{
					array<String^>^ columnas = lineas[i]->Split(',');
					for (int j = 0; j < columnas->Length; j++)
					{
						int largo = columnas[j]->Length - 1;
						stopwatch->Start();
						richTextBox1->Text += "La palabra: " + columnas[j] + Palindromas_Recursiva(columnas[j], 0, largo, contador) + "\n";
						stopwatch->Stop();
						TimeSpan duracion = stopwatch->Elapsed;
						label5->Text = duracion.ToString();
					}
				}
				textBox1->Text += Convert::ToString("La cantidad de palabras palindromas son: " + contador.ToString());
			}
		}
		catch(Exception^ ex) {
			MessageBox::Show("No ha ingresado un archivo txt, intentar de nuevo");

		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int contador2 = 0;
		Stopwatch^ stopwatch = gcnew Stopwatch();
		openFileDialog1->FileName = "";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			array<String^>^ lineas = File::ReadAllLines(openFileDialog1->FileName);
			if (lineas->Length > 0) {
				for (int i = 0; i < lineas->Length; i++)
				{
					array<String^>^ columnas = lineas[i]->Split(',');
					for (int j = 0; j < columnas->Length; j++)
					{
						int largo = columnas[j]->Length - 1;
						stopwatch->Start();
						richTextBox2->Text += "La palabra: " + columnas[j] + Palindromas_Iterativa(columnas[j], 0, largo, contador2) + "\n";
						stopwatch->Stop();
						TimeSpan duracion = stopwatch->Elapsed;
						label6->Text = duracion.ToString();
					}
				}
				textBox2->Text += Convert::ToString("La cantidad de palabras palindromas son: " + contador2.ToString());
			}
			
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha ingresado un archivo txt, intentar de nuevo");

	}
}
};
}
