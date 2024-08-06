#include <iostream>
#include <climits>
#include<cstring>
using namespace std;
// blueprint
class car {
   public:
   char name [100];
   int price ;
   int model ; 
    int seats;
   //  function
   void print(){
      cout <<"name"<<name<<endl;
cout<<"price"<<price<<endl;
cout<<"model"<<model <<endl;
cout<<"seat"<<seats<<endl;
   }
   // WE HAVE 4  functions  in class
   
   // 1 constructer
   // 2 copy constructer 
   // 3 copy assignment operator
   // 4 destructer 
};
int main(){
   car C;// C IS AN  object of class car
   strcpy(C.name , "BMW");
   C.price = 100;
   C.model= 2020;
   C.seats= 4;
   C.print();


   
   return 0;
}