//This is the sprated assiments uses a function call by reference and pointer also i am using a built -in fixed array here 
// Done by Abdulraqeeb Talal AL-Ghowri 
#include <iostream>
#include <string>
using namespace std;

const int num_tasks = 5; // Maximum number of tasks

struct Task {
    string name;
    bool isDone;
};

// function call by reference
void addTask(Task &task, const string &name) {
    task.name = name;
    task.isDone = false;
}

// Function call by pointer
void DoneTasks(Task *task) {
    if (task != nullptr) {
        task->isDone = true;
    }
}

void displayTasks(const Task (&tasks)[num_tasks]) {
    cout << "Task List:" << endl;
    for (int i = 0; i < num_tasks; i++) {
        if (!tasks[i].name.empty()) {
            cout << i + 1 << ". " << tasks[i].name
                 << " - " << (tasks[i].isDone ? "Done" : "Not done") << endl;
        }
    }
}

int main() {
    Task tasks[num_tasks]; // Array of tasks

    // Adding tasks
    addTask(tasks[0], "Task 1");
    addTask(tasks[1], "Task 2");

    displayTasks(tasks);


    DoneTasks(&tasks[0]);

    cout << "\nAfter Finishing Task 1:\n";
    displayTasks(tasks);

    return 0;
}
