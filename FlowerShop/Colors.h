#pragma once
#include <iostream>
#include <string>
#include <vector>

class Colors {
public:
	Colors();

	std::string getColor(int pos);

private:
	std::vector<std::string> _colors{
	"�������","���������","�����","������","���������",
	"�������","�����","����������","�������","�����"
	};
};

