#include "ToDoList.h"
#include <iostream>

using namespace std;

bool isInputValid();

int main() {
    ToDoList toDoList; // toDoList 객체
    int choice;

    do {
        // 메뉴 옵션 표시
        cout << endl << endl;
        cout << "----------------------------------------";
        cout << "\n할 일 목록 메뉴:\n";
        cout << "1. 작업 추가\n";
        cout << "2. 작업 완료\n";
        cout << "3. 작업 보기\n";
        cout << "4. 종료\n";
        cout << "----------------------------------------\n" << endl;
        cout << "원하는 옵션을 입력하세요: ";

        while (true) {
            std::cin >> choice; // 입력은 여기서 받음

            if (isInputValid()) { // 별도의 함수로 유효성 검사
                break; // 유효하면 반복 종료
            }
            else {
                std::cout << "유효하지 않은 입력값.\n";
            }
        }
        cout << endl;
        cin.ignore();

        switch (choice) {
        case 1: {
            // 새로운 작업 추가
            string description;
            cout << "할 일을 작성해주세요. __ ";
            getline(cin, description);
            toDoList.addTask(description);
            break;
        }
        case 2: {
            // 작업을 완료로 표시
            int index;
            toDoList.showTasks();
            cout << "완료할 작업의 번호를 입력해주세요, __  ";
            cin >> index;
            toDoList.completeTask(index - 1);
            cout << endl << "작업이 완료되었습니다." << endl;
            break;
        }
        case 3: {
            // 모든 작업 보기
            toDoList.showTasks();
            break;
        }
        case 4: {
            // 프로그램 종료
            cout << "종료 중..." << endl;
            break;
        }
        default: {
            // 잘못된 메뉴 선택 처리
            cout << "잘못된 선택입니다. 다시 시도하세요." << endl;
            break;
        }
        }
    } while (choice != 4);

    return 0;
}

bool isInputValid() {
    if (std::cin.fail()) {
        std::cin.clear(); // 스트림 상태 초기화
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 잘못된 입력 제거
        return false; // 유효하지 않은 입력
    }
    return true; // 유효한 입력
}

