// Find greatest of two numbers in two different classes using friend function C++


#include<iostream>

using namespace std;

class B; //declare class B

class A {

private:
    int a;

public:
    //constructor
    A(int a) {
        this->a = a;
    }

    friend int max(A a, B b);
};

class B {

private:
    int b;

public:
    //constructor
    B(int b) {
        this->b = b;
    }

    friend int max(A a, B b);
};

int max(A a, B b) {
    return (a.a > b.b ? a.a : b.b);
}

int main() {
	int m,n;
	std::cout<<"Enter first number: ";
	std::cin>>m;
	std::cout<<"\n Enter second number: ";
    std::cin>>n;
	A a(m);
    B b(n);
    cout << "Greatest is : " << max(a, b);
    return 0;
}
