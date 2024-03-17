// The Implementation file

#include "Task.h"

Task::Task(const string &name, const string &info)
    : name(name), info(info), isDone(false) {}

void Task::complete() {
    isDone = true;
}

void Task::display() const {
    cout << "Task: " << name
              << "\ninfo: " << info
              << "\nDone: " << (isDone ? "Yes" : "No") << endl;
}

void TaskManager::addTask(const string &name, const string &info) {
    tasks.emplace_back(name, info);
}

void TaskManager::DoneTask(const string &name) {
    for (auto &task : tasks) {
        if (task.getName() == name) {
            task.complete();
            break;
        }
    }
}


void TaskManager::displayAllTasks() const {
    for (const auto &task : tasks) {
        task.display();
    }
}
