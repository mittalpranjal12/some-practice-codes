#include<iostream>
#include<conio.h>

	template<class T>
	class test
	{ 
	private:
			T a, b;
	public:
			test(T x, T y)
			{
				a = x;
				b = y;
			}
			void show()
			{
				if(a > b)
				{
					std::cout<< "Greater is " << a;
				}
				else{
					std::cout<< "Greater is " << b;
				}
			}
	~test()
	{
	}
};
	
int main()
{
	int a, b;
	
	std::cout<<"Enter two numbers to find the biggest: \n" ;
	std::cin>>a>>b;
	
	test<int>T(a,b);
		T.show();
return 0;
}

