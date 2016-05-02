#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;
using std::iterator;

int main()
{
  int t, n, m;
  cin >> t;
  for(int i=0; i<t; i++)
  {
	cin >> n;
	cin >> m;
	int x = m;
	vector<int> cook, assistant;
	bool jobs[n+1] = {false};
	while(m != 0)
	{
		int a;
		cin >> a;
		jobs[a] = true;
		m--;
	}
	int turn =0;
	for(int j=1; j<=n; j++)
	{
		if(jobs[j] == 0)
		{
			if(turn % 2 == 0)
				cook.push_back(j);
			else
				assistant.push_back(j);
			turn ++;
		}
	}
	for(vector<int>::iterator it = cook.begin(); it != cook.end(); ++it)
	{
		cout << *it << " ";
	}	
	cout << endl;
	if(n-x == 1)
		cout << endl;
	else
	{
		for(vector<int>::iterator it = assistant.begin();it != assistant.end(); ++it)			cout << *it << " ";			
	}	
	cout << endl;
  }
}

