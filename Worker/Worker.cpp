#include "Worker.h"

Worker::Worker()
{
	SetName("None");
	SetAge(20);
	SetExperience(0);
	SetSalary(0);
	SetRating(0);
	SetStatus("None");
}

Worker::Worker(string name, size_t age, size_t exoerience, size_t salary, size_t rating, string status)
{
	SetName(name);
	SetAge(age);
	SetExperience(experience);
	SetSalary(salary);
	SetRating(rating);
	SetStatus(status);
}

string Worker::GetName() const
{
	return name;
}

size_t Worker::GetAge() const
{
	return age;
}

size_t Worker::GetExperience() const
{
	return experience;
}

size_t Worker::GetSalary() const
{
	return salary;
}

size_t Worker::GetRating() const
{
	return rating;
}

string Worker::GetStatus() const
{
	return status;
}

void Worker::SetName(string name)
{
	if (!name.empty())
		this->name = name;
}

void Worker::SetAge(size_t age)
{
	this->age = age;
}

void Worker::SetExperience(size_t experience)
{
	this->experience = experience;
}

void Worker::SetSalary(size_t salary)
{
	this->salary = salary;
}

void Worker::SetRating(size_t rating)
{
	this->rating = rating;
}

void Worker::SetStatus(string status)
{
	if (!status.empty())
		this->status = status;
}

void Worker::print() const
{
	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->age << endl;
	cout << "Experience: " << this->experience << endl;
	cout << "Salary: " << this->salary << endl;
	cout << "Rating: " << this->rating << endl;
	cout << "Status: " << this->status << "\n\n";
}