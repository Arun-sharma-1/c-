#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,2,3,4,0,0,0};
	int tmp[7],zero_cnt = 0, idx=0;
	
	for(int i = 0 ; i < 7 ; i++){
	    if(arr[i]==0){
	        zero_cnt++;
	    }else{
	        tmp[idx++] = arr[i];
	    }
	}
	
	int i = 0;
	idx = 0;
	for(int i = 0 ; i < 7 ; i++){
	    if(i%2==0 || zero_cnt==0){
	        arr[i] = tmp[idx++];
	    }else{
	        arr[i] = 0;
	        zero_cnt--;
	    }
	}
	
	for(int i = 0 ; i < 7 ; i++){
	    cout<<arr[i]<<" ";
	}
	
	
	return 0;
}

