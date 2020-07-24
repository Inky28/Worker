#pragma once
#include "Worker.h"

class Designer : public Worker
{
protected:
	string linkPorfolio;
	size_t countWorks;
public:
	Designer() : Worker()
	{
		linkPorfolio = "None";
		countWorks = 0;
	}
	Designer(string linkPorfolio, size_t countWorks, string name, size_t age, size_t experience, size_t salary, size_t rating, string status) :
		Worker(name, age, experience, salary, rating, status)
	{
		SetLinkPorfolio(linkPorfolio);
		SetCountWorks(countWorks);
	}
	string GetLinkPorfolio() const;
	size_t GetCountWorks() const;
	void SetLinkPorfolio(string linkPorfolio);
	void SetCountWorks(size_t countWorks);
};