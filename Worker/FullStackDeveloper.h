#pragma once
#include "FrontendDeveloper.h"
#include "BackendDeveloper.h"
#include "Developer.h"

class FullStackDeveloper : public Developer, BackendDeveloper, FrontendDeveloper
{
public:
	FullStackDeveloper(string linkProjects, string linkPortfolio, size_t countWorks, string gitHubLink, string name, size_t age, size_t experience, size_t salary, size_t rating, string status) :
		FrontendDeveloper(linkPortfolio), BackendDeveloper(linkProjects), Developer(countWorks, gitHubLink, name, age, experience, salary, rating, status) {}
};