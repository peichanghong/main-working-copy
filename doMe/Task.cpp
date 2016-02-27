#include "Task.h"


Task::Task(string name, int date1, int date2, int time1, int time2, string location) {
    _name = name;
    _date1 = date1;
    _date2 = date2;
    _time1 = time1;
    _time2 = time2;
    _location = location;
}

Task::~Task(void) {
}

string Task::getName() {
    return _name;
}
int Task::getDate1() {
    return _date1;
}
int Task::getDate2() {
    return _date2;
}
int Task::getTime1() {
    return _time1;
}
int Task::getTime2() {
    return _time2;
}
string Task::getLocation() {
    return _location;
}



