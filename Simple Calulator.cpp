#include<iostream>
using namespace std;

class Calculator
{ int a;
int b;


   public:  
   double add(double a, double b)
   {   return a+b;
   }
   double diff(double a, double b)

   {   return a-b;
   }
    double multiply(double a, double b)
   {   return a*b;
   }
   double divide(double a, double b)
   {  if(b!=0)
      { return a/b;}
      else{
          cout<<"Error! Division not possible"<<endl;
          return 0;
      }
   }
};
int main()
{ 
   do{ 
    int choice;
double num1, num2;
    Calculator c;
    cout<<"Choose operation:"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>choice;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    
    switch (choice)
    {
        case 1:
      
        cout<<"|"<<num1<<"+"<<num2<<" = "<<c.add(num1,num2)<<"|"<<endl;
     
        break;
        case 2:
     
         cout<<"|"<<num1<<"-"<<num2<<" = "<<c.diff(num1,num2)<<"|"<<endl;
         
         break;
         case 3:
       
          cout<<"|"<<num1<<"*"<<num2<<" = "<<c.multiply(num1,num2)<<"|"<<endl;
        
          break;
          case 4:
          
           cout<<"|"<<num1<<"/"<<num2<<" = "<<c.divide(num1,num2)<<"|"<<endl;
          
           break;
           default:
            cout<<"Invalid choice"<<endl;
            break;
            
    }
   }while(true);
    return 0;
    
}