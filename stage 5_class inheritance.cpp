//the class idea is about task managemnets
// Stage 5 - add the inheritance
//Done by Abdulraqeeb Talal AL-Ghowri 

//Note we make here a two class the "Task" class and "" the new class have a new attr to make a time required to finish the task 

#include <iostream>
#include <string>
using namespace std;

class Task {
private:
    string name;
    string task_info;
    bool is_done;

public:
    Task(string newName, string newTaskInfo, bool newIsDone)
        : name(newName), task_info(newTaskInfo), is_done(newIsDone) {}

    void setName(string newName) {
        name = newName;
    }

    void setTaskInfo(string newTaskInfo) {
        task_info = newTaskInfo;
    }

    void setIsDone(bool newIsDone) {
        is_done = newIsDone;
    }

    void viewTasks() const {
        cout << "Task: " << name
             << "\nInfo: " << task_info
             << "\nIs Done? : " << (is_done ? "Yes" : "No") << endl;
    }

    string getTaskName() const {
        return name;
    }

    bool isTaskDone() const {
        return is_done;
    }
};

class Timing_class : public Task { // this class inherits from class Tasks
private:
    int timeRequired; // the new  attr for Timing_class

public:
    Timing_class(string newName, string newTaskInfo, bool newIsDone, int newTimeRequired)
        : Task(newName, newTaskInfo, newIsDone), timeRequired(newTimeRequired) {}

    void setTimeRequired(int newTimeRequired) {
        timeRequired = newTimeRequired;
    }

    void viewTasks() const {
        Task::viewTasks();
        cout << "Time Required: " << timeRequired << " minutes\n";
    }
};

int main() {
    const int numTasks = 3;
    Timing_class tasks[numTasks] = {
        Timing_class("Task 1", "This is the first task.", false, 30),
        Timing_class("Task 2", "This is the second task.", false, 45),
        Timing_class("Task 3", "This is the third task.", false, 60)
    };

    for (int i = 0; i < numTasks; i++) {
        tasks[i].viewTasks();
    }

    return 0;
}
