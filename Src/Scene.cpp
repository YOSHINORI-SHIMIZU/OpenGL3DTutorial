/*
	@file Scene.cpp
*/
#include "Scene.h"
#include <iostream>

/*
	�R���X�g���N�^.

	@param name �V�[����.
*/
Scene::Scene(const char* name) : name(name)
{

}

/*
	�f�X�g���N�^.
*/
Scene::~Scene()
{
	Finalize();
}