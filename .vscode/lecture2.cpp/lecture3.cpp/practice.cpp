#include<iostream>
using namespace std;
int main () {
	int n, row, i;
	cin>>n;
	row=1;
	while(row<=n){
		i=1;
		while(i<=n-row){
			cout<<" ";
			i++;
		}
		i=1;
       
		while ( i<=row){
			cout<<"*";
            
			i++;
		}
		row++;
		cout<<endl;
		
	}



	return 0;
}
