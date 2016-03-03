#include "GUI.h"

using namespace System; 
using namespace System::Windows::Forms;

[STAThread] 
void main(array<String^>^ args) { 
    Application::EnableVisualStyles(); 
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::GUI mainWindow; 
    Application::Run(%mainWindow); 
}

