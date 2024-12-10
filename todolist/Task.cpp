#include "Task.h"

// 작업 내용과 함께 초기화하는 생성자
Task::Task(const string& desc) : description(desc), completed(false) {}

// 작업 완료로 변경
void Task::markComplete() {
    completed = true;
}

// 작업 내용을 가져옴
string Task::getDescription() const {
    return description;
}

// 작업 완료 여부 확인
bool Task::isCompleted() const {
    return completed;
}
