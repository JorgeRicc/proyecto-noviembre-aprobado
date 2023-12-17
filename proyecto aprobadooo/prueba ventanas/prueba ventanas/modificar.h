#pragma once


namespace prueba_ventanas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de modificar
	/// </summary>
	public ref class modificar : public System::Windows::Forms::Form
	{
	public:
		modificar(void)
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
		~modificar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ lbl_eliminar;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button_cancelar;
	private: System::Windows::Forms::Button^ button_crearusu;
	private: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::TextBox^ txt_contr;

	public: System::Windows::Forms::TextBox^ txt_lega;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(modificar::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_eliminar = (gcnew System::Windows::Forms::LinkLabel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button_cancelar = (gcnew System::Windows::Forms::Button());
			this->button_crearusu = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_contr = (gcnew System::Windows::Forms::TextBox());
			this->txt_lega = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(48, -38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 20);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Registro de Usuario";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-73, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 16);
			this->label5->TabIndex = 24;
			this->label5->Text = L"DNI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-73, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 21;
			this->label4->Text = L"N° Legajo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-73, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Mail";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-73, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Apellido";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-73, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Nombre";
			// 
			// lbl_eliminar
			// 
			this->lbl_eliminar->AutoSize = true;
			this->lbl_eliminar->Location = System::Drawing::Point(387, 306);
			this->lbl_eliminar->Name = L"lbl_eliminar";
			this->lbl_eliminar->Size = System::Drawing::Size(87, 13);
			this->lbl_eliminar->TabIndex = 42;
			this->lbl_eliminar->TabStop = true;
			this->lbl_eliminar->Text = L"Eliminar Personal";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::DarkRed;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(282, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->TabIndex = 41;
			this->comboBox1->Text = L"Jerarquia";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(131, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 20);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Actualizar Usuario";
			// 
			// button_cancelar
			// 
			this->button_cancelar->BackColor = System::Drawing::Color::Transparent;
			this->button_cancelar->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cancelar->Location = System::Drawing::Point(188, 284);
			this->button_cancelar->Name = L"button_cancelar";
			this->button_cancelar->Size = System::Drawing::Size(112, 23);
			this->button_cancelar->TabIndex = 39;
			this->button_cancelar->Text = L"Cancelar";
			this->button_cancelar->UseVisualStyleBackColor = false;
			this->button_cancelar->Click += gcnew System::EventHandler(this, &modificar::button_cancelar_Click);
			// 
			// button_crearusu
			// 
			this->button_crearusu->BackColor = System::Drawing::Color::Blue;
			this->button_crearusu->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_crearusu->Location = System::Drawing::Point(54, 284);
			this->button_crearusu->Name = L"button_crearusu";
			this->button_crearusu->Size = System::Drawing::Size(112, 23);
			this->button_crearusu->TabIndex = 38;
			this->button_crearusu->Text = L"Modificar Usuario";
			this->button_crearusu->UseVisualStyleBackColor = false;
			this->button_crearusu->Click += gcnew System::EventHandler(this, &modificar::button_crearusu_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(10, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 16);
			this->label8->TabIndex = 37;
			this->label8->Text = L"DNI";
			// 
			// txt_contr
			// 
			this->txt_contr->Location = System::Drawing::Point(91, 233);
			this->txt_contr->Name = L"txt_contr";
			this->txt_contr->PasswordChar = '*';
			this->txt_contr->Size = System::Drawing::Size(100, 20);
			this->txt_contr->TabIndex = 36;
			// 
			// txt_lega
			// 
			this->txt_lega->Location = System::Drawing::Point(91, 189);
			this->txt_lega->Name = L"txt_lega";
			this->txt_lega->Size = System::Drawing::Size(100, 20);
			this->txt_lega->TabIndex = 35;
			this->txt_lega->TextChanged += gcnew System::EventHandler(this, &modificar::txt_lega_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(10, 189);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 16);
			this->label9->TabIndex = 34;
			this->label9->Text = L"N° Legajo";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(91, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(10, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 16);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Mail";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(91, 105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(10, 105);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Apellido";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(10, 53);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 16);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Nombre";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 28;
			// 
			// modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(496, 328);
			this->Controls->Add(this->lbl_eliminar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button_cancelar);
			this->Controls->Add(this->button_crearusu);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_contr);
			this->Controls->Add(this->txt_lega);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"modificar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"modificar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void txt_lega_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button_crearusu_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Usuario modificado correctamente");
	this->Close();
}
};
}
