#pragma once
using namespace std;
#include "guardia.h"
#include"menuvista.h"
#include"Servicio.h"
#include"registro.h"
#include"olvidocontra.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;//incluyo libreria mysql

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=ricco; password=4703845ricco; database=voluntarios;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);//conecto a la BD

	private: System::Windows::Forms::Button^ btn_ingresar;
	private: System::Windows::Forms::Button^ button_registrarse;

	private: System::Windows::Forms::LinkLabel^ link_olvido;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_Contra;

	private: System::Windows::Forms::TextBox^ txt_Usuario;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ lbl_salir;





	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_ingresar = (gcnew System::Windows::Forms::Button());
			this->button_registrarse = (gcnew System::Windows::Forms::Button());
			this->link_olvido = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_Contra = (gcnew System::Windows::Forms::TextBox());
			this->txt_Usuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_salir = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// btn_ingresar
			// 
			this->btn_ingresar->BackColor = System::Drawing::Color::Red;
			this->btn_ingresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ingresar->Location = System::Drawing::Point(91, 163);
			this->btn_ingresar->Name = L"btn_ingresar";
			this->btn_ingresar->Size = System::Drawing::Size(75, 23);
			this->btn_ingresar->TabIndex = 1;
			this->btn_ingresar->Text = L"Ingresar";
			this->btn_ingresar->UseVisualStyleBackColor = false;
			this->btn_ingresar->Click += gcnew System::EventHandler(this, &Form1::btn_ingresar_Click);
			// 
			// button_registrarse
			// 
			this->button_registrarse->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_registrarse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_registrarse->Location = System::Drawing::Point(91, 192);
			this->button_registrarse->Name = L"button_registrarse";
			this->button_registrarse->Size = System::Drawing::Size(75, 23);
			this->button_registrarse->TabIndex = 2;
			this->button_registrarse->Text = L"Registrarse";
			this->button_registrarse->UseVisualStyleBackColor = false;
			this->button_registrarse->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// link_olvido
			// 
			this->link_olvido->AutoSize = true;
			this->link_olvido->Location = System::Drawing::Point(150, 239);
			this->link_olvido->Name = L"link_olvido";
			this->link_olvido->Size = System::Drawing::Size(107, 13);
			this->link_olvido->TabIndex = 6;
			this->link_olvido->TabStop = true;
			this->link_olvido->Text = L"Olvido su contraseña";
			this->link_olvido->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::link_olvido_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Contraseña";
			// 
			// txt_Contra
			// 
			this->txt_Contra->Location = System::Drawing::Point(79, 129);
			this->txt_Contra->Name = L"txt_Contra";
			this->txt_Contra->PasswordChar = '*';
			this->txt_Contra->Size = System::Drawing::Size(100, 20);
			this->txt_Contra->TabIndex = 8;
			// 
			// txt_Usuario
			// 
			this->txt_Usuario->Location = System::Drawing::Point(79, 80);
			this->txt_Usuario->Name = L"txt_Usuario";
			this->txt_Usuario->Size = System::Drawing::Size(100, 20);
			this->txt_Usuario->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Usuario";
			// 
			// lbl_salir
			// 
			this->lbl_salir->AutoSize = true;
			this->lbl_salir->Location = System::Drawing::Point(25, 238);
			this->lbl_salir->Name = L"lbl_salir";
			this->lbl_salir->Size = System::Drawing::Size(27, 13);
			this->lbl_salir->TabIndex = 11;
			this->lbl_salir->TabStop = true;
			this->lbl_salir->Text = L"Salir";
			this->lbl_salir->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::lbl_salir_LinkClicked);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(269, 261);
			this->Controls->Add(this->lbl_salir);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_Usuario);
			this->Controls->Add(this->txt_Contra);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->link_olvido);
			this->Controls->Add(this->button_registrarse);
			this->Controls->Add(this->btn_ingresar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btn_ingresar_Click(System::Object^ sender, System::EventArgs^ e) {//comparo los datos que ingreso con lo de BD
		this->conn->Close();
		String^ sql = "select * from usuarios where id_legajo = '" + txt_Usuario->Text + "' and contraseña= '" + txt_Contra->Text + "' ";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		MySqlDataReader^ dataReader;

		try
		{//try si da ok hago esto catch tiro el error en un mensaje
			this->conn->Open();
			dataReader = cursor->ExecuteReader();
			if (dataReader->Read())
			{
				MessageBox::Show(L"Bienvenido Usuario " + txt_Usuario->Text);
				prueba_ventanas::menuvista^ menuVista = gcnew prueba_ventanas::menuvista();
				this->Visible = false;//cierro la vista del login
				menuVista->ShowDialog();// muestro el menu vista
				this->Visible = true;// habilito el menu vista
			}
			else
			{
				MessageBox::Show(L"Usuario Incorrecto");
				this->conn->Close();
			}

		}
		catch (Exception^ x)
		{
			MessageBox::Show(x->Message);
			this->conn->Close();
		}
		/*prueba_ventanas::menuvista^ menuVista = gcnew prueba_ventanas::menuvista();
		this->Visible = false;
		menuVista->ShowDialog();
 		this->Visible = true;*/
		//menuVista->ejecutarpanel();
		
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	prueba_ventanas::registro^ Registro = gcnew prueba_ventanas::registro();
	this->Visible = false;
	Registro->ShowDialog();
	this->Visible = true;
	Registro->~registro();
}
private: System::Void link_olvido_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	prueba_ventanas::olvidocontra^ Olvido = gcnew prueba_ventanas::olvidocontra();
	this->Visible = false;
	Olvido->ShowDialog();
	this->Visible = true;
}
private: System::Void lbl_salir_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Close();
}
};
}
