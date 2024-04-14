#pragma once
#include <Windows.h>
#include <tlhelp32.h>
#include <sstream>
#include <psapi.h>
#include <cmath>
#include "offsets.h"
#include <iostream>
#include <vector>



namespace PatternScanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Runtime::InteropServices;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
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
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Orangepanel;
	private: System::Windows::Forms::Panel^ bluemarrypanel;
	private: System::Windows::Forms::Label^ Selectprocceslable;
	private: System::Windows::Forms::Button^ Checkbtn;
	protected:







	private: System::Windows::Forms::ComboBox^ ProccessComboBox;
	private: System::Windows::Forms::ComboBox^ BaseModuleComboBox;
	private: System::Windows::Forms::Button^ RefleshBtn;

	private: System::Windows::Forms::Timer^ colorTimer;
	private: System::Windows::Forms::Label^ Inputpatternslable;

	private: System::Windows::Forms::Panel^ InputOrangepanel;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ Offsetsdumper;

	private: System::Windows::Forms::Panel^ Dumperorangepanel;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RichTextBox^ InputPatternRichBox;

	private: System::Windows::Forms::CheckBox^ FreezeProcessCheckbox;

	private: System::Windows::Forms::Button^ DumpBtn;
	private: System::Windows::Forms::CheckBox^ BypassAnticheatCheckBox;





	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainform::typeid));
			this->Orangepanel = (gcnew System::Windows::Forms::Panel());
			this->bluemarrypanel = (gcnew System::Windows::Forms::Panel());
			this->RefleshBtn = (gcnew System::Windows::Forms::Button());
			this->BaseModuleComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ProccessComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Checkbtn = (gcnew System::Windows::Forms::Button());
			this->Selectprocceslable = (gcnew System::Windows::Forms::Label());
			this->colorTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Inputpatternslable = (gcnew System::Windows::Forms::Label());
			this->InputOrangepanel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->InputPatternRichBox = (gcnew System::Windows::Forms::RichTextBox());
			this->Offsetsdumper = (gcnew System::Windows::Forms::Label());
			this->Dumperorangepanel = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->BypassAnticheatCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->FreezeProcessCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->DumpBtn = (gcnew System::Windows::Forms::Button());
			this->Orangepanel->SuspendLayout();
			this->bluemarrypanel->SuspendLayout();
			this->InputOrangepanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->Dumperorangepanel->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// Orangepanel
			// 
			this->Orangepanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Orangepanel->Controls->Add(this->bluemarrypanel);
			this->Orangepanel->Location = System::Drawing::Point(13, 20);
			this->Orangepanel->Name = L"Orangepanel";
			this->Orangepanel->Size = System::Drawing::Size(382, 155);
			this->Orangepanel->TabIndex = 0;
			// 
			// bluemarrypanel
			// 
			this->bluemarrypanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->bluemarrypanel->Controls->Add(this->RefleshBtn);
			this->bluemarrypanel->Controls->Add(this->BaseModuleComboBox);
			this->bluemarrypanel->Controls->Add(this->ProccessComboBox);
			this->bluemarrypanel->Controls->Add(this->Checkbtn);
			this->bluemarrypanel->Location = System::Drawing::Point(5, 5);
			this->bluemarrypanel->Name = L"bluemarrypanel";
			this->bluemarrypanel->Size = System::Drawing::Size(371, 144);
			this->bluemarrypanel->TabIndex = 1;
			// 
			// RefleshBtn
			// 
			this->RefleshBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RefleshBtn->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RefleshBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->RefleshBtn->Location = System::Drawing::Point(62, 93);
			this->RefleshBtn->Name = L"RefleshBtn";
			this->RefleshBtn->Size = System::Drawing::Size(92, 37);
			this->RefleshBtn->TabIndex = 3;
			this->RefleshBtn->Text = L"REFLESH";
			this->RefleshBtn->UseVisualStyleBackColor = true;
			this->RefleshBtn->Click += gcnew System::EventHandler(this, &mainform::RefleshBtn_Click);
			// 
			// BaseModuleComboBox
			// 
			this->BaseModuleComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->BaseModuleComboBox->ForeColor = System::Drawing::Color::White;
			this->BaseModuleComboBox->FormattingEnabled = true;
			this->BaseModuleComboBox->Location = System::Drawing::Point(29, 61);
			this->BaseModuleComboBox->Name = L"BaseModuleComboBox";
			this->BaseModuleComboBox->Size = System::Drawing::Size(310, 21);
			this->BaseModuleComboBox->TabIndex = 2;
			this->BaseModuleComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &mainform::BaseModuleComboBox_SelectedIndexChanged);
			// 
			// ProccessComboBox
			// 
			this->ProccessComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->ProccessComboBox->ForeColor = System::Drawing::Color::White;
			this->ProccessComboBox->FormattingEnabled = true;
			this->ProccessComboBox->Location = System::Drawing::Point(29, 23);
			this->ProccessComboBox->Name = L"ProccessComboBox";
			this->ProccessComboBox->Size = System::Drawing::Size(310, 21);
			this->ProccessComboBox->TabIndex = 1;
			this->ProccessComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &mainform::ProccessComboBox_SelectedIndexChanged);
			// 
			// Checkbtn
			// 
			this->Checkbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Checkbtn->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Checkbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Checkbtn->Location = System::Drawing::Point(221, 93);
			this->Checkbtn->Name = L"Checkbtn";
			this->Checkbtn->Size = System::Drawing::Size(92, 37);
			this->Checkbtn->TabIndex = 0;
			this->Checkbtn->Text = L"CHECK";
			this->Checkbtn->UseVisualStyleBackColor = true;
			this->Checkbtn->Click += gcnew System::EventHandler(this, &mainform::Checkbtn_Click);
			// 
			// Selectprocceslable
			// 
			this->Selectprocceslable->AutoSize = true;
			this->Selectprocceslable->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Selectprocceslable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Selectprocceslable->ForeColor = System::Drawing::Color::White;
			this->Selectprocceslable->Location = System::Drawing::Point(30, 12);
			this->Selectprocceslable->Name = L"Selectprocceslable";
			this->Selectprocceslable->Size = System::Drawing::Size(173, 19);
			this->Selectprocceslable->TabIndex = 0;
			this->Selectprocceslable->Text = L"Select [Proccess / Module]";
			// 
			// colorTimer
			// 
			this->colorTimer->Tick += gcnew System::EventHandler(this, &mainform::colorTimer_Tick);
			// 
			// Inputpatternslable
			// 
			this->Inputpatternslable->AutoSize = true;
			this->Inputpatternslable->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Inputpatternslable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Inputpatternslable->ForeColor = System::Drawing::Color::White;
			this->Inputpatternslable->Location = System::Drawing::Point(30, 173);
			this->Inputpatternslable->Name = L"Inputpatternslable";
			this->Inputpatternslable->Size = System::Drawing::Size(97, 19);
			this->Inputpatternslable->TabIndex = 1;
			this->Inputpatternslable->Text = L"Input Patterns";
			// 
			// InputOrangepanel
			// 
			this->InputOrangepanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->InputOrangepanel->Controls->Add(this->panel2);
			this->InputOrangepanel->Location = System::Drawing::Point(13, 181);
			this->InputOrangepanel->Name = L"InputOrangepanel";
			this->InputOrangepanel->Size = System::Drawing::Size(382, 244);
			this->InputOrangepanel->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->panel2->Controls->Add(this->InputPatternRichBox);
			this->panel2->Location = System::Drawing::Point(5, 5);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(371, 234);
			this->panel2->TabIndex = 1;
			// 
			// InputPatternRichBox
			// 
			this->InputPatternRichBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->InputPatternRichBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->InputPatternRichBox->ForeColor = System::Drawing::Color::White;
			this->InputPatternRichBox->Location = System::Drawing::Point(3, 8);
			this->InputPatternRichBox->Name = L"InputPatternRichBox";
			this->InputPatternRichBox->ReadOnly = true;
			this->InputPatternRichBox->Size = System::Drawing::Size(365, 222);
			this->InputPatternRichBox->TabIndex = 0;
			this->InputPatternRichBox->Text = L"";
			this->InputPatternRichBox->EnabledChanged += gcnew System::EventHandler(this, &mainform::InputPatternRichBox_EnabledChanged);
			// 
			// Offsetsdumper
			// 
			this->Offsetsdumper->AutoSize = true;
			this->Offsetsdumper->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Offsetsdumper->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Offsetsdumper->ForeColor = System::Drawing::Color::White;
			this->Offsetsdumper->Location = System::Drawing::Point(30, 423);
			this->Offsetsdumper->Name = L"Offsetsdumper";
			this->Offsetsdumper->Size = System::Drawing::Size(108, 19);
			this->Offsetsdumper->TabIndex = 3;
			this->Offsetsdumper->Text = L"Offsets Dumper";
			// 
			// Dumperorangepanel
			// 
			this->Dumperorangepanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Dumperorangepanel->Controls->Add(this->panel4);
			this->Dumperorangepanel->Location = System::Drawing::Point(13, 431);
			this->Dumperorangepanel->Name = L"Dumperorangepanel";
			this->Dumperorangepanel->Size = System::Drawing::Size(382, 123);
			this->Dumperorangepanel->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->panel4->Controls->Add(this->BypassAnticheatCheckBox);
			this->panel4->Controls->Add(this->FreezeProcessCheckbox);
			this->panel4->Controls->Add(this->DumpBtn);
			this->panel4->Location = System::Drawing::Point(5, 5);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(371, 112);
			this->panel4->TabIndex = 1;
			// 
			// BypassAnticheatCheckBox
			// 
			this->BypassAnticheatCheckBox->AutoSize = true;
			this->BypassAnticheatCheckBox->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BypassAnticheatCheckBox->Location = System::Drawing::Point(62, 40);
			this->BypassAnticheatCheckBox->Name = L"BypassAnticheatCheckBox";
			this->BypassAnticheatCheckBox->Size = System::Drawing::Size(238, 26);
			this->BypassAnticheatCheckBox->TabIndex = 6;
			this->BypassAnticheatCheckBox->Text = L"ByPassTheAntiCheat(BETA)";
			this->BypassAnticheatCheckBox->UseVisualStyleBackColor = true;
			// 
			// FreezeProcessCheckbox
			// 
			this->FreezeProcessCheckbox->AutoSize = true;
			this->FreezeProcessCheckbox->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FreezeProcessCheckbox->Location = System::Drawing::Point(62, 9);
			this->FreezeProcessCheckbox->Name = L"FreezeProcessCheckbox";
			this->FreezeProcessCheckbox->Size = System::Drawing::Size(257, 26);
			this->FreezeProcessCheckbox->TabIndex = 5;
			this->FreezeProcessCheckbox->Text = L"Freeze Process While Scanning";
			this->FreezeProcessCheckbox->UseVisualStyleBackColor = true;
			// 
			// DumpBtn
			// 
			this->DumpBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DumpBtn->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DumpBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->DumpBtn->Location = System::Drawing::Point(36, 69);
			this->DumpBtn->Name = L"DumpBtn";
			this->DumpBtn->Size = System::Drawing::Size(303, 37);
			this->DumpBtn->TabIndex = 4;
			this->DumpBtn->Text = L"Search for Patterns And Dump Offsets";
			this->DumpBtn->UseVisualStyleBackColor = true;
			this->DumpBtn->Click += gcnew System::EventHandler(this, &mainform::DumpBtn_Click);
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(406, 574);
			this->Controls->Add(this->Offsetsdumper);
			this->Controls->Add(this->Dumperorangepanel);
			this->Controls->Add(this->Inputpatternslable);
			this->Controls->Add(this->InputOrangepanel);
			this->Controls->Add(this->Selectprocceslable);
			this->Controls->Add(this->Orangepanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"mainform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PatterScaning";
			this->Load += gcnew System::EventHandler(this, &mainform::mainform_Load);
			this->Orangepanel->ResumeLayout(false);
			this->bluemarrypanel->ResumeLayout(false);
			this->InputOrangepanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->Dumperorangepanel->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		// Function to retrieve a list of running processes and populate the ComboBox
		void PopulateProcessDropdown(ComboBox^ comboBox) {
			PROCESSENTRY32 pe32;
			pe32.dwSize = sizeof(PROCESSENTRY32);

			// Take a snapshot of all processes in the system
			HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

			if (hSnapshot != INVALID_HANDLE_VALUE) {
				if (Process32First(hSnapshot, &pe32)) {
					do {
						// Remove the ".exe" extension from the process name
						std::wstring processName = pe32.szExeFile;
						if (processName.length() >= 4 && processName.substr(processName.length() - 4) == L".exe") {
							processName = processName.substr(0, processName.length() - 4);
						}

						// Construct process name with PID inside square brackets
						std::wostringstream oss;
						oss << processName << L" [" << pe32.th32ProcessID << L"]";

						// Add process name to ComboBox
						comboBox->Items->Add(gcnew System::String(oss.str().c_str()));
					} while (Process32Next(hSnapshot, &pe32));
				}
				CloseHandle(hSnapshot);
			}
		}	

		// Function to read memory from a process
		std::vector<uint8_t> ReadMemory(DWORD processID, LPVOID address, SIZE_T size) {
			std::vector<uint8_t> buffer(size);

			HANDLE hProcess = OpenProcess(PROCESS_VM_READ, FALSE, processID);
			if (hProcess == NULL) {
				// Error handling: Unable to open process
				return buffer;
			}

			SIZE_T bytesRead;
			if (!ReadProcessMemory(hProcess, address, &buffer[0], size, &bytesRead)) {
				// Error handling: Unable to read memory
			}

			CloseHandle(hProcess);
			return buffer;
		}

		// Function to get the base address of a module
		uintptr_t GetModuleBaseAddress(DWORD processID, const wchar_t* moduleName) {
			uintptr_t baseAddress = 0;

			HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, processID);
			if (hProcess == NULL) {
				// Error handling: Unable to open process
				return baseAddress;
			}

			HMODULE hMods[1024];
			DWORD cbNeeded;
			if (EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbNeeded)) {
				for (unsigned int i = 0; i < (cbNeeded / sizeof(HMODULE)); i++) {
					TCHAR szModName[MAX_PATH];

					// Get the module name
					if (GetModuleFileNameEx(hProcess, hMods[i], szModName, sizeof(szModName) / sizeof(TCHAR))) {
						std::wstring moduleFileName = szModName;
						size_t pos = moduleFileName.find_last_of(L"\\");
						if (pos != std::wstring::npos) {
							moduleFileName = moduleFileName.substr(pos + 1);
						}

						// Compare module name
						if (moduleFileName == moduleName) {
							baseAddress = (uintptr_t)hMods[i];
							break;
						}
					}
				}
			}

			CloseHandle(hProcess);
			return baseAddress;
		}

