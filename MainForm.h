#pragma once
#include "DoubleLinkedList.h";
#include "Node.h";
#include "FiguraGeometrica.h";
#include "Circulo.h";
#include "Rectangulo.h";
#include "Cuadrado.h";
#include "Triangulo.h";

namespace Lab6KarlBech1015920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		DoubleLinkedList<FiguraGeometrica*>* myFigureList;
		MainForm(void)
		{
			InitializeComponent();
			myFigureList = new DoubleLinkedList<FiguraGeometrica*>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ btnInsertarCirculo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtCirculoCircuferencia;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnRectangulo;
	private: System::Windows::Forms::TextBox^ txtRectAncho;
	private: System::Windows::Forms::TextBox^ txtRectAlto;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnlList;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btnCuadrado;



	private: System::Windows::Forms::TextBox^ txtladoscuadrado;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btntriangulo;
	private: System::Windows::Forms::TextBox^ txtlado3;

	private: System::Windows::Forms::TextBox^ txtanchotriangulo;

	private: System::Windows::Forms::TextBox^ txtaltotriangulo;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnInsertarCirculo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtCirculoCircuferencia = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRectangulo = (gcnew System::Windows::Forms::Button());
			this->txtRectAncho = (gcnew System::Windows::Forms::TextBox());
			this->txtRectAlto = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlList = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->txtladoscuadrado = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->txtlado3 = (gcnew System::Windows::Forms::TextBox());
			this->txtanchotriangulo = (gcnew System::Windows::Forms::TextBox());
			this->txtaltotriangulo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btntriangulo = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnInsertarCirculo);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtCirculoCircuferencia);
			this->groupBox1->Location = System::Drawing::Point(12, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(206, 130);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Circulo";
			// 
			// btnInsertarCirculo
			// 
			this->btnInsertarCirculo->Location = System::Drawing::Point(21, 101);
			this->btnInsertarCirculo->Name = L"btnInsertarCirculo";
			this->btnInsertarCirculo->Size = System::Drawing::Size(179, 23);
			this->btnInsertarCirculo->TabIndex = 3;
			this->btnInsertarCirculo->Text = L"Insertar Circulo";
			this->btnInsertarCirculo->UseVisualStyleBackColor = true;
			this->btnInsertarCirculo->Click += gcnew System::EventHandler(this, &MainForm::btnInsertarCirculo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Circunferencia:";
			// 
			// txtCirculoCircuferencia
			// 
			this->txtCirculoCircuferencia->Location = System::Drawing::Point(100, 34);
			this->txtCirculoCircuferencia->Name = L"txtCirculoCircuferencia";
			this->txtCirculoCircuferencia->Size = System::Drawing::Size(100, 20);
			this->txtCirculoCircuferencia->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnRectangulo);
			this->groupBox2->Controls->Add(this->txtRectAncho);
			this->groupBox2->Controls->Add(this->txtRectAlto);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(258, 23);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 130);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Rectangulo";
			// 
			// btnRectangulo
			// 
			this->btnRectangulo->Location = System::Drawing::Point(25, 101);
			this->btnRectangulo->Name = L"btnRectangulo";
			this->btnRectangulo->Size = System::Drawing::Size(157, 23);
			this->btnRectangulo->TabIndex = 4;
			this->btnRectangulo->Text = L"Insertar Rectángulo";
			this->btnRectangulo->UseVisualStyleBackColor = true;
			this->btnRectangulo->Click += gcnew System::EventHandler(this, &MainForm::btnRectangulo_Click);
			// 
			// txtRectAncho
			// 
			this->txtRectAncho->Location = System::Drawing::Point(82, 67);
			this->txtRectAncho->Name = L"txtRectAncho";
			this->txtRectAncho->Size = System::Drawing::Size(100, 20);
			this->txtRectAncho->TabIndex = 3;
			// 
			// txtRectAlto
			// 
			this->txtRectAlto->Location = System::Drawing::Point(82, 34);
			this->txtRectAlto->Name = L"txtRectAlto";
			this->txtRectAlto->Size = System::Drawing::Size(100, 20);
			this->txtRectAlto->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Ancho:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Alto:";
			// 
			// pnlList
			// 
			this->pnlList->BackColor = System::Drawing::Color::White;
			this->pnlList->Location = System::Drawing::Point(12, 174);
			this->pnlList->Name = L"pnlList";
			this->pnlList->Size = System::Drawing::Size(1046, 328);
			this->pnlList->TabIndex = 2;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtladoscuadrado);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->btntriangulo);
			this->groupBox3->Location = System::Drawing::Point(488, 23);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(223, 124);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cuadrado";
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->Location = System::Drawing::Point(9, 99);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(130, 23);
			this->btnCuadrado->TabIndex = 2;
			this->btnCuadrado->Text = L"Insertar Triangulo";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &MainForm::btnCuadrado_Click);
			// 
			// txtladoscuadrado
			// 
			this->txtladoscuadrado->Location = System::Drawing::Point(49, 60);
			this->txtladoscuadrado->Name = L"txtladoscuadrado";
			this->txtladoscuadrado->Size = System::Drawing::Size(100, 20);
			this->txtladoscuadrado->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Tamaño de los lados:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnCuadrado);
			this->groupBox4->Controls->Add(this->txtlado3);
			this->groupBox4->Controls->Add(this->txtanchotriangulo);
			this->groupBox4->Controls->Add(this->txtaltotriangulo);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Location = System::Drawing::Point(736, 23);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(238, 124);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Triangulo";
			// 
			// txtlado3
			// 
			this->txtlado3->Location = System::Drawing::Point(92, 83);
			this->txtlado3->Name = L"txtlado3";
			this->txtlado3->Size = System::Drawing::Size(100, 20);
			this->txtlado3->TabIndex = 6;
			// 
			// txtanchotriangulo
			// 
			this->txtanchotriangulo->Location = System::Drawing::Point(92, 59);
			this->txtanchotriangulo->Name = L"txtanchotriangulo";
			this->txtanchotriangulo->Size = System::Drawing::Size(100, 20);
			this->txtanchotriangulo->TabIndex = 5;
			// 
			// txtaltotriangulo
			// 
			this->txtaltotriangulo->Location = System::Drawing::Point(92, 37);
			this->txtaltotriangulo->Name = L"txtaltotriangulo";
			this->txtaltotriangulo->Size = System::Drawing::Size(100, 20);
			this->txtaltotriangulo->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Lado inclinado:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Base:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Alto:";
			// 
			// btntriangulo
			// 
			this->btntriangulo->Location = System::Drawing::Point(49, 101);
			this->btntriangulo->Name = L"btntriangulo";
			this->btntriangulo->Size = System::Drawing::Size(120, 23);
			this->btntriangulo->TabIndex = 0;
			this->btntriangulo->Text = L"Insertar Cuadrado";
			this->btntriangulo->UseVisualStyleBackColor = true;
			this->btntriangulo->Click += gcnew System::EventHandler(this, &MainForm::btntriangulo_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1070, 514);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->pnlList);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		System::Void btnInsertarCirculo_Click(System::Object^ sender, System::EventArgs^ e) {
			if (txtCirculoCircuferencia->Text->Trim() != "") {
				FiguraGeometrica* newCircle = new Circulo();
				newCircle->width = Convert::ToDouble(txtCirculoCircuferencia->Text);
				newCircle->type = 1;
				newCircle->area = newCircle->GetArea();
				newCircle->perimeter = newCircle->GetPerimeter();
				myFigureList->InsertAtEnd(newCircle);

				
				/*inicia dibujo de lista*/
				if (!myFigureList->IsEmpty()) {
					Node<FiguraGeometrica*>* temp = myFigureList->start;

					for (int i = 0; i < myFigureList->count; i++) {
						FiguraGeometrica* actual = temp->value;
						DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->width, actual->width, actual->lado3);
						temp = temp->next;
					}

				}
				/*Finaliza dibujo de lista*/

				MessageBox::Show("Circulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	private: 
		System::Void btnRectangulo_Click(System::Object^ sender, System::EventArgs^ e) {
			if ((txtRectAlto->Text->Trim() != "") && (txtRectAncho->Text->Trim() != "")) {
				FiguraGeometrica* newRectangle = new Rectangulo();
				newRectangle->height = Convert::ToDouble(txtRectAlto->Text);
				newRectangle->width = Convert::ToDouble(txtRectAncho->Text);
				newRectangle->type = 2;
				newRectangle->area = newRectangle->GetArea();
				newRectangle->perimeter = newRectangle->GetPerimeter();
				myFigureList->InsertAtEnd(newRectangle);

				/*inicia dibujo de lista*/
				if (!myFigureList->IsEmpty()) {
					Node<FiguraGeometrica*>* temp = myFigureList->start;

					for (int i = 0; i < myFigureList->count; i++) {
						FiguraGeometrica* actual = temp->value;
						DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width, actual->lado3);
						temp = temp->next;
					}

				}
				/*Finaliza dibujo de lista*/

				MessageBox::Show("Rectangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		void DrawNode(Graphics^ canvas, int posx, int posy, int type, double area, double perimeter, double height, double width, double lado3) {
			Brush^ brush = gcnew SolidBrush(Color::Red);
			Brush^ brushstring = gcnew SolidBrush(Color::White);
			System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 5, FontStyle::Bold);

			switch (type)
			{
			case 1: {
				canvas->FillEllipse(brush, RectangleF(posx, posy, width * 5, width * 5));
			}break;
			case 2: {
				canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));
			}break;
			case 3: {
				canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, width * 5));
			}break;
			case 4: {
				Point point1 = Point(posx+100, posy+100);
				Point point2 = Point(posx + width, posy + lado3);
				Point point3 = Point(posx + 100, posy + height);
				Point point4 = Point(posx + 100, posy + 100);
				
				array<Point>^ curvePoints = { point1,point2,point3,point4};

				canvas->FillPolygon(brush, curvePoints);
			}break;
			default:
				break;
			}

			canvas->DrawString("Area: " + area, fuente, brushstring, posx + 1, posy + 20);
			canvas->DrawString("Perímetro: " + perimeter, fuente, brushstring, posx + 1, posy + 30);
		}
