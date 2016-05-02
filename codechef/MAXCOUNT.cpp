#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int check(int *, int b[][2], int, int);
int get_max_count(int b[][2], int);

int main()
{
  int t, n;
  cin >> t;
  for(int i=0; i<t; i++)
  {
	cin >> n;
	int a[n], b[n][2];
	for(int j=0; j<n; j++)
		cin >> a[j];
	for(int j=0; j<n; j++)
	{
		b[j][0] = -1;
		b[j][1] = -1;
	}
	int m = 0;
	for(int j=0; j<n; j++)
	{
		int pos = check(a, b, n, a[j]);
		if( pos != -1)
		{
			b[pos][1]++; 
		}
		else
		{
			b[m][0] = a[j];
			b[m][1] = 1;
			m++;
		}
	}
	int max_count = get_max_count(b, m);
	int max[n], max_array_pos = 0;
	for(int i=0; i<m; i++)
	{
		if(b[i][1] == max_count)
		{
			max[max_array_pos] = b[i][0];
			max_array_pos++;
		}							
	}
	int smallest = max[0];
	for(int i=1; i<max_array_pos; i++)
	{
		if(max[i] < smallest)
			smallest = max[i];
	}
	for(int i=0; i<m; i++)
	{
		if(b[i][0] == smallest)
		{
			cout << b[i][0] << " " << b[i][1] << endl;
		}
	}
  }
  return 0;
}

int check(int *a, int b[][2], int n, int x)
{
  for(int i=0; i<n; i++)
  {
 	if(b[i][0] == x)
		return i;	
  }		
  return -1;
}

int get_max_count(int b[][2], int n)
{
  int max=b[0][1];
  for(int i=1; i<n; i++)
  {	
	if(b[i][1] > max)
	{
		max = b[i][1];
	}
  }
  return max;
}
