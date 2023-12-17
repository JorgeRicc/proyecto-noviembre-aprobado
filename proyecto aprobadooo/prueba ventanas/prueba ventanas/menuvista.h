#pragma once
#include"Servicio.h"
#include"guardia.h"
#include"Personal.h"
#include"noticias.h"
#include"agregar_servicio.h"
using namespace std;

namespace prueba_ventanas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuvista
	/// </summary>
	public ref class menuvista : public System::Windows::Forms::Form
	{
	public:
		menuvista(void)
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
		~menuvista()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_lateral;
	protected:
	private: System::Windows::Forms::Panel^ panel_medio;
	private: System::Windows::Forms::Button^ button_personal;
	private: System::Windows::Forms::Button^ button_servicios;
	private: System::Windows::Forms::Button^ button_guardia;
	private: System::Windows::Forms::Panel^ panel_arriba;

	private: System::Windows::Forms::LinkLabel^ link_cerrar;
	private: System::Windows::Forms::Button^ button_inicio;

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
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->button_inicio = (gcnew System::Windows::Forms::Button());
			this->button_personal = (gcnew System::Windows::Forms::Button());
			this->button_servicios = (gcnew System::Windows::Forms::Button());
			this->button_guardia = (gcnew System::Windows::Forms::Button());
			this->panel_arriba = (gcnew System::Windows::Forms::Panel());
			this->link_cerrar = (gcnew System::Windows::Forms::LinkLabel());
			this->panel_medio = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral->SuspendLayout();
			this->panel_arriba->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::Red;
			this->panel_lateral->Controls->Add(this->button_inicio);
			this->panel_lateral->Controls->Add(this->button_personal);
			this->panel_lateral->Controls->Add(this->button_servicios);
			this->panel_lateral->Controls->Add(this->button_guardia);
			this->panel_lateral->Controls->Add(this->panel_arriba);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(217, 344);
			this->panel_lateral->TabIndex = 0;
			this->panel_lateral->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &menuvista::panel_lateral_Paint);
			// 
			// button_inicio
			// 
			this->button_inicio->BackColor = System::Drawing::Color::White;
			this->button_inicio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_inicio->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_inicio->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_inicio->Location = System::Drawing::Point(0, 201);
			this->button_inicio->Name = L"button_inicio";
			this->button_inicio->Size = System::Drawing::Size(217, 36);
			this->button_inicio->TabIndex = 4;
			this->button_inicio->Text = L"Inicio";
			this->button_inicio->UseVisualStyleBackColor = false;
			this->button_inicio->Click += gcnew System::EventHandler(this, &menuvista::button_inicio_Click);
			// 
			// button_personal
			// 
			this->button_personal->BackColor = System::Drawing::Color::White;
			this->button_personal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_personal->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_personal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_personal->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_personal->Location = System::Drawing::Point(0, 165);
			this->button_personal->Name = L"button_personal";
			this->button_personal->Size = System::Drawing::Size(217, 36);
			this->button_personal->TabIndex = 3;
			this->button_personal->Text = L"Personal";
			this->button_personal->UseVisualStyleBackColor = false;
			this->button_personal->Click += gcnew System::EventHandler(this, &menuvista::button_personal_Click);
			// 
			// button_servicios
			// 
			this->button_servicios->BackColor = System::Drawing::Color::White;
			this->button_servicios->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_servicios->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_servicios->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_servicios->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_servicios->Location = System::Drawing::Point(0, 129);
			this->button_servicios->Name = L"button_servicios";
			this->button_servicios->Size = System::Drawing::Size(217, 36);
			this->button_servicios->TabIndex = 2;
			this->button_servicios->Text = L"Servicio";
			this->button_servicios->UseVisualStyleBackColor = false;
			this->button_servicios->Click += gcnew System::EventHandler(this, &menuvista::button_servicios_Click);
			// 
			// button_guardia
			// 
			this->button_guardia->BackColor = System::Drawing::Color::White;
			this->button_guardia->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_guardia->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_guardia->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_guardia->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_guardia->Location = System::Drawing::Point(0, 93);
			this->button_guardia->Name = L"button_guardia";
			this->button_guardia->Size = System::Drawing::Size(217, 36);
			this->button_guardia->TabIndex = 0;
			this->button_guardia->Text = L"Guardia";
			this->button_guardia->UseVisualStyleBackColor = false;
			this->button_guardia->Click += gcnew System::EventHandler(this, &menuvista::button_guardia_Click);
			// 
			// panel_arriba
			// 
			this->panel_arriba->Controls->Add(this->link_cerrar);
			this->panel_arriba->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_arriba->Location = System::Drawing::Point(0, 0);
			this->panel_arriba->Name = L"panel_arriba";
			this->panel_arriba->Size = System::Drawing::Size(217, 93);
			this->panel_arriba->TabIndex = 1;
			this->panel_arriba->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &menuvista::panel_arriba_Paint);
			// 
			// link_cerrar
			// 
			this->link_cerrar->AutoSize = true;
			this->link_cerrar->Location = System::Drawing::Point(3, 9);
			this->link_cerrar->Name = L"link_cerrar";
			this->link_cerrar->Size = System::Drawing::Size(70, 13);
			this->link_cerrar->TabIndex = 4;
			this->link_cerrar->TabStop = true;
			this->link_cerrar->Text = L"Cerrar Sesión";
			this->link_cerrar->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &menuvista::link_cerrar_LinkClicked);
			// 
			// panel_medio
			// 
			this->panel_medio->BackColor = System::Drawing::Color::White;
			this->panel_medio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel_medio->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_medio->Location = System::Drawing::Point(217, 0);
			this->panel_medio->Name = L"panel_medio";
			this->panel_medio->Size = System::Drawing::Size(509, 344);
			this->panel_medio->TabIndex = 1;
			this->panel_medio->VisibleChanged += gcnew System::EventHandler(this, &menuvista::button_inicio_Click);
			this->panel_medio->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &menuvista::panel_medio_Paint);
			// 
			// menuvista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 344);
			this->Controls->Add(this->panel_medio);
			this->Controls->Add(this->panel_lateral);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"menuvista";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"menuvista";
			this->panel_lateral->ResumeLayout(false);
			this->panel_arriba->ResumeLayout(false);
			this->panel_arriba->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		template <class t>  //abre las vistas diferentes, personal, servicios, etc
		void abrirpanel(t formhijo)
		{
			if (this->panel_medio->Controls->Count > 0)
				this->panel_medio->Controls->RemoveAt(0);//cuebta la cantidad de formularios en el panel
			formhijo->TopLevel = false;
			formhijo->Dock = DockStyle::Fill; // lo coloca en el medioal panel despues de abrirlo
			this->panel_medio->Controls->Add(formhijo);
			this->panel_medio->Tag = formhijo;
			formhijo->Show();
		}
		private: System::Void panel_lateral_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		private: System::Void panel_arriba_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
		private: System::Void button_guardia_Click(System::Object^ sender, System::EventArgs^ e) {
			this->abrirpanel(gcnew prueba_ventanas::guardia);
		}
		private: System::Void button_servicios_Click(System::Object^ sender, System::EventArgs^ e) {
			this->abrirpanel(gcnew prueba_ventanas::Servicio);
		}
		private: System::Void button_personal_Click(System::Object^ sender, System::EventArgs^ e) {
			this->abrirpanel(gcnew prueba_ventanas::Personal);
		}
		private: System::Void link_cerrar_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			this->Visible = false;
		}
		private: System::Void button_inicio_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ejecutarpanel();
		//this->abrirpanel(gcnew prueba_ventanas::noticias);
	}
		private: System::Void panel_medio_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			//ejecutarpanel();
			}
		 public: void ejecutarpanel()
	   { 
		   this->abrirpanel(gcnew prueba_ventanas::noticias);
	   }
};
}
