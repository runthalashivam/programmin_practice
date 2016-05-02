#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
  int n;
  cin >> n;
  string word;
  int hole[40];
  for(int i=0; i<n; i++)
  {
	cin >> word;
	hole[i]=0;	
	for(int j=0; j<word.length(); j++)
	{
		if( word[j]=='A' || word[j]=='D' || word[j]=='O' || word[j]=='P' 			|| word[j]=='Q' || word[j]=='R' )
		{
			hole[i]++;
		}
		if(word[j]=='B')
			hole[i] += 2;
	}
  }
  for(int i=0; i<n; i++)
	cout << hole[i] << endl;
}
