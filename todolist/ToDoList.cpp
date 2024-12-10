#include "ToDoList.h"
#include <iostream>

// 새로운 작업을 할 일 목록에 추가
void ToDoList::addTask(const string& description) {
    tasks.emplace_back(description);
}

// 작업을 인덱스로 찾아 완료로 표시
void ToDoList::completeTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].markComplete();
    }
    else {
        cout << "잘못된 작업 인덱스입니다." << endl;
    }
}

// 할 일 목록의 모든 작업을 표시
void ToDoList::showTasks() const {
    cout << endl << endl<< "----------------------------------------" << endl << endl;
    cout << "아래는 작성하신 할 일 입니다." << endl << endl;
    cout << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].getDescription();
        if (tasks[i].isCompleted()) {
            cout << " [완료됨]";
        }
        cout << endl;
        
    }
    cout << endl;
    cout << "---------------------------------------- " << endl;
}
