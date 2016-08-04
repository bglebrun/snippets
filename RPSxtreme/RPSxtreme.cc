#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;

const string INPUT_FILE = "NPC.csv";
enum game {scissor, paper, rock};
enum gender {female, male};

struct character
{
	string name;
	int age;
	gender characterGender;
	string job;
	int morality;
	int brutishness;
	int mercantileAbility;
	int craftingAbility;
	int cleverness;
	int lawfulness;
};

void theCarnage(int radicality)
{
	ifstream fin(INPUT_FILE.c_str());
return;
}

int changeDifficulty(int radicality)
{
	cout << "Really can't beat the computer? Wonderful job" << endl <<
		"proving 50 years of nerds at keyboards can stunt" << endl <<
		"7000 years of evolution" << endl << "Select a new difficulty: ";
	cin >> radicality;
	while (radicality < 0 || radicality >3)
		{
			cout << "Try again dumbass" << endl;
			cin >> radicality;
		}
	return radicality;
}

void mainMenu()
{

cout << "Rock Paper scissors xtreme"<< endl <<
	"1) Begin the carnage" << endl <<
	"2) Gimp the computer (because you probably suck)" << endl <<
	"3) Cry home to mommy" << endl;
	return;
}

int main()
{
	srand(time(NULL));
	int choice;
	int radicality;

	mainMenu();
	while (choice !=3)
	{
	cin >> choice;

	switch(choice)
		{
			case '1':
			theCarnage(radicality);
			break;
			case '2':
			radicality = changeDifficulty(radicality);
			break;
			case '3':
			cout << "Don't forget your pacifier on the way out";
			return 0;
			default:
			cout << "Nice job fuckwit, maybe you should learn how" <<
			"to count to 3 first";
		}
	}

	return 0;
}

