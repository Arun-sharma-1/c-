#include<iostream> 

using namespace std; 
class Base1 { 
public: 
	Base1() 
	{ cout << " Base1's constructor called" << endl; } 
}; 

class Base2 { 
public: 
	Base2() 
	{ cout << "Base2's constructor called" << endl; } 
}; 

class Derived: public Base1, public Base2 { 
public: 
	Derived() 
	{ cout << "Derived's constructor called" << endl; } 
}; 

int main() 
{ 
Derived d; 
return 0; 
} 
In case of Multiple Inheritance, constructors of base classes are always called in derivation order from left to right
 and Destructors are called in reverse order.

#include<iostream> 
using namespace std; 

class base { 
	int arr[10];	 
}; 

class b1: public base { }; 

class b2: public base { }; 

class derived: public b1, public b2 {}; 

int main(void) 
{ 
cout<<sizeof(derived); 
getchar(); 
return 0; 
} 
 If integer takes 4 bytes, then 80.
 
  In C++, the "is_array();" is used for checking that the specified element or data item belongs to the array type or
   not
    in c++ rank is used to find the dimension of array
     cout<<rank<int[10]>::value; // Case A  
    cout<<rank<char[10][10]>::value;   // Case B  
    cout<<rank<string[10][10][10]>::value; //Case C  output-->123
    
    int **arr = new int*[10];
     To declare an array of integers' pointer, here we need to use the double-pointer array where every element
      is set of the pointer to the integers
      
      
      In a C++ program a class has no name"?

It is not even allowed in C++
It will not have the Constructor  // 
It will not have the destructor
Both B and C

The composition is referred to as the concept of using objects of a specific class into several other classes.
