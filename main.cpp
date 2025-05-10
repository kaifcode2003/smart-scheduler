#include "task_manager.h"
#include <iostream>

int main() {
    TaskManager manager;
    int choice;

    while (true) {
        std::cout << "\n1. Add Task\n2. View Top Task\n3. View All Tasks\n"
                  << "4. Complete Top Task\n5. Delete Task\n6. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string title, desc, deadline;
            int priority;
            std::cin.ignore();
            std::cout << "Title: "; std::getline(std::cin, title);
            std::cout << "Description: "; std::getline(std::cin, desc);
            std::cout << "Priority (1=High): "; std::cin >> priority;
            std::cin.ignore();
            std::cout << "Deadline (YYYY-MM-DD): "; std::getline(std::cin, deadline);
            manager.addTask(title, desc, priority, deadline);
        }
        else if (choice == 2) manager.viewTopTask();
        else if (choice == 3) manager.viewAllTasks();
        else if (choice == 4) manager.completeTopTask();
        else if (choice == 5) {
            int id;
            std::cout << "Enter Task ID to delete: ";
            std::cin >> id;
            manager.deleteTask(id);
        }
        else if (choice == 6) break;
        else std::cout << "Invalid choice.\n";
    }

    return 0;
}
