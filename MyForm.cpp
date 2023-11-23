#include "MyForm.h"
#include<Windows.h>
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args) {
	FreeConsole();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	Lesson1HelloWorld::MyForm form;

	Application::Run(% form);
}


