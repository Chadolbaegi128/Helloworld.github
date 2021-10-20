#pragma once
#include <iostream>
#include <string>
#include "animalfarm.h"

using namespace std;

class Pig :public Animal {
public:
	Pig() :
		Animal("20182313", 0.0f, 0, "") {}

	Pig(string management, float weight, int age, string gender) :
		Animal(management, weight, age, gender) {}
};
