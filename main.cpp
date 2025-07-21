#include "task_manager.h"
#include <iostream>
#include <limits>
using namespace std;

void pause() {
    cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void printMenu() {
    cout << "\n==================== SMART SCHEDULER ====================\n";
    cout << " 1. Add Task\n";
    cout << " 2. View Top Priority Task\n";
    cout << " 3. View All Tasks\n";
    cout << " 4. Complete Top Task\n";
    cout << " 5. Delete Task by ID\n";
    cout << " 6. Exit\n";
    cout << "=========================================================\n";
    cout << " Enter your choice (1-6): ";
}

int main() {
    TaskManager manager;
    int choice;

    while (true) {
        printMenu();
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid input. Please enter a number between 1 and 6.\n";
            continue;
        }

        if (choice == 1) {
            string title, desc, deadline;
            int priority;

            cin.ignore();
            cout << "\nEnter Task Details:\n";
            cout << " Title: ";
            getline(cin, title);
            cout << " Description: ";
            getline(cin, desc);
            cout << " Priority (1 = High, 2 = Medium, 3 = Low): ";
            cin >> priority;
            cin.ignore();
            cout << " Deadline (YYYY-MM-DD): ";
            getline(cin, deadline);

            manager.addTask(title, desc, priority, deadline);
            pause();
        }
        else if (choice == 2) {
            cout << "\nViewing Top Priority Task...\n";
            manager.viewTopTask();
            pause();
        }
        else if (choice == 3) {
            cout << "\nViewing All Tasks...\n";
            manager.viewAllTasks();
            pause();
        }
        else if (choice == 4) {
            cout << "\nCompleting Top Task...\n";
            manager.completeTopTask();
            pause();
        }
        else if (choice == 5) {
            int id;
            cout << "\nEnter Task ID to delete: ";
            cin >> id;
            manager.deleteTask(id);
            pause();
        }
        else if (choice == 6) {
            cout << "\nExiting Smart Scheduler. Goodbye!\n";
            break;
        }
        else {
            cout << "\nInvalid choice. Please try again.\n";
        }
    }

    return 0;
}
