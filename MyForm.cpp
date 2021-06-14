#include "MyForm.h"
#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <WinUser.h>
#include <tchar.h>
#include <fstream>
#include <string>
#include <iso646.h>


using namespace System;
using namespace Microsoft::Win32;
using namespace BaseData9; // Название проекта
using namespace std;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}


//Переменные
char i = 1;



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


//Кнопки Меню
System::Void BaseData9::MyForm::ToolStripMenuItemPatch_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->groupBoxPatсh->Visible = true;
	this->groupBoxInfoTtl->Visible = false;
	this->groupBoxIntruction->Visible = false;
	this->groupBoxOprog->Visible = false;
	this->groupBoxUnPatсh->Visible = false;
	return System::Void();
	}

System::Void BaseData9::MyForm::ToolStripMenuItemUnPatch_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->groupBoxPatсh->Visible = false;
	this->groupBoxInfoTtl->Visible = false;
	this->groupBoxIntruction->Visible = false;
	this->groupBoxOprog->Visible = false;
	this->groupBoxUnPatсh->Visible = true;
	return System::Void();
}

System::Void BaseData9::MyForm::ToolStripMenuItemCheckTTL_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->groupBoxPatсh->Visible = false;
	this->groupBoxInfoTtl->Visible = true;
	this->groupBoxIntruction->Visible = false;
	this->groupBoxOprog->Visible = false;
	this->groupBoxUnPatсh->Visible = false;
	return System::Void();
}

System::Void BaseData9::MyForm::ToolStripMenuItemInstruction_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->groupBoxPatсh->Visible = false;
	this->groupBoxInfoTtl->Visible = false;
	this->groupBoxIntruction->Visible = true;
	this->groupBoxOprog->Visible = false;
	this->groupBoxUnPatсh->Visible = false;
	return System::Void();
}

System::Void BaseData9::MyForm::ToolStripMenuItemOprog_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->groupBoxPatсh->Visible = false;
	this->groupBoxInfoTtl->Visible = false;
	this->groupBoxIntruction->Visible = false;
	this->groupBoxOprog->Visible = true;
	this->groupBoxUnPatсh->Visible = false;
	return System::Void();
}


//группы элементов
System::Void BaseData9::MyForm::groupBoxPatсh_Enter(System::Object^ sender, System::EventArgs^ e)
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

System::Void BaseData9::MyForm::groupBoxUnPatсh_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::groupBoxOprog_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}


