#include <iostream>
#include <string>

using namespace std;

const string usage =  "PRIME CALCULATIONS\nRUN LARGE NUMBERS AT YOUR OWN RISK!\nUsage\nprimes [number] \n Where [number] is an integer\nProgram to calculate all prime numbers from zero up to specified [number]\n";

bool isPrime(int number)
{
if (number == 1)
	return false;
else if (number == 2)
	return true;

for (int k = 3; k <= (number/2); k++)
	{
		if ((number%k) == 0)
			return false;
	}

return true;
}

int main( int argc, char * argv[])
{

if (argc != 2)
	cout << usage;

for (int i = 0; i < atoi(argv[1]); i++)
	if (isPrime(i))
		cout << i << " is prime"<< endl;

return 0;

}
