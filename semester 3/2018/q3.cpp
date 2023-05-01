#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;

//structs


//functions
/*
i) first 4 passes of insertion sort would be
---- [1,7,3,4,6,9,8,5]
---- [1,3,7,4,6,9,8,5]
---- [1,3,4,7,6,9,8,5]
---- [1,3,4,5,6,9,8,7]
*/
void insertionSort(int arr[], int size){ //part iii
	for(int i=0;i<size-1;i++){
		int low=arr[i], index=i; //arr[i] can be used since the smallest from i to size-1 would be selected regardless
		for(int c=i+1;c<size;c++){
			if(arr[c]<low){
				index=c;
				low=arr[c];
			}
		}
		
		int temp=arr[index];
		arr[index]=arr[i];
		arr[i]=temp;
	}
}

int main(){ //testing
	int arr[8]={6,7,3,4,1,9,8,5};
	insertionSort(arr,8);
	for(int i=0;i<8;i++) cout<<arr[i]<<' ';
	return 0;
}