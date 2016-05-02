#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int check_occurrence(char, char *, int);
void count_occurrences(char *, int *, char, int);

int main()
{
  int t;
  char str[300];
  cin >> t;
  for(int i=0; i<t; i++)
  {
	cin >> str;
	char occurred[300];
	int occ_pos=0;	
	int count[300];
	int count_pos = 0;
	int total = 0;
	for(int j=0; str[j]!= '\0'; j++)
	{
		int f = check_occurrence(str[j], occurred, occ_pos);
		if( f == 1)
			continue;
		occurred[occ_pos] = str[j];
		occ_pos++;
		count_occurrences(str, count, str[j], count_pos);	
		count_pos++;
	}
	for(int j=0; j<count_pos; j++)
	{
		if(count[j] % 2 == 0)
		{
			total += (count[j]/2);
		}
		else
			total += ((count[j]/2) + 1);
	}
	cout << total << endl;	
  }

}

int check_occurrence(char x, char *occ, int occ_pos)
{
	for(int i=0; i<occ_pos; i++)
	{
		if(occ[i] == x)
			return 1;
	}
  return 0;
}

void count_occurrences(char *str, int *count, char x, int count_pos)
{
  count[count_pos]=0;
  for(int i=0; str[i] != '\0'; i++)
  {
	if(str[i] == x)
		count[count_pos]++;	
  }
}
