#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;

//structs
struct Part{
	string name;
	int quantity;
	double costPrice;
	double sellPrice;
};

//functions
void increase(Part arr[], int length){ //part C
	for(int i=0;i<length;i++)
		arr[i].sellPrice*=1.35;
}

int main(){
	//part A
	ifstream fin;
	fin.open("sales.txt");
	if(!fin.is_open()){
		cout<<"File couldn't be opened\n";
		exit(1);
	}
	Part partsArr[50], item;
	string temp;
	int i=0, c;
	fin>>temp;
	while(temp!="$$$$$"){
		partsArr[i].name=temp;
		fin>>partsArr[i].costPrice>>partsArr[i].sellPrice>>partsArr[i].quantity;
		c=i; //counter starts at end of list(i)
		while(c>0 && partsArr[c-1].name>temp){
			//swap from end till beginning until in ascending order by name
			item=partsArr[c];
			partsArr[c]=partsArr[c-1];
			partsArr[c-1]=item;
		}
		fin>>temp;
		i++;
	}
	
	//part B
	cout<<"Enter a part name\n> ";
	cin>>temp;
	bool exists=false;
	for(c=0;c<i;c++){
		//cout<<partsArr[c].name<<endl; //entered WIPER to see it go through all indexes and see they are sorted
		if(partsArr[c].name>temp) break;
		if(partsArr[c].name==temp){
			exists=true;
			cout<<(partsArr[c].quantity * (partsArr[c].sellPrice-partsArr[c].costPrice));
		}
	}
	if(!exists) cout<<(-1);
	return 0;
}