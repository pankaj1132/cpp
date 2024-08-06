#include<iostream>
using namespace std;


int main () {
	int n,no, i, j;
	 no=1;
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			cout<<no;
			no++;
		}cout<<endl;
	}
	return 0;
}