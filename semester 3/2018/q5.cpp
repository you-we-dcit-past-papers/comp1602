#include <fstream>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

//structs


//functions


int main(){
	srand(time(NULL));
	float sum=0;
	int cards[52], i, card;
	for(i=0;i<52;i++)
		cards[i]=1+(i%13); //1 to 13 that will happen 4 times
	
	for(i=0;i<200;i++){ //the simulation now
		sum-=20; //the cost to bet
		card=cards[ rand()%52 ]; //draw a card
		if(card%2==1) continue; //bet lost first condition
		card=cards[ rand()%52 ]; //draw another card
		if(card%2==0||card==11||card==13) continue; //bet lost second condition
		sum+=20+(3*card); //only bet win condition
	}
	
	cout<<"Average earning: "<<(sum/200);
	return 0;
}