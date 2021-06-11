#include <iostream>

using namespace std;

int main()
{
  int min, max;
  cout << "Intervallum eleje: ";
  cin >> min;
  cout << "Intervallum vege: ";
  cin >> max;
  int f1 = 0, f2 = 1, f3 = f1 + f2;
  while(f3 <= max)
  {
    if(min <= f3) cout << f3 << " ";
    f1 = f2;
    f2 = f3;
    f3 = f1 + f2;
  }
  cout << endl;
  return 0;
}
