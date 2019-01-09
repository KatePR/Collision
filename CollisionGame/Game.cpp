#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	char name[20];
	cout << "Eyelids heavy and your body aching, you attempt to lift your head off of the cold, metal floor.\n";
	cout << "Your body feels as though you have a massive weight keeping you down.\n";
	cout << "You make a pathetic attempt at lifting your left arm to feel your head.\n";
	cout << "A few inches was all you could muster before your hand smacked back to the cold, dusty surface underneath you, the metal emitting a sound.\n";
	cout << "You were not sure what to do at the moment, so you laid there, trying to think, of anything.\n";
	cout << "Everything was so hazy and the only thing you could think of at the moment was-\n";
	cout << "'What is my name?'\n";
	cout << "Enter characters name: ";
	cin.getline(name, 20);

	cout << "...\n";
	cout << "But.....was that your name?\n";
	cout << name << ".....\n";
	cout << "What happened to you?\n";
	cout << "What happened here?\n";
	cout << "You look around to the best of your ability, which isn't much considering that it hurts to move anything.\n";
	cout << "With a painful grunt, you give up.\n";

	int paths;
	cout << "You ask yourself what you should do.\n" << endl;
	cout << "1. Use your senses to observe your situation.\n";
	cout << "2. Try again to get up.\n";
retry:
	cout << "Enter your choice: \n";

	cin >> paths;
	if (paths == 1)
	{
		cout << "Dust and debris stung at your eyes as you rolled them to try and see where you were.\n";
		cout << "You dig your fingers lightly into the floor, feeling cold metal and scratching the surface with your finger nails.\n";
		cout << "You smell the air and immediately gag as you suck in a wiff of some kind of pungent scent through your nostrils.\n";
		cout << "What was that? Some kind of chemical?\n";
		cout << "Where are you? A lab?\n";
		cout << "What were you doing in a lab?";
		cout << "No, no, no, that's not right. You're here for a reason.\n";
		cout << "Right now, you do not care to try and remember. You'll come back to that thought later.\n";

		_getch(); //keeps console up and running after choice is selected and ran.
	}
	else if (paths == 2)
	{
		cout << "Your bones ache and you feel as though your entire body is about to break.\n";
		cout << "You feel as fragile as glass.\n";
		cout << "You know you have to get up, but your body tells you otherwise.\n";
		cout << "You take a deep breath, the air piercing your throat like one thousand tiny needles.\n";
		cout << "You thrust your body upwards with great force, your back cracking loudly.\n";
		cout << "You regret your decision as your back aches.";
		_getch();
	}
	else
	{
		cout << "You know that you have to do something. Now is not the time to do nothing. You think again about what you should do.\n";
		goto retry;
	}

	cout << "Press ENTER to continue.";
	cout << endl; //add space
				  //cases depending on choice chosen.
	switch (paths0)
	{
	case 1: cout << "Something 1.\n";
		_getch();
		break;
	case 2: cout << "Something 2.\n";
		_getch();
		break;
	}
}