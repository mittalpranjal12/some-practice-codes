/*  C++ Program to find Square function using single template  */
 
#include <iostream>
using namespace std;
 
template <class T>
inline T square(T x)
{
   T result;
   result = x * x;
   return result;
};
 
 
 
int main()
{
   int    i, ii;
   float  x, xx;
   double y, yy;
 
   std::cout<<"Enter integer value i: ";
   std::cin>>i;
   std::cout<<"Enter float value x: ";
   std::cin>>x;
   std::cout<<"Enter double value y: ";
   std::cin>>y;
   
   ii = square(i);
   cout << "\n Square of "<< i << "is" << ": " << ii << endl;
 
   xx = square(x);
   cout << "\n Square of " << x <<"is" << ": " << xx << endl;
 
   
   yy = square(y);
   cout <<"\n Square of" << y <<"is" << ": " << yy << endl;
 
  
   return 0;
}
