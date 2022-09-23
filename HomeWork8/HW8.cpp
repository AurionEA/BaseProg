#include <iostream>
#include <clocale>

//Динамический массив с целыми элементами

int main() {
	setlocale(LC_ALL, "Russian");

	//Объявление массива и переменных
	int x = 0, sum = 0;;
	int* arr;

	std::cout << "Введите размер массива: ";
	std::cin >> x;
	arr = new int[x];
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
		sum = sum+arr[i];
	}

	//Вывод суммы
	std::cout << sum;
}