#include "MyForm.h"
#include <Windows.h>
using namespace BaseData9; // Íàçâàíèå ïðîåêòà
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

System::Void BaseData9::MyForm::statusStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::menu_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::ToolStripMenuItemPatch_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}

System::Void BaseData9::MyForm::ToolStripMenuItemUnPatch_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::ToolStripMenuItemCheckTTL_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::ToolStripMenuItemInstruction_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::ToolStripMenuItemOprog_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::groupBoxPatñh_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::groupBoxInfoTtl_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::groupBoxIntruction_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::groupBoxUnPatñh_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::groupBoxOprog_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
char i = 1;
System::Void BaseData9::MyForm::buttonStartPath_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	i=i+1;
		this->labelCheckTTL->Text = i.ToString();
		this->progressBarPatch->Value = i;
	return System::Void();
}

System::Void BaseData9::MyForm::buttonStartUnPath_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::checkBoxTTL_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::checkBoxHosts_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::checkBoxTTLUn_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::checkBoxHostsUn_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e)
{
	return System::Void();

}

System::Void BaseData9::MyForm::progressBarPatch_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::progressBarUn_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::labelCheckTTL_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

