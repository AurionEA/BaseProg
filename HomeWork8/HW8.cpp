#include <iostream>
#include <clocale>

//������������ ������ � ������ ����������

int main() {
	setlocale(LC_ALL, "Russian");

	//���������� ������� � ����������
	int x = 0, sum = 0;;
	int* arr;

	std::cout << "������� ������ �������: ";
	std::cin >> x;
	arr = new int[x];
	std::cout << std::endl;

	//�������� �������� ���������
	for (int i = 0; i < x; i++) {
		//���� �������
		std::cin >> arr[i];
	}

	//����� �����
	for (int i = 0; i < x; i++) {
		if (arr[i] > 0 && i > 0) {
			std::cout << " +";
		}
		std::cout << " " << arr[i];
	}
	std::cout << " = ";

	for (int i = 0; i < x; i++) {
		sum = sum+arr[i];
	}

	//����� �����
	std::cout << sum;
}