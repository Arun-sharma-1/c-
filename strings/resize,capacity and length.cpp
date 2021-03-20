  #include<iostream>
  #include<string>
using namespace std;
int main(){
	// use of  resize,capacity and length in string
	string str="my name is Arun sharma";
 
    str.resize(10);
    cout<<str<<endl;
    cout<<"capacity is "<<endl<<str.capacity();
    cout<<"length is "<<endl<<str.length();
     str.shrink_to_fit();
    cout<<str;
}
