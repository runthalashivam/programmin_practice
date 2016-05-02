#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int smallest (int *, int);
int check (int *, int);
int check_racks(int *, int, int);

int main()
{
  int t, n, w_p[40], w_r[40], light_p, light_r;
  cin >> t;
  for(int i=0; i<t; i++)
  {
	int c=0;
	cin >> n;
 	for(int j=0; j<n; j++)
		cin >> w_p[j];
	for(int j=0; j<n; j++)
		cin >> w_r[j];
	int check_w_p = check(w_p,n);
	int check_racks_can_hold;
	while( check_w_p != 0)
	{	
		light_p = smallest(w_p, n);
		check_racks_can_hold = check_racks(w_r, n, w_p[light_p]);
		if( check_racks_can_hold == 0)
			break;
		light_r = smallest(w_r, n);
		if(w_p[light_p] <= w_r[light_r] )
		{
			w_p[light_p] = 999;
			w_r[light_r] = 999;
			c++;
		}	
		else
		{
			w_r[light_r] = 999;
			continue;
		}	
	 	check_w_p = check(w_p, n);
	}
	cout << c << endl;
  }
  return 0; 
}

int smallest( int *a, int n)
{
  int i, small=a[0], pos=0;
  for(i=1; i<n; i++)
  {
	if(a[i] < small)
	{
		small = a[i];	
		pos = i;
	}	
  } 
  return pos;
} 

int check(int *a, int n)
{
  for(int i=0; i<n; i++)
  {
	if( a[i] != 999)
		return 1;
  }
  return 0;
}

int check_racks(int *a, int n, int w_p)
{
  for(int i=0; i<n; i++)
  {
 	if(a[i] >= w_p && a[i] != 999)
		return 1;
  }
  return 0;
}
