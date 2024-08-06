// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//   int a=0,b=1,i,c,n,j;    
//     cout<<"Enter the limit: ";    
//     cin>>n; 
       
//     for(i=1; i<=n; i++)    
//     {    
            
//         cout<<b<<"\t";   
//         for(j=1; j<i; j++)    
//         {   
//           c=a+b;   
                
//           cout<<c<<"\t";    
//             a=b;    
//             b=c;  
//         }    
//         cout<<"\n";    
//     }    
// return 0;  
// }  
#include <iostream>

using namespace std;

int main ()
{
  int num1 = 0, num2 = 1, totalElements, nextNum;
  cin>>totalElements;
  num1 = 0;
  num2 = 1;
      cout << "***************** Fibonacci triangle *************" << endl;
  for (int i = 0; i <= totalElements; i++)
    {
      for (int j = 0; j < i; j++)
  {
    nextNum = num1 + num2;
    cout << " " << num2;
    num1 = num2;
    num2 = nextNum;
  } 
  cout << endl;
    } 
    return 0;
}