#pragma once

#include <iostream>
#include <fstream>
#include <random>
#include <SFML/Network.hpp>

using namespace std;

class advisory {

public:
	string id;
	string nextTask;
	int points;

	int easyChallengesCompleted;
	int mediumChallengesCompleted;
	int hardChallengesCompleted;

	void getTask();
};
