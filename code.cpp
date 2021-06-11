#include <iostream>

using namespace std;

int fibonacci(int tag)
{
  if(tag < 2)
  {
    return tag;
  }
  else
  {
    return fibonacci(tag - 1) + fibonacci(tag - 2);
  }
}

int main()
{
  cout << "A Fibonacci sorozat 7. tagja: " << fibonacci(7) << "\n";
  return 0;
}
