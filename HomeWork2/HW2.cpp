#include <iostream>
#include <clocale>

//������� "����"

int main() {
	setlocale(LC_ALL, "Russian");

	//���������� ����������
	int x = 0, y = 0, z = 0;

	//�������� �������� ���������
	std::cout << "������� X, Y � Z" << std::endl;
	std::cin >> x >> y >> z;
	if (x != y && x != z && y != z) {
		if (x > z && x > y) {
			z += x;
		}
		else if (y > x && y > z) {
			z += y;
		}
		else {
			z = z * z;
		}
		std::cout << "�����:" << z << std::endl;
	}
	else if (x == y && x == z) {
		std::cout << "��� ����� �����" << std::endl;
	}
	else if (x == y){
		std::cout << "X = Y" << std::endl;
	}
	else if (x == z){
		std::cout << "X = Z" << std::endl;
	}
	else {
		std::cout << "Y = Z" << std::endl;
	}

	//���������� ���������
	return 0;
}