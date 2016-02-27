#include "ViewType0.h"
const string ViewType0::MESSAGE_DISPLAY_HEADER = "Today's date is %s";
const string ViewType0::MESSAGE_NEW_LINE = "\n";
const string ViewType0::MESSAGE_AM = " am";
const string ViewType0::MESSAGE_PM = " pm";
const int TIME_MIDDAY = 1200;


ViewType0::ViewType0(void) {
}

ViewType0::ViewType0(list<Task*> *taskList) {
    _taskList = taskList;
    _currentDate = 0;
    _headerMarker = 0;
}

ViewType0::ViewType0(list<Task*> *taskList, int currentDate) : ViewType(taskList,currentDate) {
    _headerMarker = 0;
}

ViewType0::~ViewType0(void) {
}

string ViewType0::createTaskString(Task* individualTask, int index) {
    string taskString;
    string complimentaryString;
    complimentaryString = getComplimentaryString(individualTask);
    taskString = getTaskString(individualTask);

    sprintf_s(buffer, MESSAGE_DISPLAY_CONTENTS.c_str(),index, taskString.c_str());
    taskString = buffer;

    return complimentaryString + taskString;
}

string ViewType0::getComplimentaryString(Task* individualTask) {
    int date;
    date = individualTask->getDate2();

    switch (_headerMarker) {
    case 0:
        sprintf_s(buffer, MESSAGE_DISPLAY_HEADER.c_str(), (getDateTaskString(_currentDate)).c_str());
        _headerMarker = 1;
        return buffer + MESSAGE_NEW_LINE;
        break;
    case 1:
        if(_currentDate != date) {    
            _headerMarker = 2;
            return MESSAGE_NEW_LINE;
            break;
        } 
        break;
    }
    return MESSAGE_VOID_STRING;
}

string ViewType0::getTimeTaskString(int time) {
    ostringstream oss;
    string timeString;

    if(time != 0) {
        if(time >= TIME_MIDDAY) {
            time = time - TIME_MIDDAY;
            oss << time;  
            timeString = oss.str();
            timeString = timeString + MESSAGE_PM;
        } else {
            oss << time;  
            timeString = oss.str();
            timeString = timeString + MESSAGE_AM;
        }
        timeString.insert(timeString.size() - 5, MESSAGE_TIME_SEPERATOR);
        return timeString;

    } else {
        return MESSAGE_VOID_STRING;
    }
}


