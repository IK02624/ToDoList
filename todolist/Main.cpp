#include "ToDoList.h"
#include <iostream>

using namespace std;

bool isInputValid();

int main() {
    ToDoList toDoList; // toDoList ��ü
    int choice;

    do {
        // �޴� �ɼ� ǥ��
        cout << endl << endl;
        cout << "----------------------------------------";
        cout << "\n�� �� ��� �޴�:\n";
        cout << "1. �۾� �߰�\n";
        cout << "2. �۾� �Ϸ�\n";
        cout << "3. �۾� ����\n";
        cout << "4. ����\n";
        cout << "----------------------------------------\n" << endl;
        cout << "���ϴ� �ɼ��� �Է��ϼ���: ";

        while (true) {
            std::cin >> choice; // �Է��� ���⼭ ����

            if (isInputValid()) { // ������ �Լ��� ��ȿ�� �˻�
                break; // ��ȿ�ϸ� �ݺ� ����
            }
            else {
                std::cout << "��ȿ���� ���� �Է°�.\n";
            }
        }
        cout << endl;
        cin.ignore();

        switch (choice) {
        case 1: {
            // ���ο� �۾� �߰�
            string description;
            cout << "�� ���� �ۼ����ּ���. __ ";
            getline(cin, description);
            toDoList.addTask(description);
            break;
        }
        case 2: {
            // �۾��� �Ϸ�� ǥ��
            int index;
            toDoList.showTasks();
            cout << "�Ϸ��� �۾��� ��ȣ�� �Է����ּ���, __  ";
            cin >> index;
            toDoList.completeTask(index - 1);
            cout << endl << "�۾��� �Ϸ�Ǿ����ϴ�." << endl;
            break;
        }
        case 3: {
            // ��� �۾� ����
            toDoList.showTasks();
            break;
        }
        case 4: {
            // ���α׷� ����
            cout << "���� ��..." << endl;
            break;
        }
        default: {
            // �߸��� �޴� ���� ó��
            cout << "�߸��� �����Դϴ�. �ٽ� �õ��ϼ���." << endl;
            break;
        }
        }
    } while (choice != 4);

    return 0;
}

bool isInputValid() {
    if (std::cin.fail()) {
        std::cin.clear(); // ��Ʈ�� ���� �ʱ�ȭ
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // �߸��� �Է� ����
        return false; // ��ȿ���� ���� �Է�
    }
    return true; // ��ȿ�� �Է�
}

