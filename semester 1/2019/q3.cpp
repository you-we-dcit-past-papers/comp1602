#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
using namespace std;

//structs


//functions
bool topHeavy(int A[][100], int numRows){ //part B
	int top=0, bot=0;
	for(int r=0;r<numRows-1;r++)
		for(int c=r+1;c<numRows;c++)
			if(A[r][c]!=0) top++;
	for(int r=1;r<numRows;r++)
		for(int c=0;c<r;c++)
			if(A[r][c]!=0) bot++;
	return top>bot;
}

int main(){
	//part A
	//i
	int m[6][6];
	//ii
	for(int r=0;r<6;r++)
		for(int c=0;c<6;c++) m[r][c]=r+c;
	//iii
	for(int i=0;i<6;i++){
		int temp=m[i][0];
		m[i][0]=m[i][6-1];
		m[i][6-1]=temp;
	}
	//iv
	srand(time(NULL));
	m[rand()%6][rand()%6]=-1;
	
	
	
	//testing A
	for(int r=0;r<6;r++){
		for(int c=0;c<6;c++) cout<<m[r][c]<<'\t';
		cout<<endl;
	}
	
	//testing B
	int wobbly[5][100]={
		{1,0,1,0,1},
		{0,2,0,1,0},
		{1,0,8,0,1},
		{0,1,0,4,1},
		{0,0,1,0,0}
	};
	int notWobbly[5][100]={
		{1,0,1,0,1},
		{0,2,0,1,0},
		{1,0,8,0,1},
		{1,1,0,4,1},
		{0,1,1,0,0}
	};
	string BOOL[2]={"false","true"};
	cout<<"\n\n" <<BOOL[topHeavy(wobbly,5)]<<'\t'<<BOOL[topHeavy(notWobbly,5)]<<endl;
	
	return 0;
}