//кнопки
System::Void BaseData9::MyForm::buttonStartPath_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBoxTTL->Checked == true) //меняем ттл
	{
		RegistryKey^ rk;
		rk = Registry::LocalMachine->OpenSubKey("SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters", true);
		if (!rk)
		{
			this->labelLog->Text = "Ошибка. Ненайден - SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters!";
		}
		try
		{
			rk->SetValue("DefaultTTL", textBoxSizeTTL->Text);
		}
		catch (Exception^)
		{
			this->labelLog->Text = "Уже задано значение в 'DefaultTTL'";
			
		}

		this->progressBarPatch->Value = 30;
		Sleep(0500);
		this->progressBarPatch->Value = 70;
		Sleep(0500);
		this->progressBarPatch->Value = 100;

		this->labelLog->Text = "Выбраные действия выполнены! Перезагрузите ПК.";
		return System::Void();
		return System::Void();
	}
		
	// файл хостс
	if (checkBoxHosts->Checked == true) {
		
		rename("C:\\Windows\\System32\\drivers\\etc\\hosts", "C:\\Windows\\System32\\drivers\\etc\\hostsold");  //переименовываем старый

		std::ofstream oFilebackup("C:\\Windows\\System32\\drivers\\etc\\hostsbackup"); //бек апп
		std::ofstream outbackup("C:\\Windows\\System32\\drivers\\etc\\hostsbackup", std::ios::app);
		if (outbackup.is_open())
		{
			outbackup << "# Copyright(c) 1993 - 2009 Microsoft Corp." << std::endl;
			outbackup << "# This is a sample HOSTS file used by Microsoft TCP / IP for Windows." << std::endl;
			outbackup << "# This file contains the mappings of IP addresses to host names.Each" << std::endl;
			outbackup << "# entry should be kept on an individual line.The IP address should" << std::endl;
			outbackup << "# be placed in the first column followed by the corresponding host name." << std::endl;
			outbackup << "# The IP addressand the host name should be separated by at least one" << std::endl;
			outbackup << "# space." << std::endl;
			outbackup << "# Additionally, comments(such as these) may be inserted on individual" << std::endl;
			outbackup << "# lines or following the machine name denoted by a '#' symbol." << std::endl;

			outbackup << "# For example :" << std::endl;
			outbackup << "# " << std::endl;
			outbackup << " #      102.54.94.97     rhino.acme.com          # source server " << std::endl;
			outbackup << "#       38.25.63.10     x.acme.com              # x client host" << std::endl;

			outbackup << "# localhost name resolution is handled within DNS itself." << std::endl;
			outbackup << "#	127.0.0.1       localhost " << std::endl;
			outbackup << "#	::1             localhost " << std::endl;
			outbackup << "127.0.0.1	localhost" << std::endl;
			outbackup << "127.0.0.1	subdomain.localhost" << std::endl;
			outbackup << "127.0.0.1	subdomain.test1.ru" << std::endl;
			outbackup << "127.0.0.1	www.localhost" << std::endl;
			outbackup << "127.0.0.2	custom - host" << std::endl;
			outbackup << "127.0.0.2	www.custom" << std::endl;
		}
		outbackup.close();

		std::ofstream oFilehosts("C:\\Windows\\System32\\drivers\\etc\\hosts"); //создаем новый
		std::ofstream out("C:\\Windows\\System32\\drivers\\etc\\hosts", std::ios::app);
		if (out.is_open())
		{
				out << "# Copyright(c) 1993 - 2009 Microsoft Corp." << std::endl;
				out << "# This is a sample HOSTS file used by Microsoft TCP / IP for Windows." << std::endl;
				out << "# This file contains the mappings of IP addresses to host names.Each" << std::endl;
				out << "# entry should be kept on an individual line.The IP address should" << std::endl;
				out << "# be placed in the first column followed by the corresponding host name." << std::endl;
				out << "# The IP addressand the host name should be separated by at least one" << std::endl;
				out << "# space." << std::endl;
				out << "# Additionally, comments(such as these) may be inserted on individual" << std::endl;
				out << "# lines or following the machine name denoted by a '#' symbol." << std::endl;

				out << "# For example :" << std::endl;
				out << "# "<< std::endl;
					out <<" #      102.54.94.97     rhino.acme.com          # source server "<< std::endl;
					out << "#       38.25.63.10     x.acme.com              # x client host" << std::endl;

					out << "# localhost name resolution is handled within DNS itself." << std::endl;
					out << "#	127.0.0.1       localhost "<< std::endl;
					out << "#	::1             localhost "<< std::endl;
				
				out << "127.0.0.1 www.webcamxp.com" << std::endl;
				out << "127.0.0.1 webcamxp.com" << std::endl;


					out << "# Photoshop" << std::endl;
					out << "127.0.0.1 na1r.services.adobe.com" << std::endl;
					out << "127.0.0.1 hlrcv.stage.adobe.com" << std::endl;
					out << "127.0.0.1 lmlicenses.wip4.adobe.com" << std::endl;
					out << "127.0.0.1 lm.licenses.adobe.com" << std::endl;
					out << "127.0.0.1 activate.adobe.com" << std::endl;
					out << "127.0.0.1 practivate.adobe.com" << std::endl;
					out << "# Antibotnet" << std::endl;
					out << "127.0.0.1 vortex.data.microsoft.com" << std::endl;
					out << "127.0.0.1 vortex - win.data.microsoft.com" << std::endl;
					out << "127.0.0.1 settings - win.data.microsoft.com" << std::endl;
					out << "127.0.0.1 cdn.content.prod.cms.msn.com" << std::endl;
					out << "127.0.0.1 v10.vortex - win.data.microsoft.com" << std::endl;
					out << "127.0.0.1 telecommand.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telecommand.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 oca.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 oca.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 sqm.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 sqm.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 watson.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 redir.metaservices.microsoft.com" << std::endl;
					out << "127.0.0.1 choice.microsoft.com" << std::endl;
					out << "127.0.0.1 choice.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 reports.wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 services.wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 sqm.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.ppe.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.appex.bing.net" << std::endl;
					out << "127.0.0.1 telemetry.urs.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.appex.bing.net:443" << std::endl;
					out << "127.0.0.1 vortex - sandbox.data.microsoft.com" << std::endl;
					out << "127.0.0.1 settings - sandbox.data.microsoft.com" << std::endl;
					out << "127.0.0.1 vortex.data.microsoft.com" << std::endl;
					out << "127.0.0.1 vortex - win.data.microsoft.com" << std::endl;
					out << "127.0.0.1 telecommand.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telecommand.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 oca.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 oca.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 sqm.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 sqm.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 watson.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 redir.metaservices.microsoft.com" << std::endl;
					out << "127.0.0.1 choice.microsoft.com" << std::endl;
					out << "127.0.0.1 choice.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 vortex - sandbox.data.microsoft.com" << std::endl;
					out << "127.0.0.1 settings - sandbox.data.microsoft.com" << std::endl;
					out << "127.0.0.1 df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 reports.wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 sqm.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.ppe.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.appex.bing.net" << std::endl;
					out << "127.0.0.1 telemetry.urs.microsoft.com" << std::endl;
					out << "127.0.0.1 survey.watson.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.live.com" << std::endl;
					out << "127.0.0.1 services.wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.appex.bing.net" << std::endl;
					out << "127.0.0.1 vortex.data.microsoft.com" << std::endl;
					out << "127.0.0.1 vortex - win.data.microsoft.com" << std::endl;
					out << "127.0.0.1 telecommand.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telecommand.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 oca.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 oca.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 sqm.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 sqm.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 watson.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 redir.metaservices.microsoft.com" << std::endl;
					out << "127.0.0.1 choice.microsoft.com" << std::endl;
					out << "127.0.0.1 choice.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 reports.wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 services.wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 sqm.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.ppe.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.appex.bing.net" << std::endl;
					out << "127.0.0.1 telemetry.urs.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.appex.bing.net:443" << std::endl;
					out << "127.0.0.1 settings - sandbox.data.microsoft.com" << std::endl;
					out << "127.0.0.1 vortex - sandbox.data.microsoft.com" << std::endl;
					out << "127.0.0.1 survey.watson.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.live.com" << std::endl;
					out << "127.0.0.1 watson.microsoft.com" << std::endl;
					out << "127.0.0.1 statsfe2.ws.microsoft.com" << std::endl;
					out << "127.0.0.1 corpext.msitadfs.glbdns2.microsoft.com" << std::endl;
					out << "127.0.0.1 compatexchange.cloudapp.net" << std::endl;
					out << "127.0.0.1 cs1.wpc.v0cdn.net" << std::endl;
					out << "127.0.0.1 a - 0001.a - msedge.net" << std::endl;
					out << "127.0.0.1 a - 0002.a - msedge.net" << std::endl;
					out << "127.0.0.1 a - 0003.a - msedge.net" << std::endl;
					out << "127.0.0.1 a - 0004.a - msedge.net" << std::endl;
					out << "127.0.0.1 a - 0005.a - msedge.net" << std::endl;
					out << "127.0.0.1 a - 0006.a - msedge.net" << std::endl;
					out << "127.0.0.1 a - 0007.a - msedge.net" << std::endl;
					out << "127.0.0.1 a - 0008.a - msedge.net" << std::endl;
					out << "127.0.0.1 a - 0009.a - msedge.net" << std::endl;
					out << "127.0.0.1 msedge.net" << std::endl;
					out << "127.0.0.1 a - msedge.net" << std::endl;
					out << "127.0.0.1 statsfe2.update.microsoft.com.akadns.net" << std::endl;
					out << "127.0.0.1 sls.update.microsoft.com.akadns.net" << std::endl;
					out << "127.0.0.1 fe2.update.microsoft.com.akadns.net" << std::endl;
					out << "127.0.0.1 diagnostics.support.microsoft.com" << std::endl;
					out << "127.0.0.1 corp.sts.microsoft.com" << std::endl;
					out << "127.0.0.1 statsfe1.ws.microsoft.com" << std::endl;
					out << "127.0.0.1 pre.footprintpredict.com" << std::endl;
					out << "127.0.0.1 i1.services.social.microsoft.com" << std::endl;
					out << "127.0.0.1 i1.services.social.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 feedback.windows.com" << std::endl;
					out << "127.0.0.1 feedback.microsoft - hohm.com" << std::endl;
					out << "127.0.0.1 feedback.search.microsoft.com" << std::endl;
					out << "127.0.0.1 tile - service.weather.microsoft.com" << std::endl;
					out << "127.0.0.1 cdn.content.prod.cms.msn.com" << std::endl;
					out << "127.0.0.1 cdn.content.prod.cms.msn.com" << std::endl;
					out << "127.0.0.1 tile - service.weather.microsoft.com" << std::endl;
					out << "127.0.0.1 service.weather.microsoft.com" << std::endl;
					out << "127.0.0.1 www.google - analytics.com" << std::endl;
					
					out << "#Skype ad - free" << std::endl;
					out << "127.0.0.1 live.rads.msn.com" << std::endl;
					out << "127.0.0.1 ads1.msn.com" << std::endl;
					out << "127.0.0.1 static.2mdn.net" << std::endl;
					out << "127.0.0.1 g.msn.com" << std::endl;
					out << "127.0.0.1 a.ads2.msads.net" << std::endl;
					out << "127.0.0.1 b.ads2.msads.net" << std::endl;
					out << "127.0.0.1 ad.doubleclick.net" << std::endl;
					out << "127.0.0.1 ac3.msn.com" << std::endl;
					out << "127.0.0.1 rad.msn.com" << std::endl;
					out << "127.0.0.1 msntest.serving - sys.com" << std::endl;
					out << "127.0.0.1 bs.serving - sys.com1" << std::endl;
					out << "127.0.0.1 flex.msn.com" << std::endl;
					out << "127.0.0.1 ec.atdmt.com" << std::endl;
					out << "127.0.0.1 cdn.atdmt.com" << std::endl;
					out << "127.0.0.1 db3aqu.atdmt.com" << std::endl;
					out << "127.0.0.1 cds26.ams9.msecn.net" << std::endl;
					out << "127.0.0.1 sO.2mdn.net" << std::endl;
					out << "127.0.0.1 aka - cdn - ns.adtech.de" << std::endl;
					out << "127.0.0.1 secure.flashtalking.com" << std::endl;
					out << "127.0.0.1 adnexus.net" << std::endl;
					out << "127.0.0.1 adnxs.com" << std::endl;
					out << "127.0.0.1 * .rad.msn.com" << std::endl;
					out << "127.0.0.1 * .msads.net" << std::endl;
					out << "127.0.0.1 * .msecn.net" << std::endl;
					
					out << "127.0.0.1 localhost" << std::endl;
					out << "127.0.0.1 localhost.localdomain" << std::endl;
					out << "255.255.255.255 broadcasthost" << std::endl;
					out << "::1 localhost" << std::endl;
					out << "127.0.0.1 local" << std::endl;
					out << "127.0.0.1 vortex.data.microsoft.com" << std::endl;
					out << "127.0.0.1 vortex - win.data.microsoft.com" << std::endl;
					out << "127.0.0.1 telecommand.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telecommand.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 oca.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 oca.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 sqm.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 sqm.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 watson.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.telemetry.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 redir.metaservices.microsoft.com" << std::endl;
					out << "127.0.0.1 choice.microsoft.com" << std::endl;
					out << "127.0.0.1 choice.microsoft.com.nsatc.net" << std::endl;
					out << ".0.1 df.telemetry.microsoft.com" << std::endl;
					out << ".0.1 reports.wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 services.wes.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 sqm.df.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.ppe.telemetry.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.appex.bing.net" << std::endl;
					out << "127.0.0.1 telemetry.urs.microsoft.com" << std::endl;
					out << "127.0.0.1 telemetry.appex.bing.net:443" << std::endl;
					out << "127.0.0.1 settings - sandbox.data.microsoft.com" << std::endl;
					out << ".0.1 vortex - sandbox.data.microsoft.com" << std::endl;
					out << ".0.1 survey.watson.microsoft.com" << std::endl;
					out << "127.0.0.1 watson.live.com" << std::endl;
					out << "127.0.0.1 watson.microsoft.com" << std::endl;
					out << "127.0.0.1 statsfe2.ws.microsoft.com" << std::endl;
					out << "127.0.0.1 corpext.msitadfs.glbdns2.microsoft.com" << std::endl;
					out << "127.0.0.1 compatexchange.cloudapp.net" << std::endl;
					out << "127.0.0.1 cs1.wpc.v0cdn.net" << std::endl;
					out << "127.0.0.1 a - 0001.a - msedge.net" << std::endl;
					out << "127.0.0.1 statsfe2.update.microsoft.com.akadns.net" << std::endl;
					out << "127.0.0.1 sls.update.microsoft.com.akadns.net" << std::endl;
					out << "127.0.0.1 fe2.update.microsoft.com.akadns.net" << std::endl;
					out << "127.0.0.1 65.55.108.23" << std::endl;
					out << "127.0.0.1 65.39.117.230" << std::endl;
					out << "127.0.0.1 23.218.212.69" << std::endl;
					out << "127.0.0.1 134.170.30.202" << std::endl;
					out << "127.0.0.1 137.116.81.24" << std::endl;
					out << "127.0.0.1 diagnostics.support.microsoft.com" << std::endl;
					out << "127.0.0.1 corp.sts.microsoft.com" << std::endl;
					out << "127.0.0.1 statsfe1.ws.microsoft.com" << std::endl;
					out << "127.0.0.1 pre.footprintpredict.com" << std::endl;
					out << "127.0.0.1 204.79.197.200" << std::endl;
					out << "127.0.0.1 23.218.212.69" << std::endl;
					out << "127.0.0.1 i1.services.social.microsoft.com" << std::endl;
					out << "127.0.0.1 i1.services.social.microsoft.com.nsatc.net" << std::endl;
					out << "127.0.0.1 feedback.windows.com" << std::endl;
					out << "127.0.0.1 feedback.microsoft - hohm.com" << std::endl;
					out << "127.0.0.1 feedback.search.microsoft.com" << std::endl;
					
					out << "127.0.0.1 localhost" << std::endl;
					out << "127.0.0.1 time.windows.com" << std::endl;
					out << "127.0.0.1 clients.google.com" << std::endl;
					out << "127.0.0.1 clients1.google.com" << std::endl;
					out << "127.0.0.1 clients2.google.com" << std::endl;
					out << "127.0.0.1 clients3.google.com" << std::endl;
					out << "127.0.0.1 clients4.google.com" << std::endl;
					out << "127.0.0.1 clients5.google.com" << std::endl;
					out << "127.0.0.1 clients6.google.com" << std::endl;
					out << "127.0.0.1 clients7.google.com" << std::endl;
					out << "127.0.0.1 clients8.google.com" << std::endl;
					out << "127.0.0.1 clients9.google.com" << std::endl;
					out << "127.0.0.1 www.google - analytics.com" << std::endl;
					out << "127.0.0.1 lh1.googleusercontent.com" << std::endl;
					out << "127.0.0.1 lh2.googleusercontent.com" << std::endl;
					out << "127.0.0.1 lh3.googleusercontent.com" << std::endl;
					out << "127.0.0.1 lh4.googleusercontent.com" << std::endl;
					out << "127.0.0.1 lh5.googleusercontent.com" << std::endl;
					out << "127.0.0.1 lh6.googleusercontent.com" << std::endl;
					out << "127.0.0.1 lh7.googleusercontent.com" << std::endl;
					out << "127.0.0.1 encrypted - tbn1.gstatic.com" << std::endl;
					out << "127.0.0.1 encrypted - tbn2.gstatic.com" << std::endl;
					out << "127.0.0.1 encrypted - tbn3.gstatic.com" << std::endl;
					out << "127.0.0.1 encrypted - tbn4.gstatic.com" << std::endl;
					out << "127.0.0.1 encrypted - tbn5.gstatic.com" << std::endl;
					out << "127.0.0.1 clients2.googleusercontent.com" << std::endl;
					out << "127.0.0.1 redirector.gvt1.com" << std::endl;
					out << "127.0.0.1 r5-- - sn - n8v7lne6.gvt1.com" << std::endl;
					out << "127.0.0.1 www.googleapis.com" << std::endl;
					out << "127.0.0.1 cache.pack.google.com" << std::endl;
					out << "127.0.0.1 r8-- - sn - n8v7znee.c.pack.google.com" << std::endl;
					out << "127.0.0.1 tools.google.com" << std::endl;
					out << "127.0.0.1 update.utorrent.com" << std::endl;
					out << "127.0.0.1 genuine.microsoft.com" << std::endl;
					out << "127.0.0.1 64.0.0.0 / 8" << std::endl;
				out << "127.0.0.1 65.0.0.0 / 8" << std::endl;

		}
		out.close();

		this->progressBarPatch->Value = 30;
		Sleep(0500);
		this->progressBarPatch->Value = 70;
		Sleep(0500);
		this->progressBarPatch->Value = 100;

		this->labelLog->Text = "Выбраные действия выполнены! Перезагрузите ПК.";
		return System::Void();
	}


	if ((checkBoxHosts->Checked == false) && (checkBoxTTL->Checked == false)) {
		
		this->progressBarPatch->Value = 10;
		Sleep(0500);
		this->progressBarPatch->Value = 100;

		this->labelLog->Text = "Ошибка. Не выбраны действия! ";
		return System::Void();

	}
}

