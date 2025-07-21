#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
public:
    int id;
    std::string title;
    std::string description;
    int priority;
    std::string deadline;

    Task(int id, std::string title, std::string desc, int priority, std::string deadline);
    void display() const;
};

#endif
