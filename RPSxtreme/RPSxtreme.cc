#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;

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

void theCarnage(ifstream fin, int radicality)
{
return;
}

int changeDifficulty(int radicality)
{
	cout << "Really can't beat the computer? Wonderful job" << endl <<
		"proving 50 years of nerds at keyboards can stunt" << endl <<
		"7000 years of evolution" << endl << "Select a new difficulty: ";
	cin >> radicality;

	return radicality;
}
void mainMenu()
{

cout << "Rock Paper scissors xtreme"<< endl <<
"1) Begin the carnage" << endl <<
"2) Gimp the computer (because you probably suck)" << endl <<
"3) Cry home to mommy" << endl;
}

int main(int argc, char * argv[])
{
	srand(time(NULL));
	int choice;
	int radicality;
	ifstream fin;
	
	fin.open("NPC.csv")

	mainMenu();
	while (choice !=3)
	{
	cin >> choice;
	switch(choice)
		case 1:
		theCarnage(fin, radicality);
		break;
		case 2:
		radicality = changeDifficulty(radicality);
		break;
		case 3:
		cout << "Don't forget your pacifier on the way out";
		return 0;
		default:
		cout << "Nice job fuckwit, maybe you should learn how" <<
			"to count to 3 first";
	}
}

