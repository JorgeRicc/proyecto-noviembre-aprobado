#pragma once

namespace prueba_ventanas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de registro
	/// </summary>
	public ref class registro : public System::Windows::Forms::Form
	{
	public:
		registro(void)
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
		~registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=4703845ricco; database=voluntarios;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);// realiza la conexion y la nombra conn
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_leg;
	private: System::Windows::Forms::TextBox^ txt_contra;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button_crearusu;
	private: System::Windows::Forms::Button^ button_cancelar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::LinkLabel^ lbl_eliminar;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registro::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_leg = (gcnew System::Windows::Forms::TextBox());
			this->txt_contra = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_crearusu = (gcnew System::Windows::Forms::Button());
			this->button_cancelar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_eliminar = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(115, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &registro::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(115, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Mail";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(115, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"N° Legajo";
			// 
			// txt_leg
			// 
			this->txt_leg->Location = System::Drawing::Point(115, 183);
			this->txt_leg->Name = L"txt_leg";
			this->txt_leg->Size = System::Drawing::Size(100, 20);
			this->txt_leg->TabIndex = 7;
			// 
			// txt_contra
			// 
			this->txt_contra->Location = System::Drawing::Point(115, 227);
			this->txt_contra->Name = L"txt_contra";
			this->txt_contra->PasswordChar = '*';
			this->txt_contra->Size = System::Drawing::Size(100, 20);
			this->txt_contra->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"DNI";
			// 
			// button_crearusu
			// 
			this->button_crearusu->BackColor = System::Drawing::Color::Blue;
			this->button_crearusu->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_crearusu->Location = System::Drawing::Point(78, 278);
			this->button_crearusu->Name = L"button_crearusu";
			this->button_crearusu->Size = System::Drawing::Size(112, 23);
			this->button_crearusu->TabIndex = 10;
			this->button_crearusu->Text = L"Crear Usuario";
			this->button_crearusu->UseVisualStyleBackColor = false;
			this->button_crearusu->Click += gcnew System::EventHandler(this, &registro::button_crearusu_Click);
			// 
			// button_cancelar
			// 
			this->button_cancelar->BackColor = System::Drawing::Color::Transparent;
			this->button_cancelar->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cancelar->Location = System::Drawing::Point(212, 278);
			this->button_cancelar->Name = L"button_cancelar";
			this->button_cancelar->Size = System::Drawing::Size(112, 23);
			this->button_cancelar->TabIndex = 11;
			this->button_cancelar->Text = L"Cancelar";
			this->button_cancelar->UseVisualStyleBackColor = false;
			this->button_cancelar->Click += gcnew System::EventHandler(this, &registro::button_cancelar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(155, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Registro de Usuario";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::DarkRed;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(306, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->Text = L"Jerarquia";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &registro::comboBox1_SelectedIndexChanged);
			// 
			// lbl_eliminar
			// 
			this->lbl_eliminar->AutoSize = true;
			this->lbl_eliminar->Location = System::Drawing::Point(378, 333);
			this->lbl_eliminar->Name = L"lbl_eliminar";
			this->lbl_eliminar->Size = System::Drawing::Size(87, 13);
			this->lbl_eliminar->TabIndex = 14;
			this->lbl_eliminar->TabStop = true;
			this->lbl_eliminar->Text = L"Eliminar Personal";
			this->lbl_eliminar->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &registro::lbl_eliminar_LinkClicked);
			// 
			// registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(512, 367);
			this->Controls->Add(this->lbl_eliminar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button_cancelar);
			this->Controls->Add(this->button_crearusu);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_contra);
			this->Controls->Add(this->txt_leg);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"registro";
			this->Text = L"registro";
			this->Load += gcnew System::EventHandler(this, &registro::registro_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void insertar(String^ l, String^ c) {//inserta los datos a traves de un comando sql
			String^ sql = "insert into usuarios (id_legajo, contraseña) values ("+l+", "+c+")";
			MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
			try
			{
				cursor->ExecuteNonQuery();
				MessageBox::Show(L" Usuario Creado exitosamente " + txt_leg->Text );
			}
			catch (Exception^e)
			{
				MessageBox::Show(e->Message);
			}
		}
			 
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
	}
private: System::Void registro_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button_crearusu_Click(System::Object^ sender, System::EventArgs^ e) {//boton crear usuarios
	this->conn->Open();
	this->insertar(this->txt_leg->Text, this->txt_contra-> Text);// apunta a insertar y le pasa los valores de los texbox
	this->conn->Close();
	this->Visible=false;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_eliminar_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
};
}
