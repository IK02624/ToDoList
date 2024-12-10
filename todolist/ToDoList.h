#pragma once

#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include "Task.h"

using namespace std;

// 할 일 목록을 나타내는 클래스
class ToDoList {
private:
    vector <Task> tasks; // 작업 저장하는 공간
     
public:
    // 작업 추가
    void addTask(const string& description);

    // 완료로 표시
    void completeTask(int index);

    // 모든 작업 보여주기
    void showTasks() const;
};

#endif
