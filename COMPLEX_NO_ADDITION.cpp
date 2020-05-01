/*Write a program to perform addition of two complex numbers using constructor overloading. 
The first constructor which takes no arguments is used to create objects which are not initialized. 
Second, which takes one argument is used to initialize real and imaginary parts to equal values and third which takes 
two arguments is used to initialize real and imaginary parts to two different values.*/ 


#include<iostream>
#include<conio.h>

class Complex
{

int real,imag;

public:

   Complex()                         //Default Constructor.
 {
 }

   Complex(int r)                // Parameterised constructor for equal values.
{
   real=r;
   imag=r;
}

   Complex(int r,int i)       // Parameterised constructor for different values.
{
   real=r;
   imag=i;
}

   Complex(const Complex &c)       //Copy Constructor.
{
    real=c.real;
    imag=c.imag;
}

   void print()
{
   std::cout<<"\n The sum of two complex nos. is "<<real<<"+"<<imag<<"i.";
}

   friend Complex sum(Complex,Complex);     //Declaration of friend function.
};

Complex sum(Complex obj1,Complex obj2)
{

 Complex obj3;
 obj3.real=obj1.real+obj2.real;
 obj3.imag=obj1.imag+obj2.imag;

 return obj3;
}

int main()

{
 int a,b,d,e;

 Complex c1;                      //Calling default constructor.

  std::cout<<"\n\t\tPROGAM TO PERFORM ADDITION OF TWO COMPLEX NUMBERS USING CONSTRUCTOR OVERLOADING\t\t\n";
  std::cout<<"\n\t\tFor equal values :\t";

 std::cout<<"\n\tEnter the real and imaginary part of number 1:\n\t";
 std::cin>>a>>b;

 Complex c2(a,b);                //Calling parameterised constructor for equal values.

 std::cout<<"\n\t\tFor different values :\t";

 std::cout<<"\n\tEnter the real and imaginary part of number 2:\n\t";

 std::cin>>d>>e;

 Complex c3(d,e);                         //Calling parameterised constructor for different values.

 Complex c =sum(c2,c3);          //Calling copy constructor.

 c.print();

 return 0;
 }
