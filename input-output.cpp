#include<iostream>
using namespace std;
int main(){
	 
   int n1, n2;
   cout<<"enter n1 and n2"<<endl;
//   endl is used for changing line like \n
// cout is used with insertation operator
   cin>>n1>>n2;
   //   cin is used with extertion operator
   int n=n1+n2;
   cout<<"sum of "<< n1 <<" and "<< n2 << " is "<<endl<< n ;
   
 
  int x;
  x=5;
//  int *P=x; in c language
  int &p=x;
//  p++; increment is done in x not in p 
  cout<<p;
	
}
