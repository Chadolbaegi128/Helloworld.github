#pragma once
#include <iostream>
#include <string>
#include "animalfarm.h"

using namespace std;

class Cow :public Animal {
public:
	Cow() :
		Animal("20182313", 0.0f, 0, "") {}

	Cow(string management, float weight, int age, string gender) :
		Animal(management, weight, age, gender) {}
};