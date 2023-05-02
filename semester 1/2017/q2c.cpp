//You are given the same data as in part (b) but it is known that there are no more than
//80 jumpers. Write a program to read the data and send a report to the file output. txt
//consisting of jumper number and average jump in descending order by average jump
//(that is, best jumper first). You must store the jumper number and average jump in an
//propriate array of struct. Show all declarations.

//outputfile << jumpernumber, avgjump 
//	but in descending order of avgjump
//	
//store jumpernumber and avg jump in a struct
#include <iostream>
#include <fstream>

using namespace std;
struct Jumper{
	int jumperNumber;
	float avgjump;
};

int getSmallest (Jumper allJumpers[],int lo, int hi){
	int smallest=lo;
	
	for (int i = lo+1; i <=hi; i++)
		if (allJumpers[i].avgjump < allJumpers[smallest].avgjump)
			smallest = i;
	
	return smallest;
}
void swap (Jumper allJumpers[],int i, int j){
	Jumper temp = allJumpers[i];
	allJumpers[i] = allJumpers[j];
	allJumpers[j]=temp;
}

selectionSort (Jumper allJumpers[], int jumperCount){
	for (int j=0; j<jumperCount-1; j++){
		int sIndex = getSmallest(allJumpers,j,jumperCount-1);
		swap(allJumpers,j,sIndex);
	}
}

int main (){
	//There are comments to uncomment if you want to see it on console
	
	Jumper allJumpers[80];
	
	ifstream fin;
	ofstream fout;
	

	fin.open("input.txt");
	fout.open("output.txt");
	
	int val;
	fin >> val;
	
	int jumperCount=0;
	while (val!=0 && jumperCount <=80){
		allJumpers[jumperCount].jumperNumber = val;
		float sum=0;
		for (int i=0;i<3;i++){
			float num;
			fin >> num;
			sum += num;
		}
		allJumpers[jumperCount].avgjump = sum/3;
		jumperCount++;
		fin >> val;
	}
	//sorted in ascending order however will print in descending order
	//i choose ascending order selectionSort because that's what we were thought
	selectionSort (allJumpers,jumperCount);
	
	int k=0;//this is just for rank order...1 to n
	//decrementing loop, printing in reverse (to get ascending order)
	for (int i = jumperCount-1; i >= 0; i--,k++){
		fout << k+1 << ")" << allJumpers[i].jumperNumber
			<< "\t"<< allJumpers[i].avgjump <<endl;
	}
	cout << "now check output.txt";
	fin.close();
	fout.close();
	
}
