#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
using namespace std;

//structs


//functions
char lower(char ch){  return ch>='A'&&ch<='Z'?ch+32:ch;  } //also part B

bool isNymWord(char s[]){ //part C
	int L=strlen(s);
	return s[L-3]=='n' && s[L-2]=='y' && s[L-1]=='m';
}

int main(){
	//part A
	for(int a=0;a<26;a++){
		if(a%5==0) cout<<endl;
		cout<<('A'+a)<<' '<<('a'+a)<<'\t';
	}
	cout<<"\n\n"; //just to put visual space between A and B when outputting on the console
	
	//part B
	int i, c=0;
	char word1[128], word2[128];
	(cout<<"Enter first word: ", cin>>word1);
	(cout<<"Enter second word: ", cin>>word2);
	for(i=0;word1[i]!='\0'&&word2[i]!='\0';i++)
		if(lower(word1[i]) == lower(word2[i]))
			(cout<<lower(word1[i])<<" is matching letter in position "<<i<<endl, c++);
	cout<<endl<<"There are "<<c<<" matching letter/s";
	
	//testing C
	string BOOL[2]={"false","true"};
	cout<<"\n\n" <<BOOL[isNymWord((char*)"synonym")] <<' '<< BOOL[isNymWord((char*)"constant")] <<"\n\n";
	
	//part D
	srand(time(NULL));
	int dice[6], roll;
	for(int a=0;a<6;a++) dice[a]=0;
	for(int a=0;a<1000;a++){
		roll=rand()%8;
		if(roll==0) dice[1]++; //integer 2
		else if(roll==1) dice[3]++; //integer 4
		else dice[roll-2]++; //any other integer including 2 and 4
	}
	for(int a=0;a<6;a++) cout<<(a+1)<<" occured:\t"<<dice[a]<<" times"<<endl;
	
	return 0;
}