private: System::Void ProccessComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Clear existing items in the BaseModuleComboBox
	BaseModuleComboBox->Items->Clear();

	// Get the selected process name
	System::String^ selectedProcess = safe_cast<System::String^>(ProccessComboBox->SelectedItem);

	// Extract the process ID from the selected process string
	int startIndex = selectedProcess->LastIndexOf(L'[') + 1;
	int endIndex = selectedProcess->LastIndexOf(L']');
	System::String^ processIDString = selectedProcess->Substring(startIndex, endIndex - startIndex);
	DWORD processID = System::Convert::ToUInt32(processIDString);

	// Populate BaseModuleComboBox with base addresses of modules for the selected process
	PopulateBaseModuleDropdown(BaseModuleComboBox, processID);
}



private: System::Void mainform_Load(System::Object^ sender, System::EventArgs^ e) {
	// Populate ComboBox with running processes
	PopulateProcessDropdown(ProccessComboBox);

	// Populate ComboBox with base addresses of loaded modules
	void PopulateBaseModuleDropdown(System::Windows::Forms::ComboBox ^ comboBox, DWORD processID);

	// Create a timer to toggle between colors
	System::Windows::Forms::Timer^ colorTimer = gcnew System::Windows::Forms::Timer();
	colorTimer->Interval = 500; // Change color every 1 millisecond
	colorTimer->Tick += gcnew System::EventHandler(this, &mainform::colorTimer_Tick);
	colorTimer->Start();
}


	   // Function to retrieve module names for a specific process and populate the ComboBox
	   void PopulateBaseModuleDropdown(ComboBox^ comboBox, DWORD processID) {
		   // Get the handle to the target process
		   HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, processID);
		   if (hProcess == NULL) {
			   // Error handling: Unable to open process
			   return;
		   }

		   HMODULE hModules[1024];
		   DWORD cbNeeded;
		   if (EnumProcessModules(hProcess, hModules, sizeof(hModules), &cbNeeded)) {
			   for (DWORD i = 0; i < (cbNeeded / sizeof(HMODULE)); i++) {
				   TCHAR szModName[MAX_PATH];
				   // Get the module file name
				   if (GetModuleFileNameEx(hProcess, hModules[i], szModName, sizeof(szModName) / sizeof(TCHAR))) {
					   // Extract only the module name without the path
					   std::wstring moduleName = szModName;
					   size_t pos = moduleName.find_last_of(L"\\");
					   if (pos != std::wstring::npos) {
						   moduleName = moduleName.substr(pos + 1);
					   }

					   // Check if the module is a .dll or .exe
					   if (moduleName.length() > 4 && (moduleName.substr(moduleName.length() - 4) == L".dll" || moduleName.substr(moduleName.length() - 4) == L".exe")) {
						   // Add module name to ComboBox
						   comboBox->Items->Add(gcnew System::String(moduleName.c_str()));
					   }
				   }
			   }
		   }

		   CloseHandle(hProcess);
	   }




	   // Event handler for ComboBox selection change
