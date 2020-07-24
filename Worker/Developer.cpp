#include "Developer.h"
size_t Developer::GetCountWorks() const
{
	return countWorks;
}

string Developer::GetGitHubLink() const
{
	return gitHubLink;
}

void Developer::SetCountWorks(size_t countWorks)
{
	this->countWorks = countWorks;
}

void Developer::SetGitHubLink(string gitHubLink)
{
	if (!gitHubLink.empty())
		this->gitHubLink = gitHubLink;
}

void Developer::AddTechnology(string technology)
{
	if (!technology.empty())
		technologies.push_back(technology);
}

string& Developer::operator[](size_t index)
{
	return technologies[index];
}