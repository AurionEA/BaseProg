#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russian");
	//Объявление переменных
	int exam1 = 0, exam2 = 0, exam3 = 0;

	//Основное действие программы
	std::cout << "5 - Отлично, 4 - Хорошо, 3 - Удовлетворительно, 2 - Неудовлетворительно, -1 - Неявка" << std::endl;
	std::cout << "Введите ваши оценки:";
	std::cin >> exam1 >> exam2 >> exam3;
	if (exam1 == 5 && exam2 == 5 && exam3 == 5) {
		std::cout << "Вы отличник!";
	}
	else if (exam1 == -1 || exam1 == 2 || exam2 == -1 || exam2 == 2 || exam3 == -1 || exam3 == 2) {
		std::cout << "Вы не сдали!";
	}
	else if (exam1 == 3 || exam2 == 3 || exam3 == 3) {
		std::cout << "Вы троечник!";
	}
	else {
		std::cout << "Вы хорошист!";
	}

	//Завершение программы
	return 0;
}