#include "task_manager.h"
#include <iostream>
using namespace std;

void TaskManager::addTask(std::string title, std::string desc, int priority, std::string deadline) {
    Task* newTask = new Task(nextId++, title, desc, priority, deadline);
    pq.push(newTask);
    taskMap[newTask->id] = newTask;
    cout << "Task added successfully.\n";
}

void TaskManager::viewTopTask() {
    if (!pq.empty()) {
        Task* top = pq.top();
        cout << "Top Task:\n";
        top->display();
    } else {
        cout << "No tasks available.\n";
    }
}

void TaskManager::viewAllTasks() {
    if (taskMap.empty()) {
        cout << "No tasks to display.\n";
        return;
    }

    std::cout << "All Tasks:\n";
    for (const auto& pair : taskMap) {
        pair.second->display();
    }
}

void TaskManager::completeTopTask() {
    if (!pq.empty()) {
        Task* top = pq.top();
        pq.pop();
        taskMap.erase(top->id);
        delete top;
        cout << "Top task completed and removed.\n";
    } else {
        cout << "No task to complete.\n";
    }
}

void TaskManager::deleteTask(int id) {
    if (taskMap.find(id) != taskMap.end()) {
        Task* task = taskMap[id];
        taskMap.erase(id);
        delete task;
        cout << "Task deleted. (Note: It may still appear in the queue until popped)\n";
    } else {
        cout << "Task ID not found.\n";
    }
}
