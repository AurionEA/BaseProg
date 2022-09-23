#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russian");

	//Объявление массива
	int* mass = 0;
	int* temp = 0;
	int size, id;

	//Размер массива
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	mass = new int[size];
	temp = new int[size];
	std::cout << std::endl;

	//Замена элемента массива
	std::cout << "Введите элемент массива для замены на число 21: ";
	std::cin >> id;
	for (int i = 0; i < size; i++) {
		mass[i] = 0;
	}
	mass[id] = 21;
	
	for (int i = 0; i < size; i++) {
		temp[i] = mass[i];
	}
	
	delete[] mass;
	size = size + 3;
	mass = new int[size];

	for (int i = 0; i < size-3; i++) {
		mass[i] = temp[i];
	}
	mass[size - 3] = 4;
	mass[size - 2] = 5;
	mass[size - 1] = 6;

	delete[] temp;
	temp = new int[size];

	for (int i = 0; i < size; i++) {
		temp[i] = mass[i];
	}

	delete[] mass;
	size = size * 2;
	mass = new int[size];

	for (int i = 0; i < size; i++) {
		mass[i] = 0;
	}

	for (int i = 0; i < size/2+size%2; i++) {
		mass[i] = temp[i];
	}

	//Присваивание индексу 13 значение -25
	if (size > 13) {
		mass[13] = -25;
	}
	
	//Вывод массива
	for (int i = 0; i < size; i++) {
		std::cout << " " << mass[i];
	}
	std::cout << std::endl;

	//Вывод массива в обратном порядке
	for (int i = size-1; i > -1; i--) {
		std::cout << " " << mass[i];
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}