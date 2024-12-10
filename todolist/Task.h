#pragma once

#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;


class Task { // �� �� ����� �۾��� ��Ÿ���� Ŭ����
private:
    string description; // �۾� ����
    bool completed; // �۾��� �Ϸ� ����

public:
    // �۾��� ����� �Բ� �ʱ�ȭ�ϴ� ������
    Task(const string& desc);

    // �۾� �Ϸ� ǥ��
    void markComplete();

    // �۾� ���� ��������
    string getDescription() const;

    // �۾� ���� �Ϸ� ���� Ȯ��
    bool isCompleted() const;
};

#endif
