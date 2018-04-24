#pragma once
#include "tab.h"
#include "przegrana.h"
#include "wygrana.h"

namespace Minesweeper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>

////////////////////////////////////////////////////////////////////////////////////////////
	polegry polegry1(10, 10, 10);
	


////////////////////////////////////////////////////////////////////////////////////////////
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		int x, y, diff, count=0, flag;

	public:

	public:

	public:

		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nowaGraToolStripMenuItem;

			 System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel;






	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->graToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowaGraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel
			// 
			this->tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel->Name = L"tableLayoutPanel";
			this->tableLayoutPanel->Size = System::Drawing::Size(200, 100);
			this->tableLayoutPanel->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->graToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(572, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// graToolStripMenuItem
			// 
			this->graToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->nowaGraToolStripMenuItem });
			this->graToolStripMenuItem->Name = L"graToolStripMenuItem";
			this->graToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->graToolStripMenuItem->Text = L"Gra";
			// 
			// nowaGraToolStripMenuItem
			// 
			this->nowaGraToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3
			});
			this->nowaGraToolStripMenuItem->Name = L"nowaGraToolStripMenuItem";
			this->nowaGraToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->nowaGraToolStripMenuItem->Text = L"Nowa gra";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(111, 22);
			this->toolStripMenuItem1->Text = L"£atwy";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(111, 22);
			this->toolStripMenuItem2->Text = L"Œredni";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(111, 22);
			this->toolStripMenuItem3->Text = L"Trudny";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem3_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(572, 572);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Saper";
			this->TransparencyKey = System::Drawing::SystemColors::ActiveCaption;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {


	
}



private: System::Void tableLayoutPanel1_Click(System::Object^  sender, System::EventArgs^  e) {
	


}

private: System::Void customPictureBox1_(System::Object^  sender, System::EventArgs^  e)
{

}

/*private: System::Void customPictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {


	switch (e->Button) {

	case System::Windows::Forms::MouseButtons::Left:
		// Left click
		break;

	case System::Windows::Forms::MouseButtons::Right:
		((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Bartek\\Desktop\\Minesweeper\\Minesweeper\\Debug\\flag.bmp";
		break;

	}
}*/

private: System::Void customPictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	switch (((MouseEventArgs^) e)->Button) {

	case System::Windows::Forms::MouseButtons::Left:
		flag = 0;
		break;

	case System::Windows::Forms::MouseButtons::Right:
		if (polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] != 10)
		{
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\flag.bmp";
		
			flag = 1;
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 10;
			
		}
		else
		{
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\p1.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 0;
		}
		break;

	}


	if (polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] == 10)
	{
		count++;
		if (count == diff)
		{


			wygrana^ okno = gcnew wygrana();
			okno->Show();

		}
		
	}


	if (flag == 0)
	{
		switch (polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][1])
		{
		case 0:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\p0.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			polegry1.dolasapera(((::CustomPictureBox::CustomPictureBox^) sender)->x, ((::CustomPictureBox::CustomPictureBox^) sender)->y);
			for (int i = 0; i < (((::CustomPictureBox::CustomPictureBox^) sender)->x); i++)
			{
				for (int j = 0; j < (((::CustomPictureBox::CustomPictureBox^) sender)->y); j++)
				{
					if ((polegry1.tab[i][j][0]) == 1)
						((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\p0.bmp";
				}
			}
			break;
		case 10:
		{
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\mina.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;

			przegrana^ okno = gcnew przegrana();
			okno->Show();
		}


			break;
		case 1:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\nr1.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			break;
		case 2:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\nr2.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			break;
		case 3:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\nr3.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			break;
		case 4:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\nr4.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			break;
		case 5:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\nr5.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			break;
		case 6:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\nr6.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			break;
		case 7:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\nr7.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			break;
		case 8:
			((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\nr8.bmp";
			polegry1.tab[((::CustomPictureBox::CustomPictureBox^) sender)->x][((::CustomPictureBox::CustomPictureBox^) sender)->y][0] = 1;
			break;
		}
	}

	

	//((::CustomPictureBox::CustomPictureBox^) sender)->Parent->Controls[i];


}
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	x = 12;
	y = 12;
	diff = 15;

	this->Size = System::Drawing::Size(x * 38, y * 45);

	this->PerformLayout();
	
	polegry1 = polegry(x, y, diff);
	polegry1.placeMines();
	polegry1.countMines();
	polegry1.testminefield();
	createGrid(x, y);
}
private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
	x = 15;
	y = 15;
	this->Size = System::Drawing::Size(x * 38, y * 42);
	this->PerformLayout();
	diff = 20;
	polegry1 = polegry(x, y, diff);
	polegry1.placeMines();
	polegry1.countMines();
	polegry1.testminefield();
	createGrid(x, y);
}
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {


	x = 8;
	y = 8;
	this->Size = System::Drawing::Size(x * 38, y * 40);
	this->PerformLayout();
	diff = 8;
	polegry1 = polegry(x, y, diff);
	polegry1.placeMines();
	polegry1.countMines();
	polegry1.testminefield();
	createGrid(x, y);
}

		 private: void ClearGrid()
		 {
			 tableLayoutPanel->Controls->Clear();
		 }

private: void createGrid(int x, int y)
{
	ClearGrid();
	tableLayoutPanel->ColumnCount = y;
	tableLayoutPanel->RowCount = x;
	tableLayoutPanel->AutoSize = true;
	tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
	tableLayoutPanel->Location = System::Drawing::Point(0, 30);
	tableLayoutPanel->Margin.All = 0;
			 			 
	for (int i = 0, k = 0; i < x; i++, k++) {
		for (int j = 0; j < x; j++, k++) {
			::CustomPictureBox::CustomPictureBox^  customPictureBox = gcnew ::CustomPictureBox::CustomPictureBox();
			customPictureBox->x = i;
			customPictureBox->y = j;
			customPictureBox->Click += gcnew System::EventHandler(this, &MainForm::customPictureBox1_Click);

			//customPictureBox->Location = System::Drawing::Point(147, 3);
			customPictureBox->ImageLocation = L"C:\\Users\\Karolina\\Desktop\\Minesweeperuberdobrawersja\\Minesweeper\\Debug\\p1.bmp";
			customPictureBox->Name = L"pictureBox"+k;
			customPictureBox->Size = System::Drawing::Size(30, 30);
			customPictureBox->TabIndex = k;
			customPictureBox->TabStop = false;

			tableLayoutPanel->Controls->Add(customPictureBox, i, j);
				


		}
	}
	this->Controls->Add(tableLayoutPanel);
	this->PerformLayout();
}
/*private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void customPictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {


	switch (e->Button) {

	case System::Windows::Forms::MouseButtons::Left:
		// Left click
		break;

	case System::Windows::Forms::MouseButtons::Right:
		((::CustomPictureBox::CustomPictureBox^) sender)->ImageLocation = L"C:\\Users\\Bartek\\Desktop\\Minesweeper\\Minesweeper\\Debug\\flag.bmp";
		break;
		
	}
}*/
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

}
