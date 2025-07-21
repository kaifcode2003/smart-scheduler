#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "task.h"
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

class TaskManager {
private:
    struct Compare {
        bool operator()(Task* a, Task* b) {
            return a->priority > b->priority; // Min-Heap based on priority
        }
    };

    priority_queue<Task*, vector<Task*>, Compare> pq;
    unordered_map<int, Task*> taskMap;
    int nextId = 1;

public:
    void addTask(string title,string desc, int priority,string deadline);
    void viewTopTask();
    void viewAllTasks();
    void completeTopTask();
    void deleteTask(int id);
};

#endif