private: System::Void BaseModuleComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedProcessName = safe_cast<System::String^>(BaseModuleComboBox->SelectedItem);


}

	   // Timer event handler to toggle between colors
private: System::Void colorTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	// Toggle between colors
	static bool isColor1 = true;
	if (isColor1) {
		this->BackColor = System::Drawing::Color::FromArgb(237, 72, 0); // Change to color 237, 72, 0
		Orangepanel->BackColor = System::Drawing::Color::FromArgb(224, 224, 224);
		Selectprocceslable->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
		InputOrangepanel->BackColor = System::Drawing::Color::FromArgb(224, 224, 224);
		Inputpatternslable->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
		Offsetsdumper->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
		Dumperorangepanel->BackColor = System::Drawing::Color::FromArgb(224, 224, 224);
		RefleshBtn->ForeColor = System::Drawing::Color::FromArgb(20, 36, 43);
		RefleshBtn->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
		Checkbtn->ForeColor = System::Drawing::Color::FromArgb(20, 36, 43);
		Checkbtn->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
		DumpBtn->ForeColor = System::Drawing::Color::FromArgb(20, 36, 43);
		DumpBtn->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
	}
	else {
		this->BackColor = System::Drawing::Color::FromArgb(34, 31, 38); // Change to color 34, 31, 38
		Orangepanel->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
		Selectprocceslable->BackColor = System::Drawing::Color::FromArgb(34, 31, 38);
		InputOrangepanel->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
		Inputpatternslable->BackColor = System::Drawing::Color::FromArgb(34, 31, 38);
		Offsetsdumper->BackColor = System::Drawing::Color::FromArgb(34, 31, 38);
		Dumperorangepanel->BackColor = System::Drawing::Color::FromArgb(237, 72, 0);
		RefleshBtn->ForeColor = System::Drawing::Color::FromArgb(237, 72, 0);
		RefleshBtn->BackColor = System::Drawing::Color::FromArgb(20, 36, 43);
		Checkbtn->ForeColor = System::Drawing::Color::FromArgb(237, 72, 0);
		Checkbtn->BackColor = System::Drawing::Color::FromArgb(20, 36, 43);
		DumpBtn->ForeColor = System::Drawing::Color::FromArgb(237, 72, 0);
		DumpBtn->BackColor = System::Drawing::Color::FromArgb(20, 36, 43);


	}
	isColor1 = !isColor1;
}

