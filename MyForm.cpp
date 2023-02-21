#include "MyForm.h"

using namespace winformtest2resrat;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int WinMain()
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew MyForm());
	return 0;
}
