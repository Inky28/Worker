#include "Designer3D.h"

void Designer3D::AddObject_3d(string object) 
{
	if (!object.empty())
		this->objects.push_back(object);
}