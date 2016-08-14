#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

/* 
 * Constant string, here if you need to change the name of
 * the input file
 */
const string INPUT_FILE_NAME = "NPC.csv";

/* 
 * The game of the gods
 */
enum game {scissor, paper, rock};

/* 
 * Le there are as many genders
 * as there are stolen projects
 * on gitHub
 */
enum gender {Female, Male};

/*
 * Wouldn't it be simpler if we as people
 * were so easily defined?
 */
struct character
{
	string name;
	int age;
	string characterGender;
	string job;
	int morality;
	int brutishness;
	int mercantileAbility;
	int craftingAbility;
	int cleverness;
	int lawfulness;
};

/*
 * Function that reads in our *.csv
 * file and populates our vector of
 * characters, returns true if the process
 * succeeded or false if we failed
 */
bool populateList( vector<character> &list)
{
	//Create temp containers for our character
	character temp;
	string age;
	string morality;
	string brutishness;
	string mercantile;
	string crafting;
	string cleverness;
	string lawfulness;

	//Then open our file
	ifstream fin(INPUT_FILE_NAME.c_str());

	//Make sure our file is open for safety
        if (!fin)
	{
        cout << "File failed to open"<< endl;
	return false;
	}
	
	//First line needs to get thrown, doesn't contain
	//what we want
	getline(fin, temp.name);
	
	//Make sure we know we're in the process of getting
	//our list
	cout << "Hol up, gettin the squad tight..." << endl;
	
	//*.csv file wizzardry
	
	while(getline(fin, temp.name, ','))
	{
	getline(fin, age, ',');
	getline(fin, temp.characterGender, ',');
	getline(fin, temp.job, ',');
	getline(fin, morality, ',');
	getline(fin, brutishness, ',');
	getline(fin, mercantile, ',');
	getline(fin, crafting, ',');
	getline(fin, cleverness, ',');
	getline(fin, lawfulness, ',');

	temp.age = stoi(age);
	temp.morality = stoi(morality);
	temp.brutishness = stoi(brutishness);
	temp.mercantileAbility = stoi(mercantile);
	temp.craftingAbility = stoi(crafting);
	temp.cleverness = stoi(cleverness);
	temp.lawfulness = stoi(lawfulness);

	list.push_back(temp);
	}
	//*/
	
return true;
}

/*
 *  * Boys and Girls may enter,
 *   * but only Men and Women return
 *    *
 *     * Main function that handles the game processes
 *      */
void theCarnage(int radicality)
{
        vector<character> contestants;
	
        populateList(contestants);

	vector<character>::iterator it = contestants.begin();

return;
}


/*
 * Little function that handles difficulty changes
 * probably just going to comment this out for now
 * but if this thing gets stupidly popular
 * would implement later
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
*/

/*
 * To keep excessive couts from happening in main(),
 * we'll go ahead and just put the main menu as a
 * function to call when we need it
 */
void mainMenu()
{

cout << "Rock Paper scissors xtreme"<< endl <<
	"1) Begin the carnage" << endl <<
//	"2) Gimp the computer (because you probably suck)" << endl <<
	"2) Give up?" << endl;
	return;
}
/*
 * Main function, handles menu switch and
 * directs flow to where user specifies.
 */
int main()
{
	srand(time(NULL));
	int choice = 0;
	int radicality = 1;

	mainMenu();
	while (choice !=3)
	{
	cin >> choice;

	switch(choice)
		{
			case 1:
			theCarnage(radicality);
			break;
			/*
			 * Commenting out for now
			case '2':
			radicality = changeDifficulty(radicality);
			break;
			*/
			case 2:
			cout << "Don't forget your pacifier on the way out";
			return 0;
			break;
			default:
			cout << "Nice job fuckwit, maybe you should learn how" << endl
			<< "to count to 3 first";
		}
	}

	return 0;
}

