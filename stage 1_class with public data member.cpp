//the class idea is about task managemnets
// Stage1 - this is the class with only public data memeber
//Done by abdulraqeeb talal al-ghowri


#include <iostream>
#include <string>
using namespace std ;
class Task {
public:
    string name;
    string task_info;
    bool is_done;


    void view_tasks() const {
        cout << "Task: " << name
                  << "\nInfo: " << task_info
                  << "\nis Done ? : " << (is_done ? "Yes" : "No") << endl;
    }
};

int main() {
    Task task;
    task.name = "Task 1";
    task.task_info = "This is the first task.";
    task.is_done = false;

    task.view_tasks();


    cout << "\nAfter updated the tasks status :\n";
    task.is_done = true;
    task.view_tasks();

    return 0;
}
