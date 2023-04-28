#include <iostream>
#include <fstream> // библ для работы с файловой системой
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	//int n;
	//std::string path = "file.txt";
	//std::ofstream out; // объект класса офстрем для записи данных в файл
	//// или std::ofstream out(path);
	//
	//out.open(path, std::ios::app); // открытие файла в режиме арр
	//
	//if (out.is_open()) { // проверка файла на открытие
	//	std::cout << " Файл открыт для записи \n";
	//	std::string str;
	//	std::cout << " Введите строку -> ";
	//	std::getline(std::cin, str);
	//	out << str << '\n'; // добавление информации в файл
	//	std::cout << " запись добавлена в файл ";
	//}
	//else 
	//	std::cout << " ошибка открытия файла \n";
	//out.close();


	// класс ifstream
	/*std::string file_text;
	std::ifstream in;
	in.open(path);
	if (in.is_open()) {
		std::cout << " Файл открыт для чтения \n";
		std::cout << " Содержимое файла: \n";

		// посимвольное считывание
		char sym;
		while (in.get(sym)
		{
		 std::cout<<sym; //только вывод
			file_text += sym; //вывод и сохранение 
		}
		std::cout << file_text << std::endl;


		// пословное считывание
		/*while (!in.eof())
		{
			std::string tmp;
			in >> tmp;
			file_text += tmp+'\n';
		}
		std::cout << file_text << std::endl;*/

		// построчное считывание
		std::string line;
		while (std::getline(in,line))
		{
			file_text += line+'\n';
		}
		std::cout << file_text << std::endl;



	}
	else
		std::cout << "ошибка \n";
	


	in.close();
*/

	// удаление файла
	/*if (remove(path.c_str()) == 0)
	    std::cout << " Файл \"" << path << "\"удалён.\n";
	else
		std::cout << " ошибка уд-я файла. \n";*/


	return 0;
}