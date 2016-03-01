#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <windows.h>

#include "UserInterface.h"
using namespace std;


class Settings {
#ifndef TESTMODE 
private: 
#else 
public: 
#endif

	static const string FILE_NAME_SETTINGS;
	static const string VOID_INDICATOR;
	static const string VOID_STRING;

	string _textFileName;
	string _saveDirectory;
	int _viewType; //temporary this first before we finalise naming
 
	string createTextFileNameString(string textFileName); //helper input test return test.txt
	bool checkValidityOfDirectory(const string& directory); //helper
	void openNewSettingFile(); // complete
	string writeSettingsDetails(string sentence); //helper
	string loadSettingsDetails(string sentence); //helper 
	std::string promptForTextName(); // complete
	
public:
	Settings(void);
	~Settings(void);

    //incomplete
    void changeSaveDirectory(string directory); 

    //complete
	void updateTextFileName(string textFileName);
	bool checkForSettingsFile();
	string getSaveDirectory(); 
	void loadSettings(); 
	void saveSettings(); 
	bool checkEmptySaveDirectory(); 
    int getViewType();
    void changeViewType(int newViewType);
};

