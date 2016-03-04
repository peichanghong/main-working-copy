#pragma once
#include <windows.h>
#include "ViewType.h"
#include "ViewType0.h"

class ViewType1 : public ViewType {
private:
    int _headerMarker;

    static const string MESSAGE_DISPLAY_HEADER;
    static const string MESSAGE_NEW_LINE;
    static const string MESSAGE_AM;
    static const string MESSAGE_PM;
    static const int TIME_MIDDAY;
    static const string MESSAGE_BOX;
    static const char MESSAGE_BOX_CHARACTER;
    static int WINDOWS_WIDTH;
    static int WINDOWS_LENGTH; 

    string getComplimentaryString(Task* individualTask);
    string getTimeTaskString(int time);
    void setWindowsRowsColumns();
public:
    ViewType1(void);
    ViewType1(list<Task*> *taskList);
    ViewType1(list<Task*> *taskList, int currentDate);
    ~ViewType1(void);

    vector<string> createDisplayList();
    vector<string> createDisplayBox(vector<string> displayList);
};

