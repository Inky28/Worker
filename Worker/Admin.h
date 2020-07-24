#pragma once

#include "Worker.h"

class Admin : public Worker
{
private:
	vector<string> toDos;
public:
	void AddToDo(string toDo);
	string& operator [] (size_t index);
};