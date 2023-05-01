#include <fstream>
#include <iostream>
#include <cstdlib>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

//structs


//functions
/*
a) num=[32,8,29,6,17,32,3,12,8,23]
i)
---- [3,8,29,6,17,32,32,12,8,23]
---- [3,6,29,8,17,32,32,12,8,23]
---- [3,6,8,29,17,32,32,12,8,23]

ii)
---- [8,29,6,17,32,3,12,8,23,32]
---- [8,6,17,29,3,12,8,23,32,32]
---- [6,8,17,3,12,8,23,29,32,32]

iii)
if the array was already sorted, the bubble sort would be more efficient
since insertion will still check a lot of points each iteration


b) num=[34,32,29,23,17,12,8,6,3,1]
i)
find: 29 with binary search
---- LO=0, HI=9, therefore mid as 4 is checked and found to be lower
---- LO=0, HI=3, therefore mid as 1 is checked and found to be higher
---- LO=2, HI=3, therefore mid as 2 is checked and found to be equal
THEREFORE it takes THREE iterations of binary search

ii)
find: 50 with binary search
---- LO=0, HI=9, therefore mid as 4 is checked and found to be lower
---- LO=0, HI=3, therefore mid as 1 is checked and found to be lower
---- LO=0, HI=0, therefore mid as 0 is checked and found to be lower
.... LO=0, HI=-1 therefore no search is done because it is not found
THEREFORE it takes THREE iterations of binary search
*/

int main(){
	
	return 0;
}