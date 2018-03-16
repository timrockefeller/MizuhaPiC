#include "stdafx.h"
#include "Scene.h"
using namespace Mizuha;

Scene::Scene()
{
}


Scene::~Scene()
{
}

void Scene::appendChild(Object s)
{
	this->ChildObjects.push_back(&s);
}
