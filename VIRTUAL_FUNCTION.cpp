#include<iostream>
#include<conio.h>

class LIST
{
	public:
		virtual void store()=0;
		virtual void retrieve()=0;
};

class B:public LIST
{
	public:
		void store()
{
	std::cout<<"function called \n ";
}

void retrieve()
{
	std::cout<<"fuction calling \n";
}
};

int main()
{

B obj;
obj.store();
obj.retrieve();
return 0;
}	
