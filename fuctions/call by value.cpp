#include<iostream>
using namespace std;
// call by value 
void incre(int a){ // formal argument
	a++;
	cout<<a<<endl;
} 
//the value of a has been incresed but the value of x is same 
// actual and formal argument have different memory location
int main(){
	int x=3;
	incre(x); // actual argument
	cout<<x;
}
