#include<iostream>
using namespace std;
int main() {
	int N1,N2;
	cin>>N1;
	cin>>N2;
	int i=1;
	while(N1!=0){
		if((3*i+2)%N2!=0){
			cout<<(3*i+2)<<endl;
			N1--;
		}
		i++;
	}
	return 0;
}