System::Void BaseData9::MyForm::buttonStartUnPath_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBoxTTLUn->Checked == true) //анпач ттл
	{
		RegistryKey^ rk;
		rk = Registry::LocalMachine->OpenSubKey("SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters", true);
		if (!rk)
		{
			this->labelLog->Text = "Ошибка ненайдено SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters";
		}
		try
		{
			rk->DeleteValue("DefaultTTL");
		}
		catch (Exception^)
		{
			this->labelLog->Text = "уже удален 'DefaultTTL'";
		}
		
		this->progressBarUn->Value = 40;
		Sleep(0500);
		this->progressBarUn->Value = 75;
		Sleep(0500);
		this->progressBarUn->Value = 100;
		this->labelLog->Text = "Выбраные действия выполнены! Перезагрузите ПК.";
	}

	if (checkBoxHostsUn->Checked == true) {

		remove("C:\\Windows\\System32\\drivers\\etc\\hosts"); //удаляем патченый
		rename("C:\\Windows\\System32\\drivers\\etc\\hostsold", "C:\\Windows\\System32\\drivers\\etc\\hosts"); //возвращаем обратно
		
		this->progressBarUn->Value = 40;
		Sleep(0500);
		this->progressBarUn->Value = 75;
		Sleep(0500);
		this->progressBarUn->Value = 100;
		this->labelLog->Text = "Выбраные действия выполнены! Перезагрузите ПК.";
	}

	if ((checkBoxHostsUn->Checked == false) && (checkBoxTTLUn->Checked == false)) {

		this->progressBarPatch->Value = 10;
		Sleep(0500);
		this->progressBarPatch->Value = 100;

		this->labelLog->Text = "Ошибка. Не выбраны действия! ";
		return System::Void();

	}
	return System::Void();
}

