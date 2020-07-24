#pragma once
#include "Designer.h"

class GraphicsDesigner : public Designer
{
private:
	vector<string> logoPaths;
	vector<string> bannersPaths;
	vector<string> layouts;
public:
	GraphicsDesigner() : Designer() {}
	GraphicsDesigner(string linkPorfolio, size_t countWorks, string name, size_t age, size_t experience, size_t salary, size_t rating, string status) :
		Designer(linkPorfolio, countWorks, name, age, experience, salary, rating, status) {}
	void AddLogo(string logo);
	void AddBanner(string banner);
	void AddLayout(string layout);
};