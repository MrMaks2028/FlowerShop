#pragma once
#include <iostream>
#include <string>
#include <vector>

class Flowers {
public:
	Flowers();

	std::string getFlower(int pos);
	std::vector<std::string> getFlowers();

private:
	std::vector<std::string> _flowers{
	"Роза","Гвоздика","Хризантема","Лизиантус","Гербера",
	"Тюльпан","Альстромерия","Анемон","Астра","Гиацинт",
	"Гортензия","Ирис","Ландыш","Лилия","Мак",
	"Нарцисс","Пион","Подсолнух","Гладиолус","Георгина"
	};

};
