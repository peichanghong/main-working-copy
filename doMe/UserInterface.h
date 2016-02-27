#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>

#include "Task.h"
#include "ViewType.h"
#include "ViewType0.h"

using namespace std;

class UserInterface {
private:
    int _defaultViewType;
    string _textFileName;
    char buffer[255];

    //helper
    void printDisplayList(vector<string> displayList); //helper
    string getTaskString(Task* task, int viewType); //helper
    void showToUser(string string); //core helper
public:
    UserInterface(void);
    UserInterface(string textFileName, int defaultViewType);
    ~UserInterface(void);

    //prompts
    void printPromptFirstTimeUser(); //complete
    void printPromptFirstTimeUserDirectory(); //complete
    void printPromptCommand();	//complete

    //notification
    void printNotificationWelcome(); //complete
    void printPromptHelp(); //complete
    void printNotificationAdd(Task* task); 
    void printNotificationDelete(Task* task); //complete
    void printNotificationClear(); //complete
    void printNotificationViewTypeChange(int newViewType);
    void printNotificationEmpty();
    void printNotificationChangeSaveFileDirectory(string newDirectory); //complete
    void printNotificationEmptySaveFileDirectory();  //complete
    void printNotificationSearchTerm(string searchTerm);
    void printNotificationClearSearch(string searchTerm);

    //error
    void printNotificationInvalidCommand(); //complete
    void printNotificationInvalidAdd(); //complete
    void printNotificationInvalidDeletion(); //complete
    void printNotificationInvalidSaveFileDirectory(); //complete

    //main printing
    void printTaskList(list<Task*> *taskList, int currentDate ,int viewType);
    void printSearchList(list<Task*>* taskList, string searchTerm);


    
};

