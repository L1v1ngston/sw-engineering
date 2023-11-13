#include "substitution.h"
#include <string>
#include <iostream>

int main() {
	setlocale(LC_ALL, "");
	
	std::cout << "������ �� ���������\n\n";

	substitution sub1{ "�", "��������", false };
	substitution sub2{ "��", "���������", false };
	substitution sub3{ "�", "�����������", false };
	substitution sub4{ "�", "���", false };
	substitution sub5{ "�����������", "������", true };
	substitution sub6{ "� ��� ������", "�� ��� �����", false };
	
	std::string s = "� ����� �� ��� � � �.";
	std::cout << "source: " << s << "\n";
	algorithm(s, { sub1, sub2, sub3, sub4, sub5, sub6 });
	std::cout << "\n\n";

	std::cout << "������ �1\n\n";

	substitution s1{ "b", "a", true };
	substitution s2{ "a", "b", false };

	s = "aaa";
	std::cout << "source: " << s << "\n";
	algorithm(s, { s1, s2 });
	std::cout << "\n\n";
	
	std::cout << "������ �2\n\n";

	substitution subs1{ "ab", "", false };
	substitution subs2{ "a", "b", false };

	s = "aababab";
	std::cout << "source: " << s << "\n";
	algorithm(s, { subs1, subs2 });
	std::cout << "\n";
}
