#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;

//structs


//functions
/*
i) num=[6,7,3,4,1,9,8,5]
---- [6,7,3,4,1,9,8,5]
---- [3,6,7,4,1,9,8,5]
---- [3,4,6,7,1,9,8,5]
---- [1,3,4,6,7,9,8,5]
*/
void insertionSort(int arr[], int size){ //part iii
	int temp, i, j;
	for(i=1;i<size;i++){
		for(j=i;j>0;j--){
			if(arr[j-1]>arr[j]){
				//then swap
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
}

int main(){ //testing
	int arr[8]={6,7,3,4,1,9,8,5};
	insertionSort(arr,8);
	for(int i=0;i<8;i++) cout<<arr[i]<<' ';
	return 0;
}