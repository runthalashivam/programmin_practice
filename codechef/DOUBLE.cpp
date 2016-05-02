#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int n;
  long x;
  long result[10000];
  cin >> n;
  for(int i=0; i<n; i++)
  {
 	cin >> x;
 	if(x%2 == 0)
		result[i] = x;
	else
		result[i] = x-1;
  }
  for(int i=0; i<n; i++)
	cout << result[i] << endl;
  return 0;
}