private: System::Void InputPatternRichBox_EnabledChanged(System::Object^ sender, System::EventArgs^ e) {
	if (InputPatternRichBox->Enabled) {
		// RichTextBox is enabled
		InputPatternRichBox->BackColor = System::Drawing::Color::FromArgb(25, 36, 43); // Set the background color to white
	}
	else {
		// RichTextBox is disabled
		InputPatternRichBox->BackColor = System::Drawing::Color::FromArgb(25, 36, 43); // Set the background color to light gray
	}
}

private: System::Void Checkbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if ProccessComboBox and BaseModuleComboBox are both not empty
	if (ProccessComboBox->Items->Count > 0 && BaseModuleComboBox->Items->Count > 0) {
		// Set InputPatternRichBox to allow typing
		InputPatternRichBox->ReadOnly = false;
	}
	else {
		// Show a message box indicating that both ComboBoxes should have items
		System::Windows::Forms::MessageBox::Show("Please select a process and a base module.", "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	}
}


	   // Event handler for "Dump" button click
private: System::Void DumpBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (InputPatternRichBox->Text->Trim() == "") {
		MessageBox::Show("Input pattern is empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Get the pattern from InputPatternRichBox
	String^ pattern = InputPatternRichBox->Text;

	// Get the selected process name and module name
	System::String^ selectedProcessName = safe_cast<System::String^>(ProccessComboBox->SelectedItem);
	System::String^ selectedModuleName = safe_cast<System::String^>(BaseModuleComboBox->SelectedItem);

	// Extract the process ID from the selected process string
	int startIndex = selectedProcessName->LastIndexOf(L'[') + 1;
	int endIndex = selectedProcessName->LastIndexOf(L']');
	System::String^ processIDString = selectedProcessName->Substring(startIndex, endIndex - startIndex);
	DWORD processID = System::Convert::ToUInt32(processIDString);

	// Get the base address of the selected module
	const wchar_t* moduleName = (const wchar_t*)(Marshal::StringToHGlobalUni(selectedModuleName)).ToPointer();
	uintptr_t moduleBaseAddress = GetModuleBaseAddress(processID, moduleName);

	// Perform pattern scanning to get the offsets
	std::vector<std::string> finaloffsets = PerformPatternScanning(processID, moduleBaseAddress, pattern);

	// Create an instance of the OffsetsForm
	offsets^ offsetsForm = gcnew offsets();

	// Show the OffsetsForm
	offsetsForm->Show();

	// Populate the OffsetsRichTextBox with the offsets
	for (const auto& offset : finaloffsets) {
		offsetsForm->OffsetsRichTextBox->AppendText(gcnew System::String(offset.c_str()));
		offsetsForm->OffsetsRichTextBox->AppendText(gcnew System::String("\n")); // Add newline after each offset
	}
}
	   // Function to validate the pattern
	   bool ValidatePattern(System::String^ pattern) {
		   // Convert the managed pattern string to native
		   const char* patternStr = (const char*)(Marshal::StringToHGlobalAnsi(pattern)).ToPointer();
		   // Convert to std::string
		   std::string patternString(patternStr);

		   // Check if the pattern is valid
		   for (char c : patternString) {
			   if (!isxdigit(c) && c != '?' && c != ' ') {
				   return false;
			   }
		   }

		   return true;
	   }
	   // Function to perform pattern scanning
	   std::vector<std::string> PerformPatternScanning(DWORD processID, uintptr_t moduleBaseAddress, System::String^ pattern) {
		   std::vector<std::string> offsets;

		   // Check if the pattern is valid
		   if (!ValidatePattern(pattern)) {
			   offsets.push_back("Invalid pattern");
			   return offsets;
		   }

		   // Convert managed pattern string to native
		   const char* patternStr = (const char*)(Marshal::StringToHGlobalAnsi(pattern)).ToPointer();
		   // Convert to std::string
		   std::string patternString(patternStr);

		   // Read memory from the module
		   uintptr_t bufferSize = 0x100000; // Adjust the buffer size as needed
		   std::vector<uint8_t> moduleMemory = ReadMemory(processID, reinterpret_cast<LPVOID>(moduleBaseAddress), bufferSize);

		   // Perform pattern scanning
		   for (size_t i = 0; i < moduleMemory.size() - patternString.size(); i++) {
			   bool found = true;
			   for (size_t j = 0; j < patternString.size(); j++) {
				   if (patternString[j] == ' ') {
					   // Skip spaces in the pattern
					   continue;
				   }
				   if (patternString[j] != '?' && moduleMemory[i + j] != strtoul(&patternString[j], nullptr, 16)) {
					   found = false;
					   break;
				   }
			   }
			   if (found) {
				   std::ostringstream oss;
				   oss << "0x" << std::hex << moduleBaseAddress + i;
				   offsets.push_back(oss.str());
			   }
		   }

		   return offsets;
	   }




private: System::Void RefleshBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Clear existing items in the ComboBoxes
	ProccessComboBox->Items->Clear();
	BaseModuleComboBox->Items->Clear();

	// Populate ComboBox with running processes
	PopulateProcessDropdown(ProccessComboBox);

	// Get the selected process name
	System::String^ selectedProcess = safe_cast<System::String^>(ProccessComboBox->SelectedItem);

	// Extract the process ID from the selected process string
	if (selectedProcess != nullptr) {
		int startIndex = selectedProcess->LastIndexOf(L'[') + 1;
		int endIndex = selectedProcess->LastIndexOf(L']');
		System::String^ processIDString = selectedProcess->Substring(startIndex, endIndex - startIndex);
		DWORD processID = System::Convert::ToUInt32(processIDString);

		// Populate BaseModuleComboBox with base addresses of modules for the selected process
		PopulateBaseModuleDropdown(BaseModuleComboBox, processID);
	}
}

};
}
