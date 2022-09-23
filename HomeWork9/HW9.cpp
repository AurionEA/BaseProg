#include <iostream>
#include <clocale>

//Динамический массив с вещественными числами

int main() {
	setlocale(LC_ALL, "Russian");

	//Объявление массива
	int x = 0; 
	double sum = 0;
	double* arr;

	std::cout << "Введите размер массива: ";
	std::cin >> x;
	arr = new double[x];
	std::cout << std::endl;

	//Основное действие программы
	for (int i = 0; i < x; i++) {
		//ввод массива
		std::cin >> arr[i];
	}

	//Вывод чисел
	for (int i = 0; i < x; i++) {
		if (arr[i] > 0 && i > 0) {
			std::cout << " +";
		}
		std::cout << " " << arr[i];
	}
	std::cout << " = ";

	for (int i = 0; i < x; i++) {
		sum += arr[i];
	}

	//Вывод суммы
	std::cout << sum;
}