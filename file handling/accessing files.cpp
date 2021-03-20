#include<iostream>
using namespace std;
int main(){
  
    fstream f;
    f.open("blank",ios::in| ios::out);
//  
//   fstream myfile("blank",ios::in|ios::out|ios::trunc);
   if(!f){
   	cout<<"some error";
   	
   }  
//   myfile<<"hello world";
//   myfile.seekg(6,ios::beg);
   char A[54];
   myfile.read(A,5);
   A[53]=0;
   cout<<A<<endl;
  	
}
