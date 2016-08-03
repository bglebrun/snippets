#include <iostream>
using namespace std;

long int factorial( long int x)
{
  if (x <=0)
  return 1;

  return x * factorial(x-1);
}

int main()
{
 long int factor = 0;

 cout << "Possibilities: ";
 cin >> factor;

 cout << "result " << factorial(factor) << endl;

 return 0;
}
