#include "mainform.h"

using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PatternScanner::mainform form;
	Application::Run(% form);
}