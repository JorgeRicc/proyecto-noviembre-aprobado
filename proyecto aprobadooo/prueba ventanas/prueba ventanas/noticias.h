#pragma once

namespace prueba_ventanas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;// incluyo libreria mysql
	/// <summary>
	/// Resumen de noticias
	/// </summary>
	public ref class noticias : public System::Windows::Forms::Form
	{
	public:
		noticias(void)
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
		~noticias()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=4703845ricco; database=voluntarios;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);//conecto BD

	private: System::Windows::Forms::Label^ lbl_noticias;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(noticias::typeid));
			this->lbl_noticias = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_noticias
			// 
			this->lbl_noticias->AutoSize = true;
			this->lbl_noticias->BackColor = System::Drawing::Color::Transparent;
			this->lbl_noticias->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lbl_noticias->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_noticias->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_noticias->Location = System::Drawing::Point(126, 47);
			this->lbl_noticias->Name = L"lbl_noticias";
			this->lbl_noticias->Size = System::Drawing::Size(71, 19);
			this->lbl_noticias->TabIndex = 1;
			this->lbl_noticias->Text = L"Noticias";
			this->lbl_noticias->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lbl_noticias->Click += gcnew System::EventHandler(this, &noticias::lbl_noticias_Click);
			// 
			// noticias
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(493, 305);
			this->Controls->Add(this->lbl_noticias);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"noticias";
			this->Text = L"noticias";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*void noticia() {
			this->conn->Open();
			String^ sql = "select noticia from noticias order by noticia desc";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
			try {
				cursor->ExecuteNonQuery();
				
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			this->conn->Close();
		}*/
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl_noticias_Click(System::Object^ sender, System::EventArgs^ e) {
		this->conn->Open();
		String^ sql = "select noticia from noticias order by noticia desc";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
		try {
			cursor->ExecuteNonQuery();
			lbl_noticias->Cursor;

		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		this->conn->Close();
		
	}
	};
}
