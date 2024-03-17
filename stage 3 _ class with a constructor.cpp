//the class idea is about task managemnets
// Stage 3 - class with a constructor 
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
};

int main() {
    Task task("Task 1", "This is the first task.", false);

    task.viewTasks();

    cout << "\nAfter updating the task's status:\n";
    task.setIsDone(true);
    task.viewTasks();

    return 0;
}
