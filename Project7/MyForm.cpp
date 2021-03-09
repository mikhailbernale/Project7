#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project7::MyForm form;   //Project7 - name of your project
    Application::Run(% form);
}
