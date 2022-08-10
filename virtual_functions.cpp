// Online C++ compiler to run C++ program online
#include <iostream>  
using namespace std;  
class Animal {  
    public:  
   virtual void function(){    
cout<<"Eating..."<<endl;    
    }      
};   
class Man: public Animal    
{    
 public:  
 void function()    
    {    
       cout<<"Walking ..."<<endl;    
    }    
};  
int main(void) {  
    
    Animal *p[2];
    p[0] = new Animal();
    p[1] = new Man();
    p[0]->function();
    
    p[1]->function();
    // to access parent method
    p[1]->Animal::function();
    
    // Below works without virtual function
//  Animal A =
//   A.function();   //parent class object 
// //   Man m = Man();    
//   m.function();   // child class object
   
   return 0;  
}
