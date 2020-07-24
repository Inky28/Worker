#pragma once

#include "Designer.h"

class WebDesigner : public Designer
{
private:
	vector<string> UI_templates;
	vector<string> UX_templates;
	vector<string> figmaWorks;
public:
	WebDesigner() : Designer() {}
	WebDesigner(string linkPorfolio, size_t countWorks, string name, size_t age, size_t experience, size_t salary, size_t rating, string status) :
		Designer(linkPorfolio, countWorks, name, age, experience, salary, rating, status) {}

	void AddUI_templayte(string UI_template);
	void AddUX_templayte(string UX_template);
	void AddFigmaWork(string figmaWork);
};