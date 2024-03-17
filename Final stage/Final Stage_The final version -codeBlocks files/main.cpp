// The main source file

#include "Task.h"
int main() {
    TaskManager manager;
    manager.addTask("Task 1", "This is the first task.");
    manager.addTask("Task 2", "This is the second task.");

    manager.displayAllTasks();

    manager.DoneTask("Task 1");
    cout << "\nAfter finishing  Task 1:\n";
    manager.displayAllTasks();

    return 0;
}
