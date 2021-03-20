//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	// structres
 
 struct disc
 {
 	int no;
 	char name[23];
 	int price;
 	
 }d2,d3;
//  struct disc d1={123,"arun disc",458};  in c 
  disc d1={123,"arun disc",458};// in c++
//  disc d2;
  d2=d1;
//  d3=d2;
 d3.no=d2.no;
// d3.name=d2.name;  this is not applicabe in c and c++ both
 d3.price=d2.price;
  strcpy(d2.name,"disc arun");
  strcpy(d3.name,d2.name);
  cout<<" "<<d1.no <<"  "<< d1.name<< " "  <<d1.price <<endl ;
    cout<<" "<<d2.no <<"  "<< d2.name<< " "  <<d2.price <<endl ;
     cout<<" "<<d3.no <<"  "<< d3.name<< " "  <<d3.price ;
  
}
