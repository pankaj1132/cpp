#include <iostream>
#include <climits>
#include<cstring>
using namespace std;
// blueprint
class car {
   private:
   int price;
   
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
   // 1 default _Constructer
   car(){
      cout<<"inside constructer"<<endl;
   }
   // 2 parameterized constructer
   car(char * n , int p , int m , int s){
      strcpy(name, n);
      price = p;
      model = m; 
      seats = s;
   }
   // COPY CONTRUCTER   ek  is_object se doosra onject create krne ke liye
   car (car &X){
    cout<<"COPY CONSTRUCTER"<<endl;
      strcpy(name, X.name);
        price = X.price;

      model =X.model;
      seats = X.seats;
   } 
   // COPY ASSIGNMENT OPERATOR ; EK OBJECT JO ALREADY BNA H HUA H USKI
   //  VAUE KO DOOSRE OBJECT M UPDATE KRNA 
   void operator= (car &X){
      cout<<"COPY ASSGINMENT"<<endl;;
      strcpy(name, X. name);
      price =X. price;
      model= X.model;
      seats= X. seats;


   }
   // destructer 
   ~car(){
      cout<<"deleting car"<<name<<endl;

   }
   void setprice(int p){
      if (p>100 and p<200)
      {
         /* code */price= p;
      }
      else {
         price = 150;
      }
      
   }
   int getprice (){
      return price ;
   }
   bool operator >(car X){
      if (price > X. price)
      {
         /* code */
      }
      
   }
};
int main(){
   car C;// C IS AN  object of class car
   strcpy(C.name , "BMW");
   // C.price = 100;
   C.setprice(-100);
   C.model= 2020;
   C.seats= 4;
   C.print();
   car A("maruti", 2333, 2322,6);
   A. print();
   car D(C);
   D=A;// COPY assginmenrt operator
   D.print();


   
   return 0;
}