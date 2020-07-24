#pragma once
#include "Worker.h"
#include "Developer.h"

class FrontendDeveloper : public Developer
{
protected:
	vector<string> frameworks;
	string linkPortfolio;

public:
	FrontendDeveloper() : Developer()
	{
		this->linkPortfolio = "None";
	}
	FrontendDeveloper(string linkPortfolio, size_t countWorks, string gitHubLink, string name, size_t age, size_t experience, size_t salary, size_t rating, string status) :
		Developer(countWorks, gitHubLink, name, age, experience, salary, rating, status)
	{
		SetLinkPortfolio(linkPortfolio);
	}

	FrontendDeveloper(string linkPortfolio)
	{
		SetLinkPortfolio(linkPortfolio);
	}
	string GetLinkPortfolio() const;
	void SetLinkPortfolio(string linkPortfolio);
	void AddFramework(string framework);
	string& operator [] (size_t index);
};
