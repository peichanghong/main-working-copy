#pragma once
#include "ViewType.h"


class ViewType0 : public ViewType {
private:
    int _headerMarker;

    static const string MESSAGE_DISPLAY_HEADER;
    static const string MESSAGE_NEW_LINE;
public:
    ViewType0(void);
    ViewType0(list<Task*> *taskList, int currentDate);
    ViewType0(list<Task*> *taskList, int currentDate,int headerMarker); //in progress thinking for removal of header
    ~ViewType0(void);

    vector<string> createDisplayList(); 
    string createHeaderString(Task* individualTask);

};

