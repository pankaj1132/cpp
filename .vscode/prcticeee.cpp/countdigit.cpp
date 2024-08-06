#include<iostream>
using namespace std;
int main() {
	int num,count,f,n; //f=frequency
	count=0;
    cin>>num;//this should come outside loop
    cin>>f;//this should come outside loop
	while(num!=0)
	{
		n=num%10;//this should be = instead of ==
		if(n==f){
			count=count+1;
		}
        num=num/10;//this should come outside condn
	}
    cout<<count<<endl;//this should come outside loop

	return 0;
}