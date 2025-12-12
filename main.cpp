
### **main.cpp**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;

    while (true) {
        cout << "\n--- To-Do List ---\n";
        cout << "1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
        }
        else if (choice == 2) {
            cout << "--- Tasks ---\n";
            if (tasks.empty()) cout << "No tasks.\n";
            for (int i = 0; i < tasks.size(); i++)
                cout << i+1 << ". " << tasks[i] << endl;
        }
        else if (choice == 3) {
            int index;
            cout << "Enter task number to delete: ";
            cin >> index;

            if (index > 0 && index <= tasks.size())
                tasks.erase(tasks.begin() + index - 1);
            else
                cout << "Invalid index\n";
        }
        else if (choice == 4) break;
        else cout << "Invalid choice\n";
    }
}
