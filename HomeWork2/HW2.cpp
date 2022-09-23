#include <iostream>
#include <clocale>

//Условие "Если"

int main() {
	setlocale(LC_ALL, "Russian");

	//Объявление переменных
	int x = 0, y = 0, z = 0;

	//Основное действие программы
	std::cout << "Введите X, Y и Z" << std::endl;
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
		std::cout << "Вывод:" << z << std::endl;
	}
	else if (x == y && x == z) {
		std::cout << "Все числа равны" << std::endl;
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

	//Завершение программы
	return 0;
}