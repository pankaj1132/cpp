#include <bits/stdc++.h>

using namespace std;

// function that return maximum occurring character
char getMaxOccurringChar(string str)
{
	// create unordered_map to store frequency of every character
	unordered_map<char,int>mp;
	
	// to store length of string
	int n = str.length();
	
	// to store answer
	char ans;
	
	// to check count of answer character is less or greater
	// than another elements count
	int cnt=0;
	
	// traverse the string
	for(int i=0 ;i<n ; i++){
		// push element into map and increase its frequency
		mp[str[i]]++;
		
		// update answer and count
		if(cnt < mp[str[i]]){
			ans = str[i];
			cnt = mp[str[i]];
		}
	}
	
	return ans;
	
}

// Driver Code
int main()
{
	string str ;
	getline(cin,str);
	cout 
		<< getMaxOccurringChar(str);
}

// this code is contributed by bhardwajji
