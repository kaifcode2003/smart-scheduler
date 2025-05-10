#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "task.h"
#include <queue>
#include <unordered_map>
#include <vector>

class TaskManager {
private:
    struct Compare {
        bool operator()(Task* a, Task* b) {
            return a->priority > b->priority; // Min-Heap based on priority
        }
    };

    std::priority_queue<Task*, std::vector<Task*>, Compare> pq;
    std::unordered_map<int, Task*> taskMap;
    int nextId = 1;

public:
    void addTask(std::string title, std::string desc, int priority, std::string deadline);
    void viewTopTask();
    void viewAllTasks();
    void completeTopTask();
    void deleteTask(int id);
};

#endif
