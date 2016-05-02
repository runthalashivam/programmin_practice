#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_div_by_seven(long );

int main()
{
  int t;
  cin >> t;
  for(int i=0; i<t; i++)
  {
  	int n, k;
	cin >> n  >> k;
	long x[n];
	int count =0;
	for(int j=0; j<n; j++)
	{
		cin >> x[j];
		x[j] += k;
		if( check_div_by_seven(x[j]) )
			count++;		
	}
	cout << count << endl;
	
  }
} 

bool check_div_by_seven(long a)
{
	if( a%7 == 0)
		return true;
	else
		return false;
}
