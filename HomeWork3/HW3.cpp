#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russian");
	//���������� ����������
	int exam1 = 0, exam2 = 0, exam3 = 0;

	//�������� �������� ���������
	std::cout << "5 - �������, 4 - ������, 3 - �����������������, 2 - �������������������, -1 - ������" << std::endl;
	std::cout << "������� ���� ������:";
	std::cin >> exam1 >> exam2 >> exam3;
	if (exam1 == 5 && exam2 == 5 && exam3 == 5) {
		std::cout << "�� ��������!";
	}
	else if (exam1 == -1 || exam1 == 2 || exam2 == -1 || exam2 == 2 || exam3 == -1 || exam3 == 2) {
		std::cout << "�� �� �����!";
	}
	else if (exam1 == 3 || exam2 == 3 || exam3 == 3) {
		std::cout << "�� ��������!";
	}
	else {
		std::cout << "�� ��������!";
	}

	//���������� ���������
	return 0;
}