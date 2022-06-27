/*
* Program drawing a Bezier curve of the third order.
* Author: Vadim Remezov
*/


#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GraphicFunction::MainForm form;
	Application::Run(% form);

	return 0;
}

System::Void GraphicFunction::MainForm::ToolStripMenuItem_Click_create(System::Object^ sender, System::EventArgs^ e)
{
	PastParams();

	if (checkBox_bezier_new->Checked == false && checkBox_bezier_old->Checked == false)
	{
		MessageBox::Show("Выберите хотябы один график!", "Внимание!");
		return;
	}

	if (textBox_x1->Text == "" || textBox_x2->Text == "" || textBox_x3->Text == "" || textBox_x4->Text == "" || 
		textBox_y1->Text == "" || textBox_y2->Text == "" || textBox_y3->Text == "" || textBox_y4->Text == "" || textBox_h->Text == "")
	{
		MessageBox::Show("Установленны параметры по умолчанию!", "Внимание!");
		DefaultParams();
	}
	else
	{
		x1 = Convert::ToInt32(textBox_x1->Text);
		x2 = Convert::ToInt32(textBox_x2->Text);
		x3 = Convert::ToInt32(textBox_x3->Text);
		x4 = Convert::ToInt32(textBox_x4->Text);

		y1 = Convert::ToInt32(textBox_y1->Text);
		y2 = Convert::ToInt32(textBox_y2->Text);
		y3 = Convert::ToInt32(textBox_y3->Text);
		y4 = Convert::ToInt32(textBox_y4->Text);

		h = Convert::ToDouble(textBox_h->Text);

	}

	if (checkBox_bezier_old->Checked)
	{
		this->chart1->Series[1]->Points->Clear();
		this->chart2->Series[0]->Points->Clear();

		for (float t = 0; t < 1; t += h)
		{
			// The Green Lines
			xa = getPt(temp_x1, temp_x2, t);
			ya = getPt(temp_y1, temp_y2, t);
			xb = getPt(temp_x2, temp_x3, t);
			yb = getPt(temp_y2, temp_y3, t);
			xc = getPt(temp_x3, temp_x4, t);
			yc = getPt(temp_y3, temp_y4, t);

			// The Blue Line
			xm = getPt(xa, xb, t);
			ym = getPt(ya, yb, t);
			xn = getPt(xb, xc, t);
			yn = getPt(yb, yc, t);

			// The Black Dot
			x = getPt(xm, xn, t);
			y = getPt(ym, yn, t);


			this->chart1->Series[1]->Points->AddXY(x, y);
			this->chart2->Series[0]->Points->AddXY(x, y);
		}
	}

	if (checkBox_bezier_new->Checked)
	{
		this->chart1->Series[0]->Points->Clear();

		for (float t = 0; t < 1; t += h)
		{
			// The Green Lines
			xa = getPt(x1, x2, t);
			ya = getPt(y1, y2, t);
			xb = getPt(x2, x3, t);
			yb = getPt(y2, y3, t);
			xc = getPt(x3, x4, t);
			yc = getPt(y3, y4, t);

			// The Blue Line
			xm = getPt(xa, xb, t);
			ym = getPt(ya, yb, t);
			xn = getPt(xb, xc, t);
			yn = getPt(yb, yc, t);

			// The Black Dot
			x = getPt(xm, xn, t);
			y = getPt(ym, yn, t);


			this->chart1->Series[0]->Points->AddXY(x, y);
		}
	}

}

System::Void GraphicFunction::MainForm::ToolStripMenuItem_Click_clear(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox_bezier_new->Checked == false && checkBox_bezier_old->Checked == false)
	{
		MessageBox::Show("Выберите хотябы один график!", "Внимание!");
		return;
	}

	if (checkBox_bezier_new->Checked)
	{
		this->chart1->Series[0]->Points->Clear();
	}


	if (checkBox_bezier_old->Checked)
	{
		this->chart2->Series[0]->Points->Clear();
	}

}

void GraphicFunction::MainForm::DefaultParams()
{
	x1 = 0;
	x2 = 100;
	x3 = 150;
	x4 = 200;

	y1 = 100;
	y2 = 80;
	y3 = 150;
	y4 = 155;

	h = 0.1;
}

void GraphicFunction::MainForm::PastParams()
{
	temp_x1 = x1;
	temp_x2 = x2;
	temp_x3 = x3;
	temp_x4 = x4;

	temp_y1 = y1;
	temp_y2 = y2;
	temp_y3 = y3;
	temp_y4 = y4;
}

int GraphicFunction::MainForm::getPt(int n1, int n2, float perc)
{
	int diff = n2 - n1;
	return n1 + (diff * perc);
}

