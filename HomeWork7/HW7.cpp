#include <iostream>
#include <clocale>

//Массив случайных чисел

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	//Объявление массива
	int arr[100] = { 0 }, arrand[100] = { 0 }, x = 0, temp[100] = { 0 }, z = 0;

	std::cout << "Введите размер массива не меньше 1 и не больше 100: ";
	std::cin >> x;
	std::cout << std::endl;
	
	while (x > 100 || x < 1) {
		std::cout << "Ошибка! Выход за пределы массива!" << std::endl;
		std::cout << "Введите размер массива не меньше 1 и не больше 100: ";
		std::cin >> x;
		std::cout << std::endl;
	}

	//Основное действие программы
	for (int i = 0; i < x; i++) {

		//ввод случайных чисел
		arr[i] = -100+rand() % 201;
		//arrand[i] = rand() % 2;
		//if (arrand[i] % 2 == 0) {
		//	arr[i] = arr[i] * -1;
		//}
	}

	//Вывод чисел
	for (int i = 0; i < x; i++) {
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;

	//Возведение каждого второго элемента массива в квадрат
	for (int i = 1; i < x; i+=2) {
		arr[i] = arr[i] * arr[i];
	}

	//Вывод чисел
	for (int i = 0; i < x; i++) {
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;

	//Замена элементов, делящихся на 3 без остатка, на нули
	for (int i = 0; i < x; i++) {
		if (arr[i] % 3 == 0) {
			arr[i] = 0;
		}
	}

	//Вывод чисел
	for (int i = 0; i < x; i++) {
		std::cout << " " << arr[i];
	}
	std::cout << std::endl;

	//Сортировка массива
	for (int i = 0; i < x; i++) {
			if (arr[i] != 0) {
				temp[z] = arr[i];
				z++;
			}
	}

	//Вывод чисел
	for (int i = 0; i < x; i++) {
		std::cout << " " << temp[i];
	}

	return 0;
}