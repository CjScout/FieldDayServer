#include "Headers.h"

random_device rd;
int randValue;

void advisory::getTask()
{
	if (forcedNextTask == "")
	{
		randValue = rd() % 3;
		cout << randValue;

		if (randValue == 1)
		{	
			randValue = rd() % 20;
			
			if (randValue == 1)
			{
				nextTask = "Everyone do 5 jumping jacks"
			}
			
			if (randValue == 2)
			{
				nextTask = "Everyone do 5 jumping jacks"
			}
			
			if (randValue == 3)
			{
				nextTask = "Everyone do 5 jumping jacks"
			}
			
			if (randValue == 4)
			{
				nextTask = "Everyone do 5 jumping jacks"
			}
			
			if (randValue == 5)
			{
				nextTask = "Everyone do 5 jumping jacks"
			}
		}

		if (randValue == 2)
		{
			randValue = rd() % 20;
			
			if (randValue == 1)
			{
				nextTask = "Everyone do 10 jumping jacks"
			}
			
			if (randValue == 2)
			{
				nextTask = "Everyone do 10 jumping jacks"
			}
			
			if (randValue == 3)
			{
				nextTask = "Everyone do 10 jumping jacks"
			}
			
			if (randValue == 4)
			{
				nextTask = "Everyone do 10 jumping jacks"
			}
			
			if (randValue == 5)
			{
				nextTask = "Everyone do 10 jumping jacks"
			}
		}

		if (randValue == 3)
		{
			randValue = rd() % 20;
			
			if (randValue == 1)
			{
				nextTask = "Everyone do 15 jumping jacks"
			}
			
			if (randValue == 2)
			{
				nextTask = "Everyone do 15 jumping jacks"
			}
			
			if (randValue == 3)
			{
				nextTask = "Everyone do 15 jumping jacks"
			}
			
			if (randValue == 4)
			{
				nextTask = "Everyone do 15 jumping jacks"
			}
			
			if (randValue == 5)
			{
				nextTask = "Everyone do 15 jumping jacks"
			}
		}
	}
	else
	{
		if (foredNextTask == "Hard")
		{
			randValue = rd() % 20;
			
			if (randValue == 1)
			{
				nextTask = "Everyone do 5 jumping jacks"
			}
		}
		
		if (forcedNextTask == "Medium")
		{
			randValue = rd() % 20;
			
			if (randValue == 1)
			{
				nextTask = "Everyone do 10 jumping jacks"
			}
		}
		
		if (forcedNextTask == "Easy")
		{
			randValue = rd() % 20;
			
			if (randValue == 1)
			{
				nextTask = "Everyone do 15 jumping jacks"
			}
		}
	}
}
