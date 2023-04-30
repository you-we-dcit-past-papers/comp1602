#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	srand(time(NULL));
	int choices[40], i, c;
	//the indexes in the choices array are the lotto ticket numbers
	for(i=0;i<35;i++){
		c=rand()%40;
		while(choices[c]==1) c=(c+1)%40;
		choices[c]=1;
		if(i>0 && i%7==0) cout<<endl;
		cout<<(c+1)<<'\t';
	}
	return 0;
}