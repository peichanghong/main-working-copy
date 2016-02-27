#include <iostream>
#include "Settings.h"
#include "UserInterface.h"

int main() {
    UserInterface UI;

    string actualString;
    list<Task*> vec;


    vec.push_back(new Task("read book" , 0 , 20160821 , 0 , 1300 , "home"));
    vec.push_back(new Task("read book" , 20160819 , 20160821 , 1300 , 1600 , "home"));
    vec.push_back(new Task("read book" , 0 , 20160921 , 0 , 0 , "home"));
    vec.push_back(new Task("read book" , 0 , 0 , 0 , 0 , "college"));

    UI.printTaskList(&vec, 20160821 ,0); 

    cout << endl << endl;

    UI.printSearchList(&vec, "search me"); 
    //cout << UI.getTaskStringType0(new Task("read book" , 0 , 20160921 , 0 , 0 , "home")) <<endl;

    UI.printNotificationAdd(new Task("read book" , 0 , 20160821 , 0 , 1300 , "home"));

    Settings settings;
    settings.loadSettings();
    cout << "view type is " << settings.getViewType() << endl;
    settings.changeViewType(3);
    settings.updateTextFileName("test.txt");
    settings.saveSettings();

    cout << "view type is " << settings.getViewType() << endl;

    return 0;
}