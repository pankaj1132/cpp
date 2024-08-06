#include <iostream>
#include<algorithm>
using namespace std;
bool comp(int a, int b){
   return a>b
;}

int main() {
    
   int n;
   cin>>n;

   int a[100];
   for(int i=0;i<n;i++){
       cin >> a[i];
		 sort(a,a+n,comp);
		
   } 

   int N;
   cin>>N;

   int flag =0;

   for(int i=0;i<n;i++){
       if(a[i]!=N){
           flag =0;
       }
       else{
           flag = 1;
           cout << i << " ";
           while(a[i]==N){
               i++;
           }
           cout << i-1 ;
           break;
       }
   }

   if(flag==0){
       cout << "-1  -1" << endl;
   }
    
    return 0;
}