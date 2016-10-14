#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const string usage =  "PRIME CALCULATIONS\nRUN STUPIDLY  LARGE NUMBERS AT YOUR OWN RISK!\nUsage\nprimes [number] \n Where [number] is an integer\nProgram to calculate all prime numbers from zero up to specified [number]\n";

bool isPrime(int number)
{
if (number <= 1)
	return false;
else if (number == 2)
	return true;
else if (number % 2 == 0)
	return false;

for (int k = 3; k <= sqrt(number); k+=2)
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

for (int i = 1; i < atoi(argv[1]); i++)
	if (isPrime(i))
		cout << i << " is prime"<< endl;

return 0;

}
