#include "FrontendDeveloper.h"

string FrontendDeveloper::GetLinkPortfolio() const 
{
	return this->linkPortfolio;
}

void FrontendDeveloper::SetLinkPortfolio(string linkPortfolio) 
{
	if (!linkPortfolio.empty())
		this->linkPortfolio = linkPortfolio;
}

void FrontendDeveloper::AddFramework(string framework) 
{
	if (!framework.empty())
		frameworks.push_back(framework);
}

string& FrontendDeveloper::operator[](size_t index) 
{
	return frameworks[index];
}