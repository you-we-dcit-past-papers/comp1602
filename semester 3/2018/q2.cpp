#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;

//structs


//functions
void partI(int arr[5][4]){
	for(int c=0;c<4;c++){ //each column and not each row you see
		for(int r=0;r<5;r++) cout<<arr[r][c]<<' ';
		cout<<endl;
	}
}
void partII(int arr[5][4]){
	int sum=0, c;
	for(c=0;c<4;c++)
		sum+=arr[0][c] + arr[4][c]; //element of first and last row... sums can work like this ;-;
	cout<<sum<<endl;
}
void partIII(int arr[5][4]){
	int sum, index=0, high=-1; //2d array of POSITIVE integers, therefore -1 is a low
	for(int r=0;r<5;r++){
		sum=0;
		for(int c=0;c<4;c++) sum+=arr[r][c];
		if(sum>high){
			high=sum;
			index=r;
		}
	}
	cout<<index<<endl;
}

int main(){ //testing
	int arr[5][4]={
		{1,6,11,16},
		{2,7,12,17},
		{3,8,13,18},
		{4,9,14,19},
		{5,10,15,20}
	};
	partI(arr);
	cout<<endl;
	
	partII(arr);
	cout<<endl;
	
	partIII(arr);
	cout<<endl;
	return 0;
}