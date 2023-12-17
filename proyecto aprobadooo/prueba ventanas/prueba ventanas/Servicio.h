#pragma once
#include"agregar_servicio.h"

namespace prueba_ventanas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;// incluyo libreria mysql
	/// <summary>
	/// Resumen de Servicio
	/// </summary>
	public ref class Servicio : public System::Windows::Forms::Form
	{
	public:
		Servicio(void)
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
		~Servicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=4703845ricco; database=voluntarios;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);//conecto BD
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ data_serviciocurs;
	private: System::Windows::Forms::Button^ btn_carga;
	protected:

	protected:

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
			this->data_serviciocurs = (gcnew System::Windows::Forms::DataGridView());
			this->btn_carga = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_serviciocurs))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(141, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Servicio en curso";
			this->label1->Click += gcnew System::EventHandler(this, &Servicio::label1_Click);
			// 
			// data_serviciocurs
			// 
			this->data_serviciocurs->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_serviciocurs->Location = System::Drawing::Point(12, 52);
			this->data_serviciocurs->Name = L"data_serviciocurs";
			this->data_serviciocurs->Size = System::Drawing::Size(469, 68);
			this->data_serviciocurs->TabIndex = 1;
			// 
			// btn_carga
			// 
			this->btn_carga->BackColor = System::Drawing::Color::Red;
			this->btn_carga->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_carga->Location = System::Drawing::Point(49, 191);
			this->btn_carga->Name = L"btn_carga";
			this->btn_carga->Size = System::Drawing::Size(169, 23);
			this->btn_carga->TabIndex = 2;
			this->btn_carga->Text = L"Cargar Servicio";
			this->btn_carga->UseVisualStyleBackColor = false;
			this->btn_carga->Click += gcnew System::EventHandler(this, &Servicio::btn_carga_Click);
			// 
			// Servicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 305);
			this->Controls->Add(this->btn_carga);
			this->Controls->Add(this->data_serviciocurs);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Servicio";
			this->Text = L"Servicio";
			this->Load += gcnew System::EventHandler(this, &Servicio::Servicio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_serviciocurs))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Servicio_Load(System::Object^ sender, System::EventArgs^ e) {
		this->consulta();// llamo a funcion consulta 
	}
		   DataTable^ Servicio::getData()//obtengo datos de la tabla
		   {
			   String^ Sql = "select * from emergencias group by id_emergencia desc limit 1 ";
			   MySqlCommand^ cursor = gcnew MySqlCommand(Sql, this->conn);
			   MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
			   DataTable^ tabla = gcnew DataTable();
			   data->Fill(tabla);
			   return tabla;
		   }
	public: void consulta()
	{
		this->conn->Open();
		this->data_serviciocurs->DataSource = this->getData();//lleno el datagridview con datos
		this->conn->Close();
	}

	private: System::Void btn_carga_Click(System::Object^ sender, System::EventArgs^ e) {
		prueba_ventanas::agregar_servicio^ Agregar = gcnew prueba_ventanas::agregar_servicio();
		this->Visible = false;
		Agregar->ShowDialog();
		this->Visible = true;
	}
};
}
