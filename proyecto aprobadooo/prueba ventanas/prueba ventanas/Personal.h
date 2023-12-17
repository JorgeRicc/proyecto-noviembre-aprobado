#pragma once
#include "registro.h"
#include "modificar.h"

namespace prueba_ventanas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;// incluyo libreria mysql
	/// <summary>
	/// Resumen de Personal
	/// </summary>
	public ref class Personal : public System::Windows::Forms::Form
	{
	public:
		Personal(void)
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
		~Personal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=4703845ricco; database=voluntarios;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);//conecto BD
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ data_personal;
	private: System::Windows::Forms::LinkLabel^ link_agregar;
	private: System::Windows::Forms::LinkLabel^ lbl_eliminar;
	private: System::Windows::Forms::Label^ lbl_us;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->data_personal = (gcnew System::Windows::Forms::DataGridView());
			this->link_agregar = (gcnew System::Windows::Forms::LinkLabel());
			this->lbl_eliminar = (gcnew System::Windows::Forms::LinkLabel());
			this->lbl_us = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_personal))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(175, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"personal";
			// 
			// data_personal
			// 
			this->data_personal->BackgroundColor = System::Drawing::SystemColors::Control;
			this->data_personal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_personal->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_personal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_personal->DefaultCellStyle = dataGridViewCellStyle2;
			this->data_personal->Location = System::Drawing::Point(118, 60);
			this->data_personal->Name = L"data_personal";
			this->data_personal->ReadOnly = true;
			this->data_personal->RowHeadersVisible = false;
			this->data_personal->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_personal->Size = System::Drawing::Size(219, 215);
			this->data_personal->TabIndex = 1;
			this->data_personal->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personal::data_personal_CellContentClick);
			this->data_personal->DoubleClick += gcnew System::EventHandler(this, &Personal::data_personal_DoubleClick);
			// 
			// link_agregar
			// 
			this->link_agregar->AutoSize = true;
			this->link_agregar->Location = System::Drawing::Point(393, 283);
			this->link_agregar->Name = L"link_agregar";
			this->link_agregar->Size = System::Drawing::Size(88, 13);
			this->link_agregar->TabIndex = 2;
			this->link_agregar->TabStop = true;
			this->link_agregar->Text = L"Agregar Personal";
			this->link_agregar->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Personal::link_agregar_LinkClicked);
			// 
			// lbl_eliminar
			// 
			this->lbl_eliminar->AutoSize = true;
			this->lbl_eliminar->Location = System::Drawing::Point(13, 282);
			this->lbl_eliminar->Name = L"lbl_eliminar";
			this->lbl_eliminar->Size = System::Drawing::Size(43, 13);
			this->lbl_eliminar->TabIndex = 3;
			this->lbl_eliminar->TabStop = true;
			this->lbl_eliminar->Text = L"Eliminar";
			this->lbl_eliminar->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Personal::linkLabel1_LinkClicked);
			// 
			// lbl_us
			// 
			this->lbl_us->AutoSize = true;
			this->lbl_us->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_us->Location = System::Drawing::Point(62, 283);
			this->lbl_us->Name = L"lbl_us";
			this->lbl_us->Size = System::Drawing::Size(62, 16);
			this->lbl_us->TabIndex = 4;
			this->lbl_us->Text = L"Usuario";
			this->lbl_us->Click += gcnew System::EventHandler(this, &Personal::lbl_us_Click);
			// 
			// Personal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 305);
			this->Controls->Add(this->lbl_us);
			this->Controls->Add(this->lbl_eliminar);
			this->Controls->Add(this->link_agregar);
			this->Controls->Add(this->data_personal);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Personal";
			this->Text = L"Personal";
			this->Load += gcnew System::EventHandler(this, &Personal::Personal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_personal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Personal_Load(System::Object^ sender, System::EventArgs^ e) {
		this->consulta();// llamo a funcion consulta 
	}
		   DataTable^ Personal::getData()//obtengo datos de la tabla
		   {
			   String^ Sql = "select * from usuarios group by id_legajo ";
			   MySqlCommand^ cursor = gcnew MySqlCommand(Sql, this->conn);
			   MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
			   DataTable^ tabla = gcnew DataTable();
			   data->Fill(tabla);
			   return tabla;
		   }

	public: void consulta()
	{
		this->conn->Open();
		this->data_personal->DataSource = this->getData();//lleno el datagridview con datos
		this->conn->Close();
	}



	private: System::Void link_agregar_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		prueba_ventanas::registro^ Registro = gcnew prueba_ventanas::registro();
		this->Visible = false;
		Registro->ShowDialog();
		this->Visible = true;
		Registro->~registro();
	}
	private: System::Void data_personal_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ legajo = Convert::ToString(data_personal->SelectedRows[0]->Cells[0]->Value);
		lbl_us->Text = legajo;
	}//selecciona el usuario al hacer click en el data y modifica el nombre a eliminar
	public:
		void modifica(String^ l, String^ c, String^ ref)
		{
			this->conn->Open();
			String^ sql = "update usuarios set id_legajo='" + l + "',contraseña='" + c + "' where id_legajo='" + ref + "'";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
			try {
				cursor->ExecuteNonQuery();
				MessageBox::Show("Actualizado correctamente");
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			this->conn->Close();
		}
		public:
			void eliminar(String^ l) {
				this->conn->Open();
				String^ sql = "delete from usuarios where id_legajo='"+l+"'";
				MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
				try {
					cursor->ExecuteNonQuery();
					MessageBox::Show("Eliminado correctamente");
				}
				catch (Exception^ e)
				{
					MessageBox::Show(e->Message);
				}
				this->conn->Close();
			}

	private: System::Void data_personal_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ legajo = Convert::ToString(data_personal->SelectedRows[0]->Cells[0]->Value);
		String^ dni = Convert::ToString(data_personal->SelectedRows[0]->Cells[1]->Value);
		prueba_ventanas:: modificar^ Formm = gcnew prueba_ventanas:: modificar();
		Formm->txt_lega->Text = legajo;//continuar modificacion de datos
		Formm->txt_contr->Text = dni;
		Formm->ShowDialog();
		
		this->modifica(Formm->txt_lega->Text, Formm->txt_contr->Text, legajo);
		this->consulta();
		

	//MessageBox::Show(legajo);
}//al hacer doble click en el data sobre una fila me manda a modificar
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	String^ legajo = Convert::ToString(data_personal->SelectedRows[0]->Cells[0]->Value);
	this->eliminar(legajo);
	this->consulta();
}
private: System::Void lbl_us_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
