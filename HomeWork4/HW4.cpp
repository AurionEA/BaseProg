#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russian");

	//���������� ����������
	int x = 0, y = 0, temp = 0;
	//x - ����������, �������� �������������
	//y - ������ ��������������� ���������� ��� �������� �������� x � ������� �� ���������
	//temp - ������ ��������������� ���������� ��� �������� ���������� ������� � ������� �� �������
	//z - ������ ��������������� ���������� ��� �������� ����������� �������� x


	//�������� �������� ���������
	std::cout << "������� ������ ����� �� ������� [-20, 20]: ";
	std::cin >> x;
	while (x < -20 || x > 20 || x % 2 != 0){
		if (x > 20 && x % 2 != 0 || x < -20 && x % 2 != 0) {
			std::cout << "������ �����!" << std::endl;
			std::cout << "������� ������ ����� �� [-20, 20]: ";
		}
		else if (x < -20 || x > 20){
			std::cout << "������ �����! ����� ������ ������������ ������� [-20, 20]!" << std::endl;
			std::cout << "���������� �����: ";
		}
		else {
			std::cout << "������ �����! ����� ������ ���� ������!" << std::endl;
			std::cout << "���������� �����: ";
		}
		std::cin >> x;
	}
	
	//���� ������� ��������� ����� �� ���������
	y = x;
	while (y % 2 == 0) {
		y = y / 2;
		temp += 1;
	}
	std::cout << "����� ���������� �� 2: " << temp << " ���(�) ����� ���, ��� ����� ��������"<< std::endl;

	//���� ������� ��������� ����� �� 4
	//���������� y � temp ���������� ����� ������� ������ �����
	y = x;
	temp = 0;
	while (y / 4 != 0) {
		y = y / 4;
		temp += 1;
	}
	std::cout << "����� ���������� �� 4: " << temp << " ���(�) ����� ���, ��� ���� ��������� �� 0" << std::endl;

	temp = 0;
	y = x;

	//���������� ����� �� ����������� ���������
	if (x < 0) {
		std::cout << -1 << " ";
	}
	for (int i = 2; i <= y - 1;) {
		if (x%i != 0) {
			i++;
		}
		else {
			x = x / i;
			std::cout << i << " ";
		}
	}

	std::cout << "�������. �� ��������." << std::endl;

	//���������� ���������
	return 0;
}