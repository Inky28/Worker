#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Worker
{
protected:
	string name;
	size_t age;
	size_t experience;
	size_t salary;
	size_t rating;
	string status;

public:
	Worker();
	Worker(string name, size_t age, size_t experience, size_t salary, size_t rating, string status);
	string GetName() const;
	size_t GetAge() const;
	size_t GetExperience() const;
	size_t GetSalary() const;
	size_t GetRating() const;
	string GetStatus() const;
	void SetName(string name);
	void SetAge(size_t age);
	void SetExperience(size_t experience);
	void SetSalary(size_t salary);
	void SetRating(size_t rating);
	void SetStatus(string status);
	void virtual print() const;
};