#pragma once

#ifndef TODOLIST_H
#define TODOLIST_H

#include <vector>
#include "Task.h"

using namespace std;

// �� �� ����� ��Ÿ���� Ŭ����
class ToDoList {
private:
    vector <Task> tasks; // �۾� �����ϴ� ����
     
public:
    // �۾� �߰�
    void addTask(const string& description);

    // �Ϸ�� ǥ��
    void completeTask(int index);

    // ��� �۾� �����ֱ�
    void showTasks() const;
};

#endif
