#include "Logic.h"

int main() {

    string actualString;
    list<Task*> vec;
    string s;

    vec.push_back(new Task("read book" , -1 , 20160821 , -1 , 1300 , "home"));
    vec.push_back(new Task("read book" , 20160819 , 20160821 , 1300 , 1600 , "home"));
    vec.push_back(new Task("read book" , -1 , 20160921 , 0000 , -1 , "home"));
    vec.push_back(new Task("read book" , -1 , 20160922 , 100 , 200 , "college"));
    vec.push_back(new Task("read book" , -1 , 20161023 , 100 , 200 , ""));
    vec.push_back(new Task("read book" , -1 , -1 , -1 , -1 , "college"));

    UserInterface UI2(&vec);

    UI2.printTaskList(20160821 ,1);

    UI2.printNotificationWelcome();
    UI2.printPromptCommand();
    cin >> s ;

    //system("mode CON: COLS=120 lines=40");
    UI2.printTaskList(20160821 ,1);

    UI2.printPromptCommand();
    /*


    Logic doMeLogic = Logic();

    doMeLogic.setEnvironment();
    doMeLogic.displayWelcomeMessage();
    doMeLogic.executeCommandsUntilExitCommand();
    */
    return 0;
}