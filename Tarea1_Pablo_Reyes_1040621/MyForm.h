#pragma once
#include "Palindromas.h";
#include "Conversion.h";
#include "Multiplicacion.h";
namespace Tarea1PabloReyes1040621 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Panel_Contenedor;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->Panel_Contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Panel_Contenedor
			// 
			this->Panel_Contenedor->Location = System::Drawing::Point(258, 12);
			this->Panel_Contenedor->Name = L"Panel_Contenedor";
			this->Panel_Contenedor->Size = System::Drawing::Size(745, 559);
			this->Panel_Contenedor->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(13, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(239, 558);
			this->panel2->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(112, 495);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 44);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(15, 324);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(215, 44);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Conversion de base m a n";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(15, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 44);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Palabras Palindromas";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Multiplicacion de 2 numeros con sumas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Seleccione el ejercicio\r\n que desea probar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 87);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1015, 610);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Panel_Contenedor);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		template <class T>
		void AbrirPaneles(T formHijo) {
			if (this->Panel_Contenedor->Controls->Count > 0)
				this->Panel_Contenedor->Controls->RemoveAt(0);
			formHijo->TopLevel = false;
			formHijo->Dock = DockStyle::Fill;
			this->Panel_Contenedor->Controls->Add(formHijo);
			this->Panel_Contenedor->Tag = formHijo;
			formHijo->Show();
		}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPaneles(gcnew Tarea1PabloReyes1040621::Palindromas);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPaneles(gcnew Tarea1PabloReyes1040621::Conversion);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPaneles(gcnew Tarea1PabloReyes1040621::Multiplicacion);
}
};
}
