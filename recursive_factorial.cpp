#include <iostream>
using namespace std;

int factorial( int x)
{
  if (x <=0)
  return 1;

  return x * factorial(x-1);
}

int main()
{
 int thing = 0;

 cout << "Possibilities: ";
 cint >> thing;

 cout << "result " << factorial(thing);

 return 0;
}
