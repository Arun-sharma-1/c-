  #include<iostream>
 #include<stdio.h>
 using namespace std;
 int main(){
      int a[10]={1,2,0,8,0,5};
      // output-->1,0,2,0,8,0,5 
       for(int i=0; i<=a[i]; i++){
 
		if(a[i+1]>0){
                 int temp=a[i+1];// temp=2
                 a[i+1]=a[i+2];// a[i+1]=0
                 a[i+2]=temp;// a[i+2]=2
            } -+
            
            // 1028050
           if (a[i+3]>0&&a[i+4]==0)
           {
              
            	int temp1=a[i+3];
            	a[i+3]=a[i+4];
            	a[i+4]=temp1;
            }
            //1020850
            if(a[i+5]>0&&a[i+6==0])
            {
                 int temp2=a[i+5];
                 a[i+5]=a[i+6];
            	  a[i+6]=temp2;
            }
       
      
    

      for(int i=0;  i<7; i++)
    cout<<a[i];
 
}
}
