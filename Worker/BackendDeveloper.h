#pragma once

#include "Developer.h"

class BackendDeveloper : public Developer
{
protected:
	vector<string> languages;
	vector<string> customers;
	string linkProjects;

public:
	BackendDeveloper() : Developer()
	{
		linkProjects = "None";
	}
	BackendDeveloper(string linkProjects, size_t countWorks, string gitHubLink, string name, size_t age, size_t experience, size_t salary, size_t rating, string status) : 
		Developer(countWorks, gitHubLink, name, age, experience, salary, rating, status)
	{
		SetLinkProjects(linkProjects);
	}
	BackendDeveloper(string linkProjects)
	{
		SetLinkProjects(linkProjects);
	}

	string GetLinkProjects() const;
	void SetLinkProjects(string linkProjects);
	void AddLannguage(string language);
	void AddCustomer(string customer);
};