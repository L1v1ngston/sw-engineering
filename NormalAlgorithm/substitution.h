#pragma once

#include <string>
#include <vector>
#include <iostream>

struct substitution {
	
	// ������� ���������
	std::string search;
	
	// ����������� ������ ������� ���������
	std::string put;
	
	// ���� ����������������
	bool flag;
	
	// ����������� �������
	substitution(std::string s, std::string p, bool flag);
};

bool substitute(std::string& str, substitution subst);

void algorithm(std::string& str, std::vector<substitution> scheme);
