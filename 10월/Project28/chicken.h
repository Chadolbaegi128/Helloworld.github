#pragma once
#include <iostream>
#include <string>
#include "animalfarm.h"

using namespace std;

class Chicken:public Animal{
public:
	Chicken():
	Animal("20182313",0.0f,0,"") {}

	Chicken(string management, float weight, int age, string gender):
		Animal(management,weight,age,gender){}

};
