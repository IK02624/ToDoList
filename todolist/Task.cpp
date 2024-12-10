#include "Task.h"

// �۾� ����� �Բ� �ʱ�ȭ�ϴ� ������
Task::Task(const string& desc) : description(desc), completed(false) {}

// �۾� �Ϸ�� ����
void Task::markComplete() {
    completed = true;
}

// �۾� ������ ������
string Task::getDescription() const {
    return description;
}

// �۾� �Ϸ� ���� Ȯ��
bool Task::isCompleted() const {
    return completed;
}