System::Void BaseData9::MyForm::buttonCheckTTl_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ value = "0";
	String^ userRoot = "HKEY_Local_Machine";
	String^ subKey = "SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters";
	String^ keyName = String::Concat(userRoot, "\\", subKey);

	RegistryKey^ rk;
	rk = Registry::LocalMachine->OpenSubKey("", true);
	if (!rk)
	{
		this->labelLog->Text = "SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters";
	}
	try
	{
		String^ testExpand = (String^)Registry::GetValue(keyName,  //ттл проверка
			"DefaultTTL", "Не задано значение");
		
		auto Value = testExpand->ToString();

		this->labelCheckTTL->Text = Value;

	}
	catch (Exception^)
	{
		this->labelLog->Text = "ошибка 'DefaultTTL'";
	}



	return System::Void();
}


//чек боксы
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


//скролы
System::Void BaseData9::MyForm::vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e)
{
	this->labelGide->Location = System::Drawing::Point(6, -this->vScrollBar1->Value);
	return System::Void();
}


//бары
System::Void BaseData9::MyForm::progressBarPatch_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::progressBarUn_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}


//лейблы
System::Void BaseData9::MyForm::labelCheckTTL_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::labelLog_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void BaseData9::MyForm::labelGide_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}


//rk->GetValue("DefaultValue")->ToString(Value);
	    //rk-> GetValue(System::String ^ "DefaultTTL");
//rk->GetValue("DefaultTTL2", labelCheckTTL->Text);
//this->labelCheckTTL->Text = rk->GetValue("DefaultTTL2");
//string tExpand = (string)rk->GetValue("DefaultTTL2");