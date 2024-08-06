#include <iostream>
using namespace std;
int main()
{
	int n,
	i, j, no;
	cin>> n;
	for (i = 1; i <= n; i++)
	{
		no = 1;
		for (j = 1; j <= i; j++)
		{
			cout << no;
			no++;
		}
		for(j=1;j<=n-i;j++){
			cout<<"*";
		}cout<<endl;
		
		
	}
	return 0;
}