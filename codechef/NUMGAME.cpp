// Yet Another Number Game - NUMGAME

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int t;  // No. of test cases
  long n,i,j;
  long factors[100000];
  cin >> t;
  for(i=0; i<t; i++)
  {
	cin >> n;
	int k=0, bob=0, alice=0;
	for(j=1; j<n; j++)
	{
		if(n/j == 0)
		{
			factors[k] = j;
			k++;
		}
	}
	alice++;
	int turn=0;  //turn=odd -> bob; turn=even -> alice  
	while(n > 1)
	{
		turn++;	
		n = n - factors[k-1];
		k--;		
	}	
	(turn%2 == 0) ? (cout << "ALICE") : (cout << "BOB");
	cout << endl;
  }
  return 0;
}
