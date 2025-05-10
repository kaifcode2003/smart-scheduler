#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
public:
    int id;
    std::string title;
    std::string description;
    int priority; // lower number = higher priority
    std::string deadline; // e.g., "2025-05-15"

    Task(int id, std::string title, std::string desc, int priority, std::string deadline);

    void display() const;
};

#endif