private:
	System::Void btnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((txtaltotriangulo->Text->Trim() != "") && (txtanchotriangulo->Text->Trim() != "") && (txtlado3->Text->Trim() != ""))  {
			FiguraGeometrica* newTriangle = new Triangulo();
			newTriangle->width = Convert::ToDouble(txtanchotriangulo->Text);
			newTriangle->height = Convert::ToDouble(txtaltotriangulo->Text);
			newTriangle->lado3 = Convert::ToDouble(txtlado3->Text);
			newTriangle->type = 4;
			newTriangle->area = newTriangle->GetArea();
			newTriangle->perimeter = newTriangle->GetPerimeter();
			myFigureList->InsertAtEnd(newTriangle);

			/*inicia dibujo de lista*/
			if (!myFigureList->IsEmpty()) {
				Node<FiguraGeometrica*>* temp = myFigureList->start;

				for (int i = 0; i < myFigureList->count; i++) {
					FiguraGeometrica* actual = temp->value;
					DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width, actual->lado3);
					temp = temp->next;
				}

			}
			/*Finaliza dibujo de lista*/

			MessageBox::Show("Cuadrado insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
}
private: 
	System::Void btntriangulo_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((txtladoscuadrado->Text->Trim() != "")) {
			FiguraGeometrica* newSquare = new Cuadrado();
			newSquare->width = Convert::ToDouble(txtladoscuadrado->Text);
			newSquare->type = 3;
			newSquare->area = newSquare->GetArea();
			newSquare->perimeter = newSquare->GetPerimeter();
			myFigureList->InsertAtEnd(newSquare);

			/*inicia dibujo de lista*/
			if (!myFigureList->IsEmpty()) {
				Node<FiguraGeometrica*>* temp = myFigureList->start;

				for (int i = 0; i < myFigureList->count; i++) {
					FiguraGeometrica* actual = temp->value;
					DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width, actual->lado3);
					temp = temp->next;
				}

			}
			/*Finaliza dibujo de lista*/

			MessageBox::Show("Cuadrado insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	
}
};
}
