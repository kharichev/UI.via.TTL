#pragma once

namespace BaseData9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ version;
	protected:

	private: System::Windows::Forms::MenuStrip^ menu;

	private: System::Windows::Forms::ToolStripMenuItem^ pathTTLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemPatch;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemUnPatch;


	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemInstruction;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemOprog;



	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemCheckTTL;

	private: System::Windows::Forms::GroupBox^ groupBoxPatñh;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxSizeTTL;
	private: System::Windows::Forms::ProgressBar^ progressBarPatch;


	private: System::Windows::Forms::Button^ buttonStartPath;
	private: System::Windows::Forms::CheckBox^ checkBoxHosts;


	private: System::Windows::Forms::CheckBox^ checkBoxTTL;

	private: System::Windows::Forms::GroupBox^ groupBoxInfoTtl;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelCheckTTL;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBoxUnPatñh;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonStartUnPath;
	private: System::Windows::Forms::ProgressBar^ progressBarUn;


	private: System::Windows::Forms::CheckBox^ checkBoxHostsUn;

	private: System::Windows::Forms::CheckBox^ checkBoxTTLUn;

	private: System::Windows::Forms::GroupBox^ groupBoxOprog;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBoxIntruction;


	private: System::Windows::Forms::VScrollBar^ vScrollBar1;

	private: System::Windows::Forms::Button^ buttonCheckTTl;
	private: System::Windows::Forms::GroupBox^ groupBoxLog;
	private: System::Windows::Forms::Label^ labelLog;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelOprog;


	private: System::Windows::Forms::Label^ labelGide;

	protected:

	protected:

	protected:






	protected:





	protected:

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->version = (gcnew System::Windows::Forms::Label());
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->pathTTLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemPatch = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemUnPatch = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemCheckTTL = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemInstruction = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemOprog = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxPatñh = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxSizeTTL = (gcnew System::Windows::Forms::TextBox());
			this->progressBarPatch = (gcnew System::Windows::Forms::ProgressBar());
			this->buttonStartPath = (gcnew System::Windows::Forms::Button());
			this->checkBoxHosts = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTTL = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxInfoTtl = (gcnew System::Windows::Forms::GroupBox());
			this->labelCheckTTL = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonCheckTTl = (gcnew System::Windows::Forms::Button());
			this->groupBoxUnPatñh = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonStartUnPath = (gcnew System::Windows::Forms::Button());
			this->progressBarUn = (gcnew System::Windows::Forms::ProgressBar());
			this->checkBoxHostsUn = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTTLUn = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxOprog = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelOprog = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBoxIntruction = (gcnew System::Windows::Forms::GroupBox());
			this->labelGide = (gcnew System::Windows::Forms::Label());
			this->groupBoxLog = (gcnew System::Windows::Forms::GroupBox());
			this->labelLog = (gcnew System::Windows::Forms::Label());
			this->menu->SuspendLayout();
			this->groupBoxPatñh->SuspendLayout();
			this->groupBoxInfoTtl->SuspendLayout();
			this->groupBoxUnPatñh->SuspendLayout();
			this->groupBoxOprog->SuspendLayout();
			this->groupBoxIntruction->SuspendLayout();
			this->groupBoxLog->SuspendLayout();
			this->SuspendLayout();
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->LargeChange = 100;
			this->vScrollBar1->Location = System::Drawing::Point(324, 14);
			this->vScrollBar1->Maximum = 550;
			this->vScrollBar1->Minimum = -16;
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(17, 329);
			this->vScrollBar1->SmallChange = 30;
			this->vScrollBar1->TabIndex = 1;
			this->vScrollBar1->Value = -16;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::vScrollBar1_Scroll);
			// 
			// version
			// 
			this->version->AutoSize = true;
			this->version->Location = System::Drawing::Point(442, 0);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(40, 13);
			this->version->TabIndex = 0;
			this->version->Text = L"ver 0.1";
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::Snow;
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pathTTLToolStripMenuItem,
					this->ToolStripMenuItemInstruction, this->ToolStripMenuItemOprog
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(485, 24);
			this->menu->TabIndex = 1;
			this->menu->Text = L"menuStrip1";
			this->menu->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menu_ItemClicked);
			// 
			// pathTTLToolStripMenuItem
			// 
			this->pathTTLToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ToolStripMenuItemPatch,
					this->ToolStripMenuItemUnPatch, this->ToolStripMenuItemCheckTTL
			});
			this->pathTTLToolStripMenuItem->Name = L"pathTTLToolStripMenuItem";
			this->pathTTLToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->pathTTLToolStripMenuItem->Text = L"Patñh TTL";
			// 
			// ToolStripMenuItemPatch
			// 
			this->ToolStripMenuItemPatch->Name = L"ToolStripMenuItemPatch";
			this->ToolStripMenuItemPatch->Size = System::Drawing::Size(149, 22);
			this->ToolStripMenuItemPatch->Text = L"Patñh";
			this->ToolStripMenuItemPatch->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItemPatch_Click);
			// 
			// ToolStripMenuItemUnPatch
			// 
			this->ToolStripMenuItemUnPatch->Name = L"ToolStripMenuItemUnPatch";
			this->ToolStripMenuItemUnPatch->Size = System::Drawing::Size(149, 22);
			this->ToolStripMenuItemUnPatch->Text = L"UnPatñh";
			this->ToolStripMenuItemUnPatch->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItemUnPatch_Click);
			// 
			// ToolStripMenuItemCheckTTL
			// 
			this->ToolStripMenuItemCheckTTL->Name = L"ToolStripMenuItemCheckTTL";
			this->ToolStripMenuItemCheckTTL->Size = System::Drawing::Size(149, 22);
			this->ToolStripMenuItemCheckTTL->Text = L"Ïğîâåğêà TTL";
			this->ToolStripMenuItemCheckTTL->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItemCheckTTL_Click);
			// 
			// ToolStripMenuItemInstruction
			// 
			this->ToolStripMenuItemInstruction->Name = L"ToolStripMenuItemInstruction";
			this->ToolStripMenuItemInstruction->Size = System::Drawing::Size(85, 20);
			this->ToolStripMenuItemInstruction->Text = L"Èíñòğóêöèÿ";
			this->ToolStripMenuItemInstruction->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItemInstruction_Click);
			// 
			// ToolStripMenuItemOprog
			// 
			this->ToolStripMenuItemOprog->Name = L"ToolStripMenuItemOprog";
			this->ToolStripMenuItemOprog->Size = System::Drawing::Size(94, 20);
			this->ToolStripMenuItemOprog->Text = L"Î ïğîãğàììå";
			this->ToolStripMenuItemOprog->Click += gcnew System::EventHandler(this, &MyForm::ToolStripMenuItemOprog_Click);
			// 
			// groupBoxPatñh
			// 
			this->groupBoxPatñh->Controls->Add(this->label2);
			this->groupBoxPatñh->Controls->Add(this->label1);
			this->groupBoxPatñh->Controls->Add(this->textBoxSizeTTL);
			this->groupBoxPatñh->Controls->Add(this->progressBarPatch);
			this->groupBoxPatñh->Controls->Add(this->buttonStartPath);
			this->groupBoxPatñh->Controls->Add(this->checkBoxHosts);
			this->groupBoxPatñh->Controls->Add(this->checkBoxTTL);
			this->groupBoxPatñh->Location = System::Drawing::Point(66, 43);
			this->groupBoxPatñh->Name = L"groupBoxPatñh";
			this->groupBoxPatñh->Size = System::Drawing::Size(344, 225);
			this->groupBoxPatñh->TabIndex = 2;
			this->groupBoxPatñh->TabStop = false;
			this->groupBoxPatñh->Enter += gcnew System::EventHandler(this, &MyForm::groupBoxPatñh_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(153, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Patñh";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(136, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"- ââåäèòå çíà÷åíèå ";
			// 
			// textBoxSizeTTL
			// 
			this->textBoxSizeTTL->Location = System::Drawing::Point(95, 48);
			this->textBoxSizeTTL->Name = L"textBoxSizeTTL";
			this->textBoxSizeTTL->Size = System::Drawing::Size(35, 20);
			this->textBoxSizeTTL->TabIndex = 4;
			// 
			// progressBarPatch
			// 
			this->progressBarPatch->Location = System::Drawing::Point(26, 164);
			this->progressBarPatch->Name = L"progressBarPatch";
			this->progressBarPatch->Size = System::Drawing::Size(291, 23);
			this->progressBarPatch->TabIndex = 3;
			this->progressBarPatch->Click += gcnew System::EventHandler(this, &MyForm::progressBarPatch_Click);
			// 
			// buttonStartPath
			// 
			this->buttonStartPath->BackColor = System::Drawing::Color::Transparent;
			this->buttonStartPath->Location = System::Drawing::Point(132, 113);
			this->buttonStartPath->Name = L"buttonStartPath";
			this->buttonStartPath->Size = System::Drawing::Size(90, 23);
			this->buttonStartPath->TabIndex = 2;
			this->buttonStartPath->Text = L"Start Path";
			this->buttonStartPath->UseVisualStyleBackColor = false;
			this->buttonStartPath->Click += gcnew System::EventHandler(this, &MyForm::buttonStartPath_Click);
			// 
			// checkBoxHosts
			// 
			this->checkBoxHosts->AutoSize = true;
			this->checkBoxHosts->Location = System::Drawing::Point(26, 84);
			this->checkBoxHosts->Name = L"checkBoxHosts";
			this->checkBoxHosts->Size = System::Drawing::Size(53, 17);
			this->checkBoxHosts->TabIndex = 1;
			this->checkBoxHosts->Text = L"Hosts";
			this->checkBoxHosts->UseVisualStyleBackColor = true;
			this->checkBoxHosts->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxHosts_CheckedChanged);
			// 
			// checkBoxTTL
			// 
			this->checkBoxTTL->AutoSize = true;
			this->checkBoxTTL->Location = System::Drawing::Point(26, 48);
			this->checkBoxTTL->Name = L"checkBoxTTL";
			this->checkBoxTTL->Size = System::Drawing::Size(46, 17);
			this->checkBoxTTL->TabIndex = 0;
			this->checkBoxTTL->Text = L"TTL";
			this->checkBoxTTL->UseVisualStyleBackColor = true;
			this->checkBoxTTL->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxTTL_CheckedChanged);
			// 
			// groupBoxInfoTtl
			// 
			this->groupBoxInfoTtl->Controls->Add(this->labelCheckTTL);
			this->groupBoxInfoTtl->Controls->Add(this->label4);
			this->groupBoxInfoTtl->Controls->Add(this->label3);
			this->groupBoxInfoTtl->Controls->Add(this->buttonCheckTTl);
			this->groupBoxInfoTtl->Location = System::Drawing::Point(66, 43);
			this->groupBoxInfoTtl->Name = L"groupBoxInfoTtl";
			this->groupBoxInfoTtl->Size = System::Drawing::Size(344, 225);
			this->groupBoxInfoTtl->TabIndex = 3;
			this->groupBoxInfoTtl->TabStop = false;
			this->groupBoxInfoTtl->Visible = false;
			this->groupBoxInfoTtl->Enter += gcnew System::EventHandler(this, &MyForm::groupBoxInfoTtl_Enter);
			// 
			// labelCheckTTL
			// 
			this->labelCheckTTL->AutoSize = true;
			this->labelCheckTTL->Location = System::Drawing::Point(179, 85);
			this->labelCheckTTL->Name = L"labelCheckTTL";
			this->labelCheckTTL->Size = System::Drawing::Size(16, 13);
			this->labelCheckTTL->TabIndex = 2;
			this->labelCheckTTL->Text = L"- -";
			this->labelCheckTTL->Click += gcnew System::EventHandler(this, &MyForm::labelCheckTTL_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(134, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"TTL = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(127, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ïğîâåğêà TTL";
			// 
			// buttonCheckTTl
			// 
			this->buttonCheckTTl->BackColor = System::Drawing::Color::Transparent;
			this->buttonCheckTTl->Location = System::Drawing::Point(117, 135);
			this->buttonCheckTTl->Name = L"buttonCheckTTl";
			this->buttonCheckTTl->Size = System::Drawing::Size(90, 23);
			this->buttonCheckTTl->TabIndex = 2;
			this->buttonCheckTTl->Text = L"Ïğîâåğèòü";
			this->buttonCheckTTl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonCheckTTl->UseVisualStyleBackColor = false;
			this->buttonCheckTTl->Click += gcnew System::EventHandler(this, &MyForm::buttonCheckTTl_Click);
			// 
			// groupBoxUnPatñh
			// 
			this->groupBoxUnPatñh->Controls->Add(this->label6);
			this->groupBoxUnPatñh->Controls->Add(this->buttonStartUnPath);
			this->groupBoxUnPatñh->Controls->Add(this->progressBarUn);
			this->groupBoxUnPatñh->Controls->Add(this->checkBoxHostsUn);
			this->groupBoxUnPatñh->Controls->Add(this->checkBoxTTLUn);
			this->groupBoxUnPatñh->Location = System::Drawing::Point(66, 42);
			this->groupBoxUnPatñh->Name = L"groupBoxUnPatñh";
			this->groupBoxUnPatñh->Size = System::Drawing::Size(344, 224);
			this->groupBoxUnPatñh->TabIndex = 4;
			this->groupBoxUnPatñh->TabStop = false;
			this->groupBoxUnPatñh->Visible = false;
			this->groupBoxUnPatñh->Enter += gcnew System::EventHandler(this, &MyForm::groupBoxUnPatñh_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(153, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"UnPatñh";
			// 
			// buttonStartUnPath
			// 
			this->buttonStartUnPath->BackColor = System::Drawing::Color::Transparent;
			this->buttonStartUnPath->Location = System::Drawing::Point(132, 107);
			this->buttonStartUnPath->Name = L"buttonStartUnPath";
			this->buttonStartUnPath->Size = System::Drawing::Size(90, 23);
			this->buttonStartUnPath->TabIndex = 2;
			this->buttonStartUnPath->Text = L"Start UnPatñh";
			this->buttonStartUnPath->UseVisualStyleBackColor = false;
			this->buttonStartUnPath->Click += gcnew System::EventHandler(this, &MyForm::buttonStartUnPath_Click);
			// 
			// progressBarUn
			// 
			this->progressBarUn->Location = System::Drawing::Point(26, 155);
			this->progressBarUn->Name = L"progressBarUn";
			this->progressBarUn->Size = System::Drawing::Size(291, 23);
			this->progressBarUn->TabIndex = 3;
			this->progressBarUn->Click += gcnew System::EventHandler(this, &MyForm::progressBarUn_Click);
			// 
			// checkBoxHostsUn
			// 
			this->checkBoxHostsUn->AutoSize = true;
			this->checkBoxHostsUn->Location = System::Drawing::Point(26, 84);
			this->checkBoxHostsUn->Name = L"checkBoxHostsUn";
			this->checkBoxHostsUn->Size = System::Drawing::Size(53, 17);
			this->checkBoxHostsUn->TabIndex = 1;
			this->checkBoxHostsUn->Text = L"Hosts";
			this->checkBoxHostsUn->UseVisualStyleBackColor = true;
			this->checkBoxHostsUn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxHostsUn_CheckedChanged);
			// 
			// checkBoxTTLUn
			// 
			this->checkBoxTTLUn->AutoSize = true;
			this->checkBoxTTLUn->Location = System::Drawing::Point(26, 48);
			this->checkBoxTTLUn->Name = L"checkBoxTTLUn";
			this->checkBoxTTLUn->Size = System::Drawing::Size(46, 17);
			this->checkBoxTTLUn->TabIndex = 0;
			this->checkBoxTTLUn->Text = L"TTL";
			this->checkBoxTTLUn->UseVisualStyleBackColor = true;
			this->checkBoxTTLUn->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxTTLUn_CheckedChanged);
			// 
			// groupBoxOprog
			// 
			this->groupBoxOprog->Controls->Add(this->label9);
			this->groupBoxOprog->Controls->Add(this->label5);
			this->groupBoxOprog->Controls->Add(this->labelOprog);
			this->groupBoxOprog->Controls->Add(this->label7);
			this->groupBoxOprog->Location = System::Drawing::Point(66, 42);
			this->groupBoxOprog->Name = L"groupBoxOprog";
			this->groupBoxOprog->Size = System::Drawing::Size(344, 226);
			this->groupBoxOprog->TabIndex = 5;
			this->groupBoxOprog->TabStop = false;
			this->groupBoxOprog->Visible = false;
			this->groupBoxOprog->Enter += gcnew System::EventHandler(this, &MyForm::groupBoxOprog_Enter);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 116);
			this->label9->MaximumSize = System::Drawing::Size(300, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(158, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Ğàñïğîñòğîíÿåòñÿ áåñïëàòíî";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 151);
			this->label5->MaximumSize = System::Drawing::Size(300, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Ñîçäàíî RuDark";
			// 
			// labelOprog
			// 
			this->labelOprog->AutoSize = true;
			this->labelOprog->Location = System::Drawing::Point(20, 74);
			this->labelOprog->MaximumSize = System::Drawing::Size(300, 200);
			this->labelOprog->Name = L"labelOprog";
			this->labelOprog->Size = System::Drawing::Size(298, 26);
			this->labelOprog->TabIndex = 1;
			this->labelOprog->Text = L"Ïîãğàììà ñëóæèò äëÿ îáõîäà îãğàíè÷åíèé îò îïåğàòîğà íà ğàçäà÷ó ìîáèëüíîãî èíòåğíå"
				L"òà. ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(127, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Î ïğîãğàììå";
			// 
			// groupBoxIntruction
			// 
			this->groupBoxIntruction->Controls->Add(this->labelGide);
			this->groupBoxIntruction->Controls->Add(this->vScrollBar1);
			this->groupBoxIntruction->Location = System::Drawing::Point(66, 32);
			this->groupBoxIntruction->Name = L"groupBoxIntruction";
			this->groupBoxIntruction->Size = System::Drawing::Size(344, 381);
			this->groupBoxIntruction->TabIndex = 5;
			this->groupBoxIntruction->TabStop = false;
			this->groupBoxIntruction->Visible = false;
			this->groupBoxIntruction->Enter += gcnew System::EventHandler(this, &MyForm::groupBoxIntruction_Enter);
			// 
			// labelGide
			// 
			this->labelGide->AutoSize = true;
			this->labelGide->Location = System::Drawing::Point(6, 16);
			this->labelGide->MaximumSize = System::Drawing::Size(300, 0);
			this->labelGide->Name = L"labelGide";
			this->labelGide->Size = System::Drawing::Size(300, 780);
			this->labelGide->TabIndex = 5;
			this->labelGide->Text = resources->GetString(L"labelGide.Text");
			this->labelGide->Click += gcnew System::EventHandler(this, &MyForm::labelGide_Click);
			// 
			// groupBoxLog
			// 
			this->groupBoxLog->Controls->Add(this->labelLog);
			this->groupBoxLog->Location = System::Drawing::Point(66, 419);
			this->groupBoxLog->Name = L"groupBoxLog";
			this->groupBoxLog->Size = System::Drawing::Size(341, 100);
			this->groupBoxLog->TabIndex = 6;
			this->groupBoxLog->TabStop = false;
			// 
			// labelLog
			// 
			this->labelLog->AutoSize = true;
			this->labelLog->Location = System::Drawing::Point(19, 16);
			this->labelLog->MaximumSize = System::Drawing::Size(300, 0);
			this->labelLog->Name = L"labelLog";
			this->labelLog->Size = System::Drawing::Size(21, 13);
			this->labelLog->TabIndex = 0;
			this->labelLog->Text = L"log";
			this->labelLog->Click += gcnew System::EventHandler(this, &MyForm::labelLog_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(485, 561);
			this->Controls->Add(this->groupBoxPatñh);
			this->Controls->Add(this->groupBoxLog);
			this->Controls->Add(this->groupBoxIntruction);
			this->Controls->Add(this->groupBoxOprog);
			this->Controls->Add(this->groupBoxUnPatñh);
			this->Controls->Add(this->groupBoxInfoTtl);
			this->Controls->Add(this->version);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(501, 601);
			this->MinimumSize = System::Drawing::Size(500, 600);
			this->Name = L"MyForm";
			this->Text = L"Unlimited internet via TTL";
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->groupBoxPatñh->ResumeLayout(false);
			this->groupBoxPatñh->PerformLayout();
			this->groupBoxInfoTtl->ResumeLayout(false);
			this->groupBoxInfoTtl->PerformLayout();
			this->groupBoxUnPatñh->ResumeLayout(false);
			this->groupBoxUnPatñh->PerformLayout();
			this->groupBoxOprog->ResumeLayout(false);
			this->groupBoxOprog->PerformLayout();
			this->groupBoxIntruction->ResumeLayout(false);
			this->groupBoxIntruction->PerformLayout();
			this->groupBoxLog->ResumeLayout(false);
			this->groupBoxLog->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void statusStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e);
	
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e);
	

private: System::Void menu_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e);

private: System::Void ToolStripMenuItemPatch_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ToolStripMenuItemUnPatch_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ToolStripMenuItemCheckTTL_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ToolStripMenuItemInstruction_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ToolStripMenuItemOprog_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void groupBoxPatñh_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void groupBoxInfoTtl_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void groupBoxIntruction_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void groupBoxUnPatñh_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void groupBoxOprog_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonStartPath_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonStartUnPath_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonCheckTTl_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void checkBoxTTL_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void checkBoxHosts_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void checkBoxTTLUn_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void checkBoxHostsUn_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e);

private: System::Void progressBarPatch_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void progressBarUn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void labelCheckTTL_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void labelLog_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void labelGide_Click(System::Object^ sender, System::EventArgs^ e);
};
}
