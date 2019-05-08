/*
	@file Scene.cpp
*/
#include "Scene.h"
#include <iostream>

/*
	コンストラクタ.

	@param name シーン名.
*/
Scene::Scene(const char* name) : name(name)
{

}

/*
	デストラクタ.
*/
Scene::~Scene()
{
	Finalize();
}