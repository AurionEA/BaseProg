#include <iostream>
#include <clocale>

//Таблица

int main() {
	setlocale(LC_ALL, "Russian");

	//Объявление переменных
	int marking_size = 0, side_size1 = 0, side_size2 = 0, side_size3 = 0, age1 = 0, age2 = 0, age3 = 0, age_middle = 0;
	double height1 = 0, height2 = 0, height3 = 0, height_middle = 0, weight1 = 0, weight2 = 0, weight3 = 0, weight_middle = 0;
	std::string name1(""), name2(""), name3(""), marking(""), side1(""), side2(""), side3("");

	//Основное действие программы
	std::cout << "Введите имена трёх человек через пробел" << std::endl;
	std::cin >> name1 >> name2 >> name3;

	//Выравнивание таблицы по длине имён (Основываясь на условиях "Если" и циклах)
	if (name1.size() > name2.size() && name2.size() > name3.size()) {
		marking_size = name1.size() + 27;
		side_size1 = name2.size() - name3.size();
		side_size2 = name1.size() - name3.size();
		side_size3 = name1.size() - 2;
	}
	else if (name1.size() > name3.size() && name3.size() > name2.size()) {
		marking_size = name1.size() + 27;
		side_size1 = name3.size() - name2.size();
		side_size3 = name1.size() - name2.size();
		side_size2 = name1.size() - 2;
	}
	else if (name2.size() > name1.size() && name1.size() > name3.size()) {
		marking_size = name2.size() + 27;
		side_size2 = name1.size() - name3.size();
		side_size1 = name2.size() - name3.size();
		side_size3 = name2.size() - 2;
	}
	else if (name2.size() > name3.size() && name3.size() > name1.size()) {
		marking_size = name2.size() + 27;
		side_size2 = name3.size() - name1.size();
		side_size3 = name2.size() - name1.size();
		side_size1 = name2.size() - 2;
	}
	else if (name3.size() > name1.size() && name1.size() > name2.size()) {
		marking_size = name3.size() + 27;
		side_size3 = name1.size() - name2.size();
		side_size1 = name3.size() - name2.size();
		side_size2 = name3.size() - 2;
	}
	else if (name3.size() > name2.size() && name2.size() > name1.size()) {
		marking_size = name3.size() + 27;
		side_size3 = name2.size() - name1.size();
		side_size2 = name3.size() - name1.size();
		side_size1 = name3.size() - 2;
	}
	else if (name1.size() == name2.size() && name1.size() != name3.size()) {
		if (name1.size() > name3.size()) {
			marking_size = name1.size() + 27;
			side_size1 = name3.size()/2;
			side_size2 = name3.size()/2;
			side_size3 = (2*name1.size() - name3.size()) / 2;
		}
		else{
			marking_size = name3.size() + 27;
			side_size1 = (2*name3.size() - name1.size()) / 2;
			side_size2 = (2*name3.size() - name1.size()) / 2;
			side_size3 = name1.size()/2;
		}
	}
	else if (name1.size() == name3.size() && name1.size() != name2.size()) {
		if (name1.size() > name2.size()) {
			marking_size = name1.size() + 27;
			side_size1 = name2.size() / 2;
			side_size2 = (2*name1.size() - name2.size()) / 2;
			side_size3 = name2.size() / 2;
		}
		else {
			marking_size = name2.size() + 27;
			side_size1 = (2*name2.size() - name1.size()) / 2;
			side_size2 = name1.size() / 2;
			side_size3 = (2*name2.size() - name1.size()) / 2;
		}
	}
	else if (name2.size() == name3.size() && name2.size() != name1.size()) {
		if (name2.size() > name1.size()) {
			marking_size = name2.size() + 27;
			side_size1 = (2*name2.size() - name1.size()) / 2;
			side_size2 = name1.size() / 2;
			side_size3 = name1.size() / 2;
		}
		else {
			marking_size = name1.size() + 27;
			side_size1 = name2.size() / 2;
			side_size2 = (2 * name1.size() - name2.size()) / 2;
			side_size3 = (2 * name1.size() - name2.size()) / 2;
		}
	}
	else {
		side_size1 = 1;
		side_size2 = 1;
		side_size3 = 1;
		marking_size = name1.size() + 27;
	}
	if (marking_size < 38) {
		marking_size = 38;
	}

	for (size_t i(0); i <= marking_size; i++)
	{
		marking.insert(i, "-");
	}
	for (int i = 0; i < side_size1; i++)
	{
		side1.insert(i, " ");
	}
	for (int i = 0; i < side_size2; i++)
	{
		side2.insert(i, " ");
	}
	for (int i = 0; i < side_size3; i++)
	{
		side3.insert(i, " ");
	}
	side1.insert(side_size1, "|");
	side2.insert(side_size2, "|");
	side3.insert(side_size3, "|");

	//Остальные данные
	std::cout << "Введите возраст" << std::endl;
	std::cin >> age1 >> age2 >> age3;
	std::cout << "Введите вес" << std::endl;
	std::cin >> weight1 >> weight2 >> weight3;
	std::cout << "Введите рост" << std::endl;
	std::cin >> height1 >> height2 >> height3;

	//Среднее арифметическое данных для троих человек
	age_middle = (age1 + age2 + age3) / 3;
	weight_middle = (weight1 + weight2 + weight3) / 3;
	height_middle = (height1 + height2 + height3) / 3;

	//Вывод таблицы
	std::cout << marking << std::endl;
	std::cout << "| " << " Имя " << " | " << " Возраст " << " | " << " Вес " << " | " << " Рост " << " |" << std::endl;
	std::cout << marking << std::endl;
	std::cout << "| " << name1 << side1 << "  " << age1 << "  | " << weight1 << " | " << height1 << " |" << std::endl;
	std::cout << marking << std::endl;
	std::cout << "| " << name2 << side2 << "  " << age2 << "  | " << weight2 << " | " << height2 << " |" << std::endl;
	std::cout << marking << std::endl;
	std::cout << "| " << name3 << side3 << "  " << age3 << "  | " << weight3 << " | " << height3 << " |" << std::endl;
	std::cout << marking << std::endl;
	std::cout << marking << std::endl;
	std::cout << "| " << "Среднее" << " |  " << age_middle << "  | " << weight_middle << " | " << height_middle << " |" << std::endl;

	//Завершение программы
	return 0;
}