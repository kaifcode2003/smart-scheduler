#include "task.h"
#include <iostream>
using namespace std;

Task::Task(int id, string title, string desc, int priority, string deadline)
    : id(id), title(title), description(desc), priority(priority), deadline(deadline) {}

void Task::display() const {
    cout << "\n------------------------------------------------------------\n";
    cout << " ID       : " << id << "\n";
    cout << " Title    : " << title << "\n";
    cout << " Description : " << description << "\n";
    cout << " Priority : " << (priority == 1 ? "High" : (priority == 2 ? "Medium" : "Low")) << "\n";
    cout << " Deadline : " << deadline << "\n";
    cout << "------------------------------------------------------------\n";
}
