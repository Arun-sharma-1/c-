#include<iostream>
using namespace std;
int l,b;
class Area{
     int length,breadth;
    public:
     Area constructor(int l, int b){
           length=l;
           breadth=b;
          
     }
     void getDim(int l,int b)
     {
          cout<<"enter length of the rectangle";
          cin>>length;
          cout<<"enter breadth of the rectangle";
          cin>>breadth;
     }
     void getArea(){
          int A=length*breadth;
          cout<<A;
     }
};
int main(){
     
       
  
  
}

