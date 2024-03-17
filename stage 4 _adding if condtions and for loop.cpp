//the class idea is about task managemnets
// Stage 4 - adding a if condtion and for loop  
//Done by Abdulraqeeb Talal AL-Ghowri 

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

    bool isTaskDone() const {
        return is_done;
    }

    string getTaskName() const {
        return name;
    }
};

int main() {
    const int numTasks = 3;// objects array szie 
    Task tasks[numTasks] = {
        Task("Task 1", "This is the first task.", false),
        Task("Task 2", "This is the second task.", false),
        Task("Task 3", "This is the third task.", false)
    }; // Note here we make a array of Task objects 

    for (int i = 0; i < numTasks; i++) {
        if (!tasks[i].isTaskDone()) {
            tasks[i].setIsDone(true);
            cout << "Updated status for: " << tasks[i].getTaskName() << endl;
        }
        tasks[i].viewTasks();
    }

    return 0;
}
