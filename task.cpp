#include "task.h"
#include <iostream>

Task::Task(int id, std::string title, std::string desc, int priority, std::string deadline)
    : id(id), title(title), description(desc), priority(priority), deadline(deadline) {}

void Task::display() const {
    std::cout << "ID: " << id << "\nTitle: " << title
              << "\nDescription: " << description
              << "\nPriority: " << priority
              << "\nDeadline: " << deadline << "\n";
}
