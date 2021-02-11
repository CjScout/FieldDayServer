#pragma once

#include <string>
#include <iostream>

using namespace std;

class advisory {

public:
	string id;
	string forcedNextTask;
	string nextTask;
	int points;

	int easyChallengesCompleted;
	int mediumChallengesCompleted;
	int hardChallengesCompleted;

	void getTask();
};
