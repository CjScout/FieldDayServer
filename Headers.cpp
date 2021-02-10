#include "Headers.h"

random_device rd;
int randValue;

void advisory::getTask()
{
	randValue = rd() % 3;
	cout << randValue;

	if (randValue == 1)
	{	
		if (mediumChallengesCompleted < easyChallengesCompleted and mediumChallengesCompleted < hardChallengesCompleted)
		{
			cout << "Medium task";
			easyChallengesCompleted++;
		}

		if (hardChallengesCompleted < easyChallengesCompleted and hardChallengesCompleted < mediumChallengesCompleted)
		{
			cout << "Hard task";
			easyChallengesCompleted++;
		}

		if (easyChallengesCompleted < mediumChallengesCompleted and easyChallengesCompleted < hardChallengesCompleted)
		{
			cout << "Easy task";
			easyChallengesCompleted++;
		}

		if (easyChallengesCompleted == mediumChallengesCompleted or easyChallengesCompleted == hardChallengesCompleted or hardChallengesCompleted == mediumChallengesCompleted)
		{
			randValue = rd() % 3;
			
			if (randValue == 1)
			{
				easyChallengesCompleted++;
			}

			if (randValue == 1)
			{
				mediumChallengesCompleted++;
			}

			if (randValue == 1)
			{
				hardChallengesCompleted++;
			}
		}
	}

	if (randValue == 2)
	{
		if (easyChallengesCompleted < mediumChallengesCompleted and easyChallengesCompleted < hardChallengesCompleted)
		{
			cout << "Easy task";
			easyChallengesCompleted++;
		}

		if (hardChallengesCompleted < easyChallengesCompleted and hardChallengesCompleted < mediumChallengesCompleted)
		{
			cout << "Hard task";
			easyChallengesCompleted++;
		}

		if (mediumChallengesCompleted < easyChallengesCompleted and mediumChallengesCompleted < hardChallengesCompleted)
		{
			cout << "Medium task";
			easyChallengesCompleted++;
		}

		if (easyChallengesCompleted == mediumChallengesCompleted or easyChallengesCompleted == hardChallengesCompleted or hardChallengesCompleted == mediumChallengesCompleted)
		{
			randValue = rd() % 3;

			if (randValue == 1)
			{
				easyChallengesCompleted++;
			}

			if (randValue == 1)
			{
				mediumChallengesCompleted++;
			}

			if (randValue == 1)
			{
				hardChallengesCompleted++;
			}
		}

	}

	if (randValue == 3)
	{
		if (hardChallengesCompleted < easyChallengesCompleted and hardChallengesCompleted < mediumChallengesCompleted)
		{
			cout << "Hard task";
			easyChallengesCompleted++;
		}

		if (mediumChallengesCompleted < easyChallengesCompleted and mediumChallengesCompleted < hardChallengesCompleted)
		{
			cout << "Medium task";
			easyChallengesCompleted++;
		}

		if (easyChallengesCompleted < mediumChallengesCompleted and easyChallengesCompleted < hardChallengesCompleted)
		{
			cout << "Easy task";
			easyChallengesCompleted++;
		}

		if (easyChallengesCompleted == mediumChallengesCompleted or easyChallengesCompleted == hardChallengesCompleted or hardChallengesCompleted == mediumChallengesCompleted)
		{
			randValue = rd() % 3;

			if (randValue == 1)
			{
				easyChallengesCompleted++;
			}

			if (randValue == 1)
			{
				mediumChallengesCompleted++;
			}

			if (randValue == 1)
			{
				hardChallengesCompleted++;
			}
		}
	}
}