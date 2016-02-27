#include "ViewType0.h"
const string ViewType0::MESSAGE_DISPLAY_HEADER = "Today's date is %s";
const string ViewType0::MESSAGE_NEW_LINE = "\n";

ViewType0::ViewType0(void) {
}

ViewType0::ViewType0(list<Task*> *taskList, int currentDate) : ViewType(taskList,currentDate) {
    _headerMarker = 0;
}

ViewType0::ViewType0(list<Task*> *taskList, int currentDate, int headerMarker) : ViewType(taskList,currentDate) {
    _headerMarker = headerMarker; //still in planning phase
}

ViewType0::~ViewType0(void) {
}

vector<string> ViewType0::createDisplayList() {
    list<Task*>::iterator taskListIter = (*_taskList).begin();

    while(taskListIter != (*_taskList).end()) {
        _displayList.push_back(createHeaderString(*taskListIter));
        _displayList.push_back(getTaskString(*taskListIter));
        taskListIter++;
    }
    return _displayList;
}

string ViewType0::createHeaderString(Task* individualTask) {
    int date;
    date = individualTask->getDate2();

    if(date == _currentDate) {
        if(_headerMarker == 0) {
            sprintf_s(buffer, MESSAGE_DISPLAY_HEADER.c_str(), (getDateTaskString(_currentDate)).c_str());
            _headerMarker = 1;
            return buffer;
        }
    } else {
        if(_headerMarker == 1) {
            _headerMarker = 2;
            return MESSAGE_NEW_LINE;
        } 
    }
    return MESSAGE_VOID_STRING;
}


