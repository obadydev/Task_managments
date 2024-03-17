// The header file of Task manager project

#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Task {
private:
    string name;
    string info;
    bool isDone;

public:
    Task(const string &name, const string &info);
    void complete();
    void display() const;

    string getName() const { return name; }
    string get_info() const { return info; }
    bool get_isDone() const { return isDone; }
};

class TaskManager {
private:
    vector<Task> tasks;

public:
    void addTask(const string &name, const string &info);
    void DoneTask(const string &name);
    void displayAllTasks() const;
};

#endif
