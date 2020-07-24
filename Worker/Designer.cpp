#include "Designer.h"

string Designer::GetLinkPorfolio() const 
{
	return linkPorfolio;
}

size_t Designer::GetCountWorks() const 
{
	return countWorks;
}

void Designer::SetLinkPorfolio(string linkPorfolio) 
{
	if (!linkPorfolio.empty())
		this->linkPorfolio = linkPorfolio;
}

void Designer::SetCountWorks(size_t countWorks) 
{
	this->countWorks = countWorks;
}