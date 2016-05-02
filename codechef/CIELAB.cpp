#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int a, b, diff;
  cin >> a;
  cin >> b;
  diff = a-b;
  if( diff % 10 < 9)
	diff = diff + 1;
  else
	diff = diff - 1;
  cout << diff << endl;
  return 0;
}
