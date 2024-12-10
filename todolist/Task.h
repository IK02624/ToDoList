#pragma once

#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;


class Task { // 할 일 목록의 작업을 나타내는 클래스
private:
    string description; // 작업 내용
    bool completed; // 작업의 완료 여부

public:
    // 작업을 설명과 함께 초기화하는 생성자
    Task(const string& desc);

    // 작업 완료 표시
    void markComplete();

    // 작업 내용 가져오기
    string getDescription() const;

    // 작업 내용 완료 여부 확인
    bool isCompleted() const;
};

#endif
