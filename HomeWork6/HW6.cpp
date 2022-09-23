#include <iostream>
#include <clocale>

//Массив с вещественными элементами

int main() {
	setlocale(LC_ALL, "Russian");

	//Объявление массива
	double arr[100] = { 0 }, sum = 0;
	int	x;

	std::cout << "Введите размер массива не меньше 1 и не больше 100: ";
	std::cin >> x;
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

	for (int i = 0; i < 100; i++) {
		sum += arr[i];
	}

	//Вывод суммы
	std::cout << sum;
}