#pragma once
#include "Designer.h"

class Designer3D : public Designer
{
private:
	vector<string> objects;

public:
	Designer3D() : Designer() {}

	Designer3D(string linkPorfolio, size_t countWorks, string name, size_t age, size_t experience, size_t salary, size_t rating, string status) :
		Designer(linkPorfolio, countWorks, name, age, experience, salary, rating, status) {}

	void AddObject_3d(string object);
};

