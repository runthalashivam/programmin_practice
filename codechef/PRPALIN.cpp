#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>

int check_prime(long);
int check_palindrome(long n);

int main()
{
  long n;
  cin >> n;
  if(n % 2 == 0)
	n++;
  while(true)
  {
	if( check_prime(n) && check_palindrome(n))
	{
		cout << n <<endl;
		break;
	}
	n = n+2;
  }
  return 0;
}

int check_prime(long n)
{
  if(n%2 == 0)
	return 0;
  int z = sqrt(n);
  for(int i=3; i<z; i+=2)
  {
	if(n % i == 0)
		return 0;
  }
  return 1;
}

int check_palindrome(long n)
{
  long x = n, sum = 0, d;
  while(n != 0)
  {
	d = n%10;
	sum = sum*10 +d;
	n = n/10;	
  }
  if( sum == x)
	return 1;
  else
	return 0;
}
