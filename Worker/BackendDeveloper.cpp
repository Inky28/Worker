#include "BackendDeveloper.h"

string BackendDeveloper::GetLinkProjects() const
{
    return this->linkProjects;
}

void BackendDeveloper::SetLinkProjects(string linkProjects) 
{
    if (!linkProjects.empty())
        this->linkProjects = linkProjects;
}

void BackendDeveloper::AddLannguage(string language) 
{
    if (!language.empty())
        this->languages.push_back(language);
}

void BackendDeveloper::AddCustomer(string customer) 
{
    if (!customer.empty())
        this->customers.push_back(customer);
}
