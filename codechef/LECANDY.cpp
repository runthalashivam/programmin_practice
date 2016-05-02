#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  int t,n;
  long c;
  cin >> t;
  for(int i=0; i<t; i++)
  {
	cin >> n;
	cin >> c;
 	int a[n];
	long total=0;
	for(int j=0; j<n; j++)
	{
		cin >> a[j];
		total += a[j];
	}
	if(total > c)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
  }
  return 0;
}
