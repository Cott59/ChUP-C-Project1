#include <iostream>
#include <fstream> // ���� ��� ������ � �������� ��������
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	//int n;
	//std::string path = "file.txt";
	//std::ofstream out; // ������ ������ ������� ��� ������ ������ � ����
	//// ��� std::ofstream out(path);
	//
	//out.open(path, std::ios::app); // �������� ����� � ������ ���
	//
	//if (out.is_open()) { // �������� ����� �� ��������
	//	std::cout << " ���� ������ ��� ������ \n";
	//	std::string str;
	//	std::cout << " ������� ������ -> ";
	//	std::getline(std::cin, str);
	//	out << str << '\n'; // ���������� ���������� � ����
	//	std::cout << " ������ ��������� � ���� ";
	//}
	//else 
	//	std::cout << " ������ �������� ����� \n";
	//out.close();


	// ����� ifstream
	/*std::string file_text;
	std::ifstream in;
	in.open(path);
	if (in.is_open()) {
		std::cout << " ���� ������ ��� ������ \n";
		std::cout << " ���������� �����: \n";

		// ������������ ����������
		char sym;
		while (in.get(sym)
		{
		 std::cout<<sym; //������ �����
			file_text += sym; //����� � ���������� 
		}
		std::cout << file_text << std::endl;


		// ��������� ����������
		/*while (!in.eof())
		{
			std::string tmp;
			in >> tmp;
			file_text += tmp+'\n';
		}
		std::cout << file_text << std::endl;*/

		// ���������� ����������
		std::string line;
		while (std::getline(in,line))
		{
			file_text += line+'\n';
		}
		std::cout << file_text << std::endl;



	}
	else
		std::cout << "������ \n";
	


	in.close();
*/

	// �������� �����
	/*if (remove(path.c_str()) == 0)
	    std::cout << " ���� \"" << path << "\"�����.\n";
	else
		std::cout << " ������ ��-� �����. \n";*/


	return 0;
}