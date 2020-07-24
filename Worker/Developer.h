#pragma once

#include "Worker.h"

class Developer : public Worker
{
protected:
	vector<string> technologies;
	size_t countWorks;
	string gitHubLink;
public:
	Developer() : Worker()
	{
		countWorks = 0;
		gitHubLink = "empty";
	}
	Developer(size_t countWorks, string gitHubLink, string name, size_t age, size_t experience, size_t salary, size_t rating, string status) :
		Worker(name, age, experience, salary, rating, status)
	{
		SetCountWorks(countWorks);
		SetGitHubLink(gitHubLink);
	}
	size_t GetCountWorks() const;
	string GetGitHubLink() const;
	void SetCountWorks(size_t countWorks);
	void SetGitHubLink(string gitHubLink);
	void AddTechnology(string technologies);
	string& operator[](size_t index);
};