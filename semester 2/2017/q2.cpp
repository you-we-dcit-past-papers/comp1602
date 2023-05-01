//structs
struct Pixel{ //part A
	int red;
	int blue;
	int green;
};

//functions
Pixel colour(Pixel point, int red, int green, int blue){ //part B
	point.red=red;
	point.blue=blue;
	point.green=green;
	return point;
}

int main(){
	//part C
	Pixel p;
	colour(p,218,112,214);
	
	//part D
	Pixel picture[100][150];
	
	//part E
	for(int r=0;r<100;r++){
		for(int c=0;c<150;c++){
			if(r<4 || c>=147)
				picture[r][c]=colour(picture[r][c],218,112,214);
		}
	}
	
	//part F
	Pixel temp;
	int red, green, blue;
	for(int r=0;r<100;r++){
		for(int c=0;c<150;c++){
			temp=picture[r][c];
			red=0.3*temp.red;
			blue=0.11*temp.blue;
			green=0.59*temp.green;
			picture[r][c]=colour(temp,red,green,blue);
		}
	}
	
	//part G
	Pixel top;
	for(int r=0;r<100/2;r++){
		for(int c=0;c<150;c++){
			top=picture[r][c];
			picture[r][c]=picture[100-1-r][c];
			picture[100-1-r][c]=top;
		}
	}
	
	//part H
	int halfway=100*150/2, sparseCount=0;
	for(int r=0;r<100;r++)
		for(int c=0;c<150;c++)
			if(picture[r][c].red==0 && picture[r][c].blue==0 && picture[r][c].green==0)
				sparseCount++;
	bool sparse=sparseCount>=halfway;
	return 0;
}