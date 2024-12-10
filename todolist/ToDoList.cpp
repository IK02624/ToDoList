#include "ToDoList.h"
#include <iostream>

// ���ο� �۾��� �� �� ��Ͽ� �߰�
void ToDoList::addTask(const string& description) {
    tasks.emplace_back(description);
}

// �۾��� �ε����� ã�� �Ϸ�� ǥ��
void ToDoList::completeTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].markComplete();
    }
    else {
        cout << "�߸��� �۾� �ε����Դϴ�." << endl;
    }
}

// �� �� ����� ��� �۾��� ǥ��
void ToDoList::showTasks() const {
    cout << endl << endl<< "----------------------------------------" << endl << endl;
    cout << "�Ʒ��� �ۼ��Ͻ� �� �� �Դϴ�." << endl << endl;
    cout << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].getDescription();
        if (tasks[i].isCompleted()) {
            cout << " [�Ϸ��]";
        }
        cout << endl;
        
    }
    cout << endl;
    cout << "---------------------------------------- " << endl;
}
