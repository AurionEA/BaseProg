#include <iostream>
#include <clocale>

//������ � ������ �������

int main() {
	setlocale(LC_ALL, "Russian");

	//���������� �������
	int arr[100] = { 0 }, sum = 0, x = 0;

	std::cout << "������� ������ ������� �� ������ 1 � �� ������ 100: ";
	std::cin >> x;
	std::cout << std::endl;

	//�������� �������� ���������
	for (int i = 0; i < x; i++) {
		//���� �������
		std::cin >> arr[i];
	}

	//����� �����
	std::cout << arr[0];
	for (int i = 1; i < x; i++) {
		if (arr[i] > 0) {
			std::cout << " + " << arr[i];
		}
		else
		{
			std::cout << " - " << -arr[i];
		}
	}
	std::cout << " = ";

	for (int i = 0; i < 100; i++) {
		sum += arr[i];
	}

	//����� �����
	std::cout << sum;
}