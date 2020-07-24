#include "Admin.h"

void Admin::AddToDo(string toDo)
{
	toDos.push_back(toDo);
}

string& Admin::operator[](size_t index)
{
	return toDos[index];
}