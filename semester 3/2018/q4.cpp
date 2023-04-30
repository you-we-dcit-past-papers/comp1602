#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;

//structs


//functions
bool ordered(char wrd[]){
	int i=0;
	char c=wrd[i]; //alright since wrd[0]==wrd[0]
	while(wrd[i]!='\0'){
		if(wrd[i]<c) return false;
		c=wrd[i];
		i++;
	}
	return true;
}

int main(){ //testing
	string BOOL[2]={"false","true"};
	cout<<BOOL[ordered((char*)"ABDEFHXZ")]<<' '<<BOOL[ordered((char*)"COMPUTER")];
	//should be printing: true false
	return 0;
}