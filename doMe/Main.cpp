#include <iostream>
#include "Settings.h"
#include "UserInterface.h"
#include <windows.h>


int main() {
    UserInterface UI;
    UserInterface UI2("UI2.txt", 1);
    string actualString;
    list<Task*> vec;
    string s;
    
    vec.push_back(new Task("read book" , -1 , 20160821 , -1 , 1300 , "home"));
    vec.push_back(new Task("read book" , 20160819 , 20160821 , 1300 , 1600 , "home"));
    vec.push_back(new Task("read book" , -1 , 20160921 , 0000 , -1 , "home"));
    vec.push_back(new Task("read book" , -1 , 20160922 , 100 , 200 , "college"));
    vec.push_back(new Task("read book" , -1 , 20161023 , 100 , 200 , ""));
    vec.push_back(new Task("read book" , -1 , -1 , -1 , -1 , "college"));
    
    UI2.printTaskList(&vec, 20160821 ,1);

    UI2.printNotificationWelcome();
    
    UI2.printPromptCommand();
    cin >> s ;
    
    //system("mode CON: COLS=120 lines=40");
    UI2.printTaskList(&vec, 20160821 ,1);

    UI2.printNotificationWelcome();
    
    UI2.printPromptCommand();
    cin >> s ;
    //cout << endl << endl;

    //UI.printSearchList(&vec, "search me"); 
    //cout << endl << endl;

   // cout << UI.getTaskString(*vec.begin() , UI._defaultViewType);

    /*
    UI.printNotificationAdd(new Task("read book" , 0 , 20160821 , 0 , 1300 , "home"));

    Settings settings;
    settings.loadSettings();
    cout << "view type is " << settings.getViewType() << endl;
    settings.changeViewType(3);
    settings.updateTextFileName("test.txt");
    settings.saveSettings();

    cout << "view type is " << settings.getViewType() << endl;
    */
    //UI.printPromptHelp();

    return 0